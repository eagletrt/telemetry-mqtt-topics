import re
import os

def generate(topics_list):
    make_dirs()
    copy_static_files()
    generate_namespace_file(topics_list)
    for topic in topics_list:
        generate_cpp(topic)
        generate_h(topic)

def make_dirs():
    if not os.path.exists("src"):
        os.makedirs("src")
    if not os.path.exists("src/topics"):
        os.makedirs("src/topics")
    if not os.path.exists("inc"):
        os.makedirs("inc")
    if not os.path.exists("inc/topics"):
        os.makedirs("inc/topics")

def copy_static_files():
    if not os.path.exists("inc/TopicString.h"):
        with open("cpp_template/TopicString.h", "r") as file:
            file_content = file.read()
        with open("inc/TopicString.h", "w") as file:
            file.write(file_content)
    if not os.path.exists("src/TopicString.cpp"):
        with open("cpp_template/TopicString.cpp", "r") as file:
            file_content = file.read()
        with open("src/TopicString.cpp", "w") as file:
            file.write(file_content)

def generate_cpp(topic):
    file_content = ""

    with open("cpp_template/topic.cpp.template", "r") as file:
        file_content = file.read()

    # replace alias
    file_content = file_content.replace("<alias>", topic["alias"])

    # replace topic
    file_content = file_content.replace("<topic>", topic["topic"])

    # replace get function parameters
    parameters = ""
    for variable in filter(lambda x: "default" not in x, topic["variables"]):
        parameters += f"const std::string& {variable['name']}, "
    for variable in filter(lambda x: "default" in x, topic["variables"]):
        parameters += f"const std::string& {variable['name']} = \"{variable['default']}\", "
    if parameters != "":
        parameters = parameters[:-2]
    file_content = file_content.replace("<variables:params>", parameters)

    # str replace variables
    variables = ""
    for variable in topic["variables"]:
        name = variable["name"]
        variables += f'\t\tstr.replace(str.find("<{name}>"), {len(name) + 2}, {name});\n'
    file_content = file_content.replace("<variables:replaces>", variables)

    with open(f"src/topics/{topic['alias']}.cpp", "w") as file:
        file.write(file_content)

def generate_h(topic):
    file_content = ""

    with open("cpp_template/topic.h.template", "r") as file:
        file_content = file.read()

    # replace define name
    upper = re.sub(r'(?<!^)(?=[A-Z])', '_', topic["alias"]).upper()
    file_content = file_content.replace("<alias:upper>", upper)

    # replace alias
    file_content = file_content.replace("<alias>", topic["alias"])

    # replace get function parameters
    parameters = ""
    for variable in filter(lambda x: "default" not in x, topic["variables"]):
        parameters += f"const std::string& {variable['name']}, "
    for variable in filter(lambda x: "default" in x, topic["variables"]):
        parameters += f"const std::string& {variable['name']} = \"{variable['default']}\", "
    if parameters != "":
        parameters = parameters[:-2]
    file_content = file_content.replace("<variables:params>", parameters)

    with open(f"inc/topics/{topic['alias']}.h", "w") as file:
        file.write(file_content)

def generate_namespace_file(topics_list):
    file_content = ""

    with open("cpp_template/namespace.h.template", "r") as file:
        file_content = file.read()

    # replace includes
    includes = ""
    for topic in topics_list:
        includes += f"#include \"{topic['alias']}.h\"\n"
    file_content = file_content.replace("<includes>", includes)

    # replace classes
    classes = ""
    for topic in topics_list:
        classes += f"\tclass {topic['alias']};\n"
    file_content = file_content.replace("<classes>", classes)

    with open("inc/Topics.h", "w") as file:
        file.write(file_content)