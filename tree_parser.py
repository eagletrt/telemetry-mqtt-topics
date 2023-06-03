
def parse_report_tree(key: str, node: dict, parent_config: dict) -> list:
    topics_list = []

    # Default values
    topic = key
    description = "Not defined"
    qos = 0
    role = [1,2,3,4]
    deprecated = False
    variables = []

    # Concatenate with parent topic
    if "topic" in parent_config:
        topic = parent_config["topic"] + "/" + key
    # Set description if defined
    if "description" in node:
        description = node["description"]
    # Use qos of the parent topic if not defined
    if "qos" not in node and "qos" in parent_config:
        qos = parent_config["qos"]
    # Use role of the parent topic if not defined
    if "role" not in node and "role" in parent_config:
        role = parent_config["role"]
    # Use deprecated of the parent topic
    if "deprecated" in parent_config and parent_config["deprecated"]:
        deprecated = True
    # Concatenate with parent variables if defined
    if "variables" in parent_config:
        variables.extend(parent_config["variables"])
    if "variables" in node:
        variables.extend(node["variables"])

    parsed_node = {
        "topic": topic,
        "description": description,
        "qos": qos,
        "role": role,
        "deprecated": deprecated,
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

    file_name = "topics.example.jsonc"
    topics = None

    with open(file_name, "r") as file:
        topics = json.load(file)

    print ("✅ File loaded")

    topics_list = []

    for key, value in topics.items():
        topics_list.extend(parse_report_tree(key, value, {}))

    with open("output.json", "w") as file:
        json.dump(topics_list, file, indent=4)