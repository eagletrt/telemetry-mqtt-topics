import argparse
import os
import jstyleson as json
import jinja2
import utils


parser = argparse.ArgumentParser(description="Generate py code from topics_tree")

parser.add_argument(
    "topics_tree_dir", type=str, help="directory path of topics_tree file"
)
parser.add_argument("output_dir", type=str, help="directory path of generated files")

with open("src/templates/python/message_parser.py.j2", "r") as file:
    message_parser_template = jinja2.Template(file.read())


if __name__ == "__main__":
    args = parser.parse_args()

    os.path.isdir(args.topics_tree_dir) or parser.error(
        f"{args.topics_tree_dir} is not a directory"
    )
    os.makedirs(os.path.join(args.output_dir, "inc"), exist_ok=True)
    os.makedirs(os.path.join(args.output_dir, "src"), exist_ok=True)

    filename = "topics_tree.jsonc"
    topics_json = None

    with open(os.path.join(args.topics_tree_dir, filename), "r") as file:
        topics_json = json.load(file)

    topics = []

    for key, value in topics_json.items():
        topics.extend(utils.parse_report_tree(key, value, {}))

    roles = []
    variables = []

    for topic in topics:
        for role in topic["subscribe_roles"]:
            if role not in roles:
                roles.append(role)
        for role in topic["publish_roles"]:
            if role not in roles:
                roles.append(role)
        for variable in topic["variables"]:
            if variable not in variables:
                variables.append(variable)

    print(f"Generating files...\n")

    with open(os.path.join(args.output_dir, "inc", "message_parser.py"), "w") as file:
        file.write(message_parser_template.render(topics=topics, roles=roles))
        print(f"✅ Generated message_parser.py")

    # with open(os.path.join(args.output_dir, "topics.json"), "w") as file:
    #     file.write(json.dumps(topics, indent=4))
    #     print("✅ Generated topics.json")

    # utils.generate_dot(topics, os.path.join(args.output_dir, "topics"))
    # print("✅ Generated topics.dot and topics.png")

    # with open(os.path.join(args.output_dir, "readme.md"), "w") as file:
    #     utils.generate_readme(topics, file)
    #     print("✅ Generated readme.md")

    # with open(os.path.join(args.output_dir, "docs.md"), "w") as file:
    #     utils.generate_docs(topics, file)
    #     print("✅ Generated docs.md")
