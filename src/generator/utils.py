import re
from graphviz import Source


def generate_readme(topics, file):
    file.write("# Topics\n\n")
    file.write("## Graph\n\n")
    file.write("![Graph](topics.png)\n\n")
    file.write("## Full description\n\n")
    file.write("See [docs.md](docs.md) for full description\n\n")


def generate_dot(topics, filename):
    topics_dot = [
        '"' + '" -- "'.join(el["topic"].split("/")[-2:]) + '"' for el in topics
    ]
    topics_dot = ";\n".join(topics_dot)

    out_str = f"""graph {{
    {topics_dot}
    }}"""
    s = Source(out_str, format="png")
    s.render(outfile=filename + ".png")


def generate_docs(topics, file):
    file.write("# Topics\n\n")
    for topic in topics:
        file.write(f"## {topic['alias'].replace('<', '&lt;')}\n")
        file.write(f"### {topic['topic'].replace('<', '&lt;')}\n")
        file.write(f"> {topic['description'].replace('<', '&lt;')}\n")
        file.write(f"- **Quality of Service**: {topic['qos']}\n")
        file.write(f"- **Subscribe Roles**: ")
        for subRole in topic["subscribe_roles"]:
            file.write(f"{subRole} ")
        file.write(f"- **Publish Roles**: ")
        for pubRole in topic["publish_roles"]:
            file.write(f"{pubRole} ")
        file.write("\n- **Retain**: ")
        file.write("Yes" if topic["retain"] else "No")
        file.write("\n- **Variables**:\n")
        for variable in topic["variables"]:
            file.write(variable)
        file.write("\n")


def parse_report_tree(key: str, node: dict, parent_config: dict) -> list:
    topics = []

    # Default values
    topic = key
    alias = None
    description = ""
    qos = 0
    retain = False
    subscribe_roles = []
    publish_roles = []
    variables = []

    # Concatenate with parent topic
    if "topic" in parent_config:
        topic = parent_config["topic"] + "/" + key
    if "alias" not in node:
        print("Alias not defined for topic: " + topic)
        exit(1)
    else:
        alias = node["alias"]
    # Set description if defined
    if "description" in node:
        description = node["description"]
    # Use qos of the parent topic if not defined
    if "qos" in node:
        qos = node["qos"]
    elif "qos" in parent_config:
        qos = parent_config["qos"]
    # Use subscribe role of the parent topic if not defined
    if "subscribe_roles" in node:
        subscribe_roles = node["subscribe_roles"]
    elif "subscribe_roles" in parent_config:
        subscribe_roles = parent_config["subscribe_roles"]
    # Use publish role of the parent topic if not defined
    if "publish_roles" in node:
        publish_roles = node["publish_roles"]
    elif "publish_roles" in parent_config:
        publish_roles = parent_config["publish_roles"]
    # Use retain of the parent topic if not defined
    if "retain" in node:
        retain = node["retain"]
    elif "retain" in parent_config:
        retain = parent_config["retain"]
    # Concatenate with parent variables if defined
    if "variables" in parent_config:
        variables.extend(parent_config["variables"])
    if "variables" in node:
        variables.extend(node["variables"])

    parsed_node = {
        "topic": topic,
        "alias": alias,
        "description": description,
        "qos": qos,
        "subscribe_roles": subscribe_roles,
        "publish_roles": publish_roles,
        "retain": retain,
        "variables": variables,
    }

    # Append the parsed node to the list
    topics.append(parsed_node)

    # Recusive call to parse the subtopics
    if "sub_topics" in node:
        for key, value in node["sub_topics"].items():
            topics.extend(parse_report_tree(key, value, parsed_node))

    return topics


def role_enum_name(role: str) -> str:
    return "role_" + re.sub(r"(?<!^)(?=[A-Z])", "_", role).lower()


def topic_enum_name(topic: str) -> str:
    return re.sub(r"(?<!^)(?=[A-Z])", "_", topic).lower()


def topic_get_name(topic: str) -> str:
    return "GetTopic" + topic


def topic_get_variables(topic: dict) -> str:
    ret = str()
    for variable in topic["variables"]:
        if ret != "":
            ret += ", "
        ret += "const std::string& " + variable

    return ret


def topic_get_variables_py(topic: dict) -> str:
    ret = str()
    for variable in topic["variables"]:
        if ret != "":
            ret += ", "
        ret += variable

    return ret


def topic_get_variables_values(topic: dict) -> str:
    ret = str()
    for variable in topic["variables"]:
        if ret != "":
            ret += ", "
        ret += variable

    return ret


def topic_topic_with_variables(topic: dict) -> str:
    ret = topic["topic"]

    for variable in topic["variables"]:
        ret = ret.replace(f"/<{variable}>/", f' + "/" + {variable} + "/" + ')
        ret = ret.replace(f"/<{variable}>", f' + "/" + {variable}')
        ret = ret.replace(f"<{variable}>/", f'{variable} + "/" + ')
        ret = ret.replace(f"<{variable}>", f'{variable} + "/" + ')

    split = ret.split()
    for s in split:
        if s != '"/"' and s != "+":
            check = True
            for variable in topic["variables"]:
                if s == variable:
                    check = False
            if check:
                split[split.index(s)] = f'"{s}"'

    ret = " ".join(split)

    if ret.endswith('+ "/" +'):
        ret = ret[:-8]

    return ret
