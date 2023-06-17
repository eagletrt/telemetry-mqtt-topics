#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include <stdlib.h>
#include <stdbool.h>

#ifndef TOPIC_MAX_STR_LEN
#define TOPIC_MAX_STR_LEN 128
#endif

enum ROLES_T {
    <roles>
}; 

enum TOPICS_T {
    <topics>
};

typedef struct topic_t {
    char topic[TOPIC_MAX_STR_LEN];
    int qos;
    bool retained;
}topic_t;

void free_topics(topic_t* topic);
topic_t* get_subscribe_topics(enum ROLES_T role);
topic_t* get_publish_topics(enum ROLES_T role);

bool can_subscribe(enum ROLES_T role, enum TOPICS_T topic);
bool can_publish(enum ROLES_T role, enum TOPICS_T topic);

<build_functions>

#endif