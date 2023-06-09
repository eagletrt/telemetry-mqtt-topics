import generators.md_generator as md_generator
import generators.cpp_generator as cpp_generator
import utils.tree_parser as tree_parser
import jstyleson as json
import os

if __name__ == "__main__":

    file_name = "topics_tree.jsonc"
    topics = None

    with open(file_name, "r") as file:
        topics = json.load(file)

    topics_list = []

    for key, value in topics.items():
        topics_list.extend(tree_parser.parse_report_tree(key, value, {}))

    roles = []
    for topic in topics_list:
        for role in topic['subscribeRoles']:
            if role not in roles:
                roles.append(role)
        for role in topic['publishRoles']:
            if role not in roles:
                roles.append(role)

    print("✅ Tree parsed")

    # check if out dir exists
    if not os.path.exists("out"):
        os.makedirs("out")

    with open("out/topics.json", "w") as file:
        file.write(json.dumps(topics_list, indent=4))
    print("✅ JSON generated")

    md_generator.generate(topics_list, "out/documentation.md")
    print("✅ Markdown generated")

    cpp_generator.generate(topics_list, roles)
    print("✅ C++ generated")