import re
import os
from .c_generator_strings import *


def generate(topics_list, roles):
    make_dirs()

    generate_extra()
    generate_c(topics_list, roles)
    generate_h(topics_list, roles)


def make_dirs():
    if not os.path.exists("out/src"):
        os.makedirs("out/src")
    if not os.path.exists("out/inc"):
        os.makedirs("out/inc")

def generate_extra():
    if not os.path.exists("out/CMakeLists.txt"): # CMakeLists.txt
        with open("cpp_template/CMakeLists.txt", "r") as file:
            file_content = file.read()
        with open("out/CMakeLists.txt", "w") as file:
            file.write(file_content)
    

def generate_c(topics_list, roles):
    file_content = ""


    # generate mqtt_topic.c
    with open("cpp_template/src/mqtt_topics.c.template", "r") as file:
        file_content = file.read()


    # replace <can_subscribe> and <can_publish>
    
    can_subscribe_str = ""
    can_publish_str = ""
    first = True
    sub_switch_str = ""
    pub_switch_str = ""
    for role in roles:
        if first:
            first = False
            role_if = f"if (role == ROLE_{role}){{\n\t\tswitch(topic) {{\n"
        else:
            role_if = f" else if (role == ROLE_{role}) {{\n\t\tswitch(topic) {{\n"
        can_subscribe_str += role_if
        can_publish_str += role_if
        sub_num = 0
        pub_num = 0
        sub_case_el = ""
        pub_case_el = ""
        for topic in topics_list:
            if "subscribeRoles" in topic and role in topic['subscribeRoles']:
                can_subscribe_str += f"\t\t\tcase {camel_to_snake(topic['alias']).upper()}:\n"
                sub_case_el += GET_PUB_SUB_CASE_ARRAY_EL.format(
                    i = sub_num,
                    topic_name=camel_to_snake(topic['alias']).lower(),
                    topic_params=", ".join(['"+"' for param in topic['variables']])
                )
                sub_num += 1
            if "publishRoles" in topic and role in topic['publishRoles']:
                can_publish_str += f"\t\t\tcase {camel_to_snake(topic['alias']).upper()}:\n"
                pub_case_el += GET_PUB_SUB_CASE_ARRAY_EL.format(
                    i = pub_num,
                    topic_name=camel_to_snake(topic['alias']).lower(),
                    topic_params=", ".join(['"+"' for param in topic['variables']])
                )
                pub_num += 1

        sub_switch_str += GET_PUB_SUB_SWITCH.format(role=role, pub_sub_topic_num=sub_num, get_pub_sub_array_el=sub_case_el)
        pub_switch_str += GET_PUB_SUB_SWITCH.format(role=role, pub_sub_topic_num=pub_num, get_pub_sub_array_el=pub_case_el)

        can_subscribe_str += "\t\t\t\treturn true;\n\t\t\tbreak;\n\t\t}\n\t}"
        can_publish_str += "\t\t\t\treturn true;\n\t\t\tbreak;\n\t\t}\n\t}"
    
    file_content = file_content.replace("<can_subscribe>", can_subscribe_str).replace("<can_publish>", can_publish_str)
    file_content = file_content.replace("<switch_sub_role>", sub_switch_str)
    file_content = file_content.replace("<switch_pub_role>", pub_switch_str)


    # replace <build_functions>
    build_functions = ""
    for topic in topics_list:
        params = ""
        topic_str = "\""
        topic_params = ""
        for param in topic['variables']:
            params += f"const char* {param['name']}, "
            topic_str += "%s/"
            topic_params += f"{param['name']}, "
        if params != "":
            params = params[:-2]
            topic_str = topic_str[:-1] + "\""
            topic_params = topic_params[:-2]

        build_functions += f"topic_t build_{camel_to_snake(topic['alias']).lower()}({params}) {{\n\ttopic_t topic = {{\n\t\t.qos = {topic['qos']},\n\t\t.retained = {'true' if topic['retained'] else 'false'}\n\t}};\n\tsnprintf(topic.topic, TOPIC_MAX_STR_LEN, {topic_str}, {topic_params});\n\n\treturn topic;\n}}\n\n"

    file_content = file_content.replace("<build_functions>", build_functions)


    with open(f"out/src/mqtt_topics.c", "w") as file:
        file.write(file_content)


def generate_h(topics_list, roles):
    file_content = ""

    # generate MQTTTopics.h
    with open("cpp_template/inc/mqtt_topics.h.template", "r") as file:
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
            params += f"const char* {param['name']}, "
        params = params[:-2]

        function_str = f"topic_t build_{camel_to_snake(topic['alias']).lower()}({params});"

        build_functions += f"{function_str}\n"

    file_content = file_content.replace("<build_functions>", build_functions)

    
    with open(f"out/inc/mqtt_topics.h", "w") as file:
        file.write(file_content)


def camel_to_snake(topic):
    pattern = re.compile(r'(?<!^)(?=[A-Z])')
    str = "TOPIC_" + pattern.sub('_', topic).lower()[:-6]

    return str
