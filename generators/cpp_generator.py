import re
import os

def generate(topics_list):
    make_dirs()
    copy_static_files()

    generate_cpp(topics_list)
    generate_h(topics_list)

def make_dirs():
    if not os.path.exists("out/src"):
        os.makedirs("out/src")
    if not os.path.exists("out/inc"):
        os.makedirs("out/inc")

def copy_static_files():
    if not os.path.exists("out/inc/TopicString.h"): # TopicString.h
        with open("cpp_template/inc/TopicString.h", "r") as file:
            file_content = file.read()
        with open("out/inc/TopicString.h", "w") as file:
            file.write(file_content)

    if not os.path.exists("out/src/TopicString.cpp"): # TopicString.cpp
        with open("cpp_template/src/TopicString.cpp", "r") as file:
            file_content = file.read()
        with open("out/src/TopicString.cpp", "w") as file:
            file.write(file_content)

    if not os.path.exists("out/inc/MqttTopic.h"): # MqttTopic.h
        with open("cpp_template/inc/MqttTopic.h", "r") as file:
            file_content = file.read()
        with open("out/inc/MqttTopic.h", "w") as file:
            file.write(file_content)

    if not os.path.exists("out/src/MqttTopic.cpp"): # MqttTopic.cpp
        with open("cpp_template/src/MqttTopic.cpp", "r") as file:
            file_content = file.read()
        with open("out/src/MqttTopic.cpp", "w") as file:
            file.write(file_content)

    if not os.path.exists("out/CMakeLists.txt"): # CMakeLists.txt
        with open("cpp_template/CMakeLists.txt", "r") as file:
            file_content = file.read()
        with open("out/CMakeLists.txt", "w") as file:
            file.write(file_content)

def generate_cpp(topics_list):
    file_content = ""

    # generate MqttTopics.cpp
    with open("cpp_template/src/MqttTopics.cpp.template", "r") as file:
        file_content = file.read()

    topics = ""
    for topic in topics_list:
        lowerCamel = topic['alias'][0].lower() + topic['alias'][1:] # first letter to lowercase
        topic_str = f"const {topic['alias']} MqttTopics::{lowerCamel} = {topic['alias']}();"
        topics += f"{topic_str}\n"

    file_content = file_content.replace("<topics>", topics)

    with open(f"out/src/MqttTopics.cpp", "w") as file:
        file.write(file_content)


    # generate MqttTopicsList.cpp
    with open("cpp_template/src/MqttTopicsList.cpp.template", "r") as file:
        file_content = file.read()

    definitions = ""
    get_functions = ""
    for topic in topics_list:
        subscribeRoles = ""
        for subRole in topic["subscribeRoles"]:
            subscribeRoles += f"{subRole}, "
        if subscribeRoles != "":
            subscribeRoles = subscribeRoles[:-2]
        
        publishRoles = ""
        for pubRole in topic["publishRoles"]:
            publishRoles += f"{pubRole}, "
        if publishRoles != "":
            publishRoles = publishRoles[:-2]

        retained = "true" if topic["retained"] else "false"

        topic_definition = f"{topic['alias']}::{topic['alias']}()\n\t: MqttTopic(\"{topic['topic']}\", {topic['qos']}, {{{subscribeRoles}}}, {{{publishRoles}}}, {retained}) {{}}"
        definitions += f"\n{topic_definition}\n"

        params = ""
        for variable in filter(lambda x: "default" not in x, topic["variables"]):
            params += f"const std::string &{variable['name']}, "
        default_variables = []
        for variable in filter(lambda x: "default" in x, topic["variables"]):
            default_variables.append(variable)
        
        default_variables.reverse()
        for variable in default_variables:
            params += f"const std::string &{variable['name']}, "
        if params != "":
            params = params[:-2]

        variables = ""
        for variable in topic["variables"]:
            name = variable["name"]
            variables += f'\tstr.replace(str.find("<{name}>"), {len(name) + 2}, {name});\n'

        topic_get = f"TopicString {topic['alias']}::get({params}) const {{\n\tstd::string str(topic);\n\n{variables}\n\treturn str;\n}}"
        get_functions += f"{topic_get}\n\n"

    file_content = file_content.replace("<definitions>", definitions).replace("<get_functions>", get_functions)

    with open(f"out/src/MqttTopicsList.cpp", "w") as file:
        file.write(file_content)


def generate_h(topics_list):
    file_content = ""

    # generate MqttTopics.h
    with open("cpp_template/inc/MqttTopics.h.template", "r") as file:
        file_content = file.read()

    # replace <topics>
    topics = ""
    for topic in topics_list:
        lowerCamel = topic['alias'][0].lower() + topic['alias'][1:] # first letter to lowercase
        topic_str = f"static const {topic['alias']} {lowerCamel};"
        topics += f"\t{topic_str}\n"

    file_content = file_content.replace("<topics>", topics)

    with open(f"out/inc/MqttTopics.h", "w") as file:
        file.write(file_content)


    # generate MqttTopicsList.h
    with open("cpp_template/inc/MqttTopicsList.h.template", "r") as file:
        file_content = file.read()

    # replace <topics>
    topics = ""
    for topic in topics_list:
        params = ""
        for variable in filter(lambda x: "default" not in x, topic["variables"]):
            params += f"const std::string &{variable['name']}, "

        default_variables = []
        for variable in filter(lambda x: "default" in x, topic["variables"]):
            default_variables.append(variable)
        default_variables.reverse()
        for variable in default_variables:
            params += f"const std::string &{variable['name']} = \"{variable['default']}\", "
        if params != "":
            params = params[:-2]
        get_str = f"TopicString get({params}) const;"
        
        topics += f"\nclass {topic['alias']} : public MqttTopic\n{{\n\tfriend class MqttTopics;\n\npublic:\n\t{topic['alias']}(const {topic['alias']} &) = delete;\n\t{topic['alias']} &operator=(const {topic['alias']} &) = delete;\n\t~{topic['alias']}() override = default;\n\nprivate:\n\t{topic['alias']}();\n\npublic:\n\t{get_str}\n}};\n\n"

    file_content = file_content.replace("<topics>", topics)

    with open(f"out/inc/MqttTopicsList.h", "w") as file:
        file.write(file_content)
