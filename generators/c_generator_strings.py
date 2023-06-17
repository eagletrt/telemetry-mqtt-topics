# <can_subscribe> and <can_publish>

CAN_IF = '''if (role == ROLE_{role}){{
        switch(topic) {{{can_case_el}
        }}
    }}'''


CAN_ELIF = ''' else if (role == ROLE_{role}) {{
        switch(topic) {{{can_case_el}
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
        ret = (topic_t*) malloc(sizeof(topic_t) * {pub_sub_topic_num});
        {get_pub_sub_array_el}
        break;'''


GET_PUB_SUB_CASE_ARRAY_EL = '''
        ret[{i}] = build_{topic_name}({topic_params});'''


# <build_functions>

BUILD_FUNCTION = '''
topic_t* build_{topic_name}({params}) {{
    topic_t topic = {{
		.qos = {topic_qos},
		.retain = {topic_retain}
	}};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "{topic_str}", {topic_params});
    return topic;
}}
'''

TOPIC_PARAMS = '''const char* {param_name}, '''