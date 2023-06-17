#include "mqtt_topics.h"

bool can_subscribe(enum ROLES_T role, enum TOPICS_T topic){

  <can_subscribe>

  return false;
}

bool can_publish(enum ROLES_T role, enum TOPICS_T topic){

  <can_publish>

  return false;
}

void free_topics(topic_t* topic){
    if(topic)
        free(topic);
}

topic_t* get_subscribe_topics(enum ROLES_T role){
    topic_t* ret = NULL;

    switch(role){<switch_sub_role>
    }

    return ret;
}

topic_t* get_publish_topics(enum ROLES_T role){
    topic_t* ret = NULL;

    switch(role){<switch_pub_role>
    }

    return ret;
}

<build_functions>