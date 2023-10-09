# mqtt_topics.c

# <can_subscribe> and <can_publish>

CAN_IF = '''if (role == ROLE_{role}){{
        switch(topic) {{{can_case_el}
            default:
                break;
        }}
    }}'''


CAN_ELIF = ''' else if (role == ROLE_{role}) {{
        switch(topic) {{{can_case_el}
            default:
                break;
        }}
    }}'''


CAN_CASE_EL = '''{can_array_el}
                return true;
            break;'''


CAN_ARRAY_EL = '''
            case {topic_name}:'''


# <switch_sub_role> and <switch_pub_role>

GET_PUB_SUB_SWITCH = '''
      case ROLE_{role}:
        ret.resize({pub_sub_topic_num});
        {get_pub_sub_array_el}
        break;'''


GET_PUB_SUB_CASE_ARRAY_EL = '''
        ret[{i}] = build_{topic_name}({topic_params});'''


# <build_functions>

BUILD_FUNCTION = '''
topic_t build_{topic_name}({params}) {{
    return topic_t{{{topic_params}{topic_str}, {topic_qos}, {topic_retain}}};
}}
'''

TOPIC_PARAMS = '''const std::string {param_name}'''


# mqtt_topics.h

# <roles>

ROLES_STR = '''
    ROLE_{role} = {role},'''


# <topics>

TOPICS_STR = '''{topics_array_el}

    TOPICS_NUM = {topics_num}'''


TOPICS_ARRAY_EL = '''
    {topic_name} = {topic_num},'''


BUILD_FUNCTION_SIGNATURE = '''topic_t build_{topic_name}({params});
'''