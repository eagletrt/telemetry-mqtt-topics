import argparse
import os
import jstyleson as json
import jinja2
import utils

parser = argparse.ArgumentParser(description='Generate cpp code from topics_tree')

parser.add_argument('topics_tree_dir', type=str, help='directory path of topics_tree file')
parser.add_argument('output_dir', type=str, help='directory path of generated files')

with open('src/templates/mqtt_topics.h.j2', 'r') as file:
    h_template = jinja2.Template(file.read())
with open('src/templates/mqtt_topics.cpp.j2', 'r') as file:
    cpp_template = jinja2.Template(file.read())
with open('src/templates/CMakeLists.txt.j2', 'r') as file:
    cmake_template = jinja2.Template(file.read())

if __name__ == '__main__':
    args = parser.parse_args()
    
    os.path.isdir(args.topics_tree_dir) or parser.error(f'{args.topics_tree_dir} is not a directory')
    os.makedirs(os.path.join(args.output_dir, 'inc'), exist_ok=True)
    os.makedirs(os.path.join(args.output_dir, 'src'), exist_ok=True)
    
    filename = 'topics_tree.jsonc'
    topics_json = None

    with open(os.path.join(args.topics_tree_dir, filename), 'r') as file:
        topics_json = json.load(file)

    topics = []

    for key, value in topics_json.items():
        topics.extend(utils.parse_report_tree(key, value, {}))

    roles = []
    variables = []
    
    for topic in topics:
        for role in topic['subscribe_roles']:
            if role not in roles:
                roles.append(role)
        for role in topic['publish_roles']:
            if role not in roles:
                roles.append(role)
        for variable in topic['variables']:
            if variable['name'] not in variables:
                variables.append(variable['name'])
                                
    print(f'Generating files...\n')

    with open(os.path.join(args.output_dir, 'inc', 'mqtt_topics.h'), 'w') as file:
        file.write(h_template.render(topics=topics, roles=roles, variables=variables, utils=utils))
        print(f'✅ Generated mqtt_topics.h')
        
    with open(os.path.join(args.output_dir, 'src', 'mqtt_topics.cpp'), 'w') as file:
        file.write(cpp_template.render(topics=topics, roles=roles, variables=variables, utils=utils))
        print(f'✅ Generated mqtt_topics.cpp')
        
    with open(os.path.join(args.output_dir, 'CMakeLists.txt'), 'w') as file:
        file.write(cmake_template.render())
        print(f'✅ Generated CMakeLists.txt')

    with open(os.path.join(args.output_dir, 'topics.json'), 'w') as file:
        file.write(json.dumps(topics, indent=4))
        print('✅ Generated topics.json')
        
    with open(os.path.join(args.output_dir, 'docs.md'), 'w') as file:
        utils.generate_md(topics, file)
        print('✅ Generated docs.md')