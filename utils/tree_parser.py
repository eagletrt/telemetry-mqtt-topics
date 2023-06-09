
def parse_report_tree(key: str, node: dict, parent_config: dict) -> list:
    topics_list = []

    # Default values
    topic = key
    alias = None
    description = ""
    qos = 0
    subscribeRoles = []
    publishRoles = []
    retain = False
    variables = []

    # Concatenate with parent topic
    if "topic" in parent_config:
        topic = parent_config["topic"] + "/" + key
    if "alias" not in node:
        print("ERROR! Alias not defined for topic: " + topic)
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
    if "subscribeRoles" in node:
        subscribeRoles = node["subscribeRoles"]
    elif "subscribeRoles" in parent_config:
        subscribeRoles = parent_config["subscribeRoles"]
    # Use publish role of the parent topic if not defined
    if "publishRoles" in node:
        publishRoles = node["publishRoles"]
    elif "publishRoles" in parent_config:
        publishRoles = parent_config["publishRoles"]
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
        "subscribeRoles": subscribeRoles,
        "publishRoles": publishRoles,
        "retain": retain,
        "variables": variables
    }

    # Append the parsed node to the list
    topics_list.append(parsed_node)

    # Recusive call to parse the subtopics
    if "sub_topics" in node:
        for key, value in node["sub_topics"].items():
            topics_list.extend(parse_report_tree(key, value, parsed_node))

    return topics_list

if __name__ == "__main__":
    import jstyleson as json

    file_name = "topics.jsonc"
    topics = None

    with open(file_name, "r") as file:
        topics = json.load(file)

    topics_list = []

    for key, value in topics.items():
        topics_list.extend(parse_report_tree(key, value, {}))

    with open("output.json", "w") as file:
        json.dump(topics_list, file, indent=4)