#ifndef ACTION_CAR_CONFIG_GET_TOPIC_H
#define ACTION_CAR_CONFIG_GET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action car config get topic, it requests the car config file
    class ActionCarConfigGetTopic
    {
    public:
        ActionCarConfigGetTopic() = delete;
        ActionCarConfigGetTopic(const ActionCarConfigGetTopic &) = delete;
        ActionCarConfigGetTopic &operator=(const ActionCarConfigGetTopic &) = delete;
        ~ActionCarConfigGetTopic() = delete;

    public:
        static TopicString get(const std::string& device_id = "telemetry");
        static int qualityOfService();
        static bool hasPermission(unsigned int role);
        static bool retained();

    private:
        static const std::string topic;
        static const uint8_t qos;
        static const std::unordered_set<uint8_t> roles;
        static const bool retain;
    };
}// namespace MQTTTopics

#endif