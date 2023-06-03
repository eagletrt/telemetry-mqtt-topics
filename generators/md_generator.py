def generate(topics_list, filename):
    with open(filename, "w") as file:
        file.write("# Topics\n\n")
        for topic in topics_list:
            if not topic["deprecated"]:
                file.write(f"## {topic['alias']}\n")
                file.write(f"### {topic['topic']}\n")
                file.write(f"> {topic['description']}\n")
                file.write(f"- **Quality of Service**: {topic['qos']}\n")
                file.write(f"- **Role**: ")
                for role in topic["role"]:
                    file.write(f"{role} ")
                file.write("\n- **Variables**:\n")
                for variable in topic["variables"]:
                    file.write(f"  - {variable['name']} -> {variable['description']} ")
                    if "default" in variable:
                        file.write(f"(default: {variable['default']})\n")
                file.write("\n")