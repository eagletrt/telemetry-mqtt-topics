GET_PUB_SUB_SWITCH ='''
      case ROLE_{role}:
        ret = (topic_t*) malloc(sizeof(topic_t) * {pub_sub_topic_num});
        {get_pub_sub_array_el}
        break;'''


GET_PUB_SUB_CASE_ARRAY_EL = '''
        ret[{i}] = build_{topic_name}({topic_params});'''