#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include "MqttTopicsList.h"

#include <vector>

class MqttTopics
{
public:
    MqttTopics() = delete;
    MqttTopics(const MqttTopics &) = delete;
    MqttTopics &operator=(const MqttTopics &) = delete;
    ~MqttTopics() = delete;

public:
    static const VehicleIdTopic vehicleIdTopic;
    static const FileTransactionBeginTopic fileTransactionBeginTopic;

    /* ... */

public:
    static std::vector<TopicString> GetSubscribeTopics(unsigned int role);
    static std::vector<TopicString> GetPublishTopics(unsigned int role);
};

#endif
