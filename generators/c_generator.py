import re
import os


def generate(topics_list, roles):
    make_dirs()

    generate_c(topics_list, roles)
    generate_h(topics_list, roles)


def make_dirs():
    if not os.path.exists("out/src"):
        os.makedirs("out/src")
    if not os.path.exists("out/inc"):
        os.makedirs("out/inc")


def generate_c(topics_list, roles):
    file_content = ""


    # generate mqtt_topic.c
    with open("cpp_template/src/mqtt_topic.c", "r") as file:
        file_content = file.read()


    # replace <can_subscribe> and <can_publish>
    can_subscribe = ""
    can_publish = ""
    first = True
    for role in roles:
        if first:
            first = False
            role_if = f"if (role == ROLE_{role}){{\n\t\tswitch(topic) {{\n"
        else:
            role_if = f" else if (role == ROLE_{role}) {{\n\t\tswitch(topic) {{\n"
        can_subscribe += role_if
        can_publish += role_if
        for topic in topics_list:
            if "subscribeRoles" in topic and role in topic['subscribeRoles']:
                can_subscribe += f"\t\t\tcase {camel_to_snake(topic['alias']).upper()}:\n"
            if "publishRoles" in topic and role in topic['publishRoles']:
                can_publish += f"\t\t\tcase {camel_to_snake(topic['alias']).upper()}:\n"
        can_subscribe += "\t\t\t\treturn true;\n\t\t\tbreak;\n\t\t}\n\t}"
        can_publish += "\t\t\t\treturn true;\n\t\t\tbreak;\n\t\t}\n\t}"
    
    can_subscribe += "\n\t}"
    can_publish += "\n\t}"
    
    file_content = file_content.replace("<can_subscribe>", can_subscribe).replace("<can_publish>", can_publish)


    # replace <build_functions>
    build_functions = ""
    for topic in topics_list:
        params = ""
        topic_str = "\""
        topic_params = ""
        for param in topic['variables']:
            params += f"char* {param['name']}, "
            topic_str += "%s/"
            topic_params += f"{param['name']}, "
        if params != "":
            params = params[:-2]
            topic_str = topic_str[:-1] + "\""
            topic_params = topic_params[:-2]

        build_functions += f"topic_t build_status_info_topic({params}) {{\n\ttopic_t topic = {{\n\t\t.qos = {topic['qos']},\n\t\t.retained = {'true' if topic['retained'] else 'false'}\n\t}};\n\tsnprintf(topic.topic, TOPIC_MAX_STR_LEN, {topic_str}, {topic_params});\n\n\treturn topic;\n}}\n\n"

    file_content = file_content.replace("<build_functions>", build_functions)


    with open(f"out/src/mqtt_topic.c", "w") as file:
        file.write(file_content)


def generate_h(topics_list, roles):
    file_content = ""

    # generate MQTTTopics.h
    with open("cpp_template/inc/mqtt_topic.h", "r") as file:
        file_content = file.read()


    # replace <roles>
    roles_str = ""
    for role in roles:
        if role == 128:
            roles_str = roles_str[:-2] + "\n\n\t"
        roles_str += f"ROLE_{role} = {role},\n\t"
    roles_str = roles_str[:-2] + "\n"

    file_content = file_content.replace("<roles>", roles_str)


    # replace <topics>
    topics = ""
    first = True
    for topic in topics_list:
        topic_str = ""
        topic_enum = camel_to_snake(topic['alias']).upper()
        if first:
            first = False
            topic_str += f"{topic_enum} = 0,"
        else:
            topic_str = f"\t{topic_enum},"

        topics += f"{topic_str}\n"
    topics = topics[:-2]

    file_content = file_content.replace("<topics>", topics)


    # replace <build_functions>
    build_functions = ""
    for topic in topics_list:
        params = ""
        for param in topic['variables']:
            params += f"char* {param['name']}, "
        params = params[:-2]

        function_str = f"topic_t build_{camel_to_snake(topic['alias']).lower()}({params});"

        build_functions += f"{function_str}\n"

    file_content = file_content.replace("<build_functions>", build_functions)

    
    with open(f"out/inc/mqtt_topic.h", "w") as file:
        file.write(file_content)


def camel_to_snake(topic):
    pattern = re.compile(r'(?<!^)(?=[A-Z])')
    str = "TOPIC_" + pattern.sub('_', topic).lower()[:-6]

    return str
