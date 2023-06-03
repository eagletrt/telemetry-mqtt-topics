import generators.md_generator as md_generator
import generators.cpp_generator as cpp_generator
import utils.tree_parser as tree_parser
import jstyleson as json

if __name__ == "__main__":

    file_name = "topics.jsonc"
    topics = None

    with open(file_name, "r") as file:
        topics = json.load(file)

    topics_list = []

    for key, value in topics.items():
        topics_list.extend(tree_parser.parse_report_tree(key, value, {}))

    print("✅ Tree parsed")

    with open("topics.json", "w") as file:
        file.write(json.dumps(topics_list, indent=4))
    print("✅ JSON generated")

    md_generator.generate(topics_list, "documentation.md")
    print("✅ Markdown generated")

    cpp_generator.generate(topics_list)
    print("✅ C++ generated")