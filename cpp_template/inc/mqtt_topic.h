#include <stdlib.h>
#include <stdbool.h>


#ifndef TOPIC_MAX_STR_LEN
#define TOPIC_MAX_STR_LEN 128
#endif

enum PUB_OR_SUB {
    PUB = 0,
    SUB = 1
};

enum ROLES_T {
    ROLE_INVALID = -1,

    <roles>
}; 

enum TOPICS_T{
    <topics>
};

typedef struct topic_t {
    char topic[TOPIC_MAX_STR_LEN];
    int qos;
    bool retained;
}topic_t;


// checks if sub or pub is allowed for the given role
bool can_subscribe(enum ROLES_T role, enum TOPICS_T topic);
bool can_publish(enum ROLES_T role, enum TOPICS_T topic);

// MODE 1 (construct anyway)
<build_functions>

// // MODE 2 (pub or sub to define if the topic is constructed for publishing or subscribing, then given the role it contructs the topic)
// topic_t construct_get_telemetry_status_(enum PUB_OR_SUB pub_or_sub, enum ROLES_T role, char* device_id);
// topic_t construct_action_start_(enum PUB_OR_SUB pub_or_sub, enum ROLES_T role, char* device_id);
// topic_t construct_action_kill_(enum PUB_OR_SUB pub_or_sub, enum ROLES_T role, char* device_id);