#ifndef ACTION_CONFIGS_SET_TOPIC_H
#define ACTION_CONFIGS_SET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action configs set topic, it gets all requests of config files to set
    class ActionConfigsSetTopic
    {
    public:
        ActionConfigsSetTopic() = delete;
        ActionConfigsSetTopic(const ActionConfigsSetTopic &) = delete;
        ActionConfigsSetTopic &operator=(const ActionConfigsSetTopic &) = delete;
        ~ActionConfigsSetTopic() = delete;

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