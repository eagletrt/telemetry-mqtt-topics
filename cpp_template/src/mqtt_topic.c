#include "mqtt_topic.h"

bool can_subscribe(enum ROLES_T role, enum TOPICS_T topic){

    <can_subscribe>

    return false;
}

bool can_publish(enum ROLES_T role, enum TOPICS_T topic){

    <can_publish>

    return false;
}

<build_functions>




// // MODE 2
// topic_t construct_get_telemetry_status_(enum PUB_OR_SUB pub_or_sub, enum ROLES_T role, char* device_id){
//     topic_t topic;
//     if(pub_or_sub == PUB){
//     if(can_publish(role, TOPIC_TELEMETRY_STATUS_GET)){ // I know this one as is generated !!!
//         topic.topic = "ckjmscklsc";
//         topic.qos = 0;
//         topic.retained = false;
//     }
//     } else if(pub_or_sub == SUB) {
//     if(can_subscribe(role, TOPIC_TELEMETRY_STATUS_GET)) {
//         topic.topic = "ckjmscklsc";
//         topic.qos = 0;
//         topic.retained = false;
//     }
//     }

//     return topic;
// }