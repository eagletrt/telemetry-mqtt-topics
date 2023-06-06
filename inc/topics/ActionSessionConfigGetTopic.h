#ifndef ACTION_SESSION_CONFIG_GET_TOPIC_H
#define ACTION_SESSION_CONFIG_GET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action session config get topic, it requests the session config file
    class ActionSessionConfigGetTopic
    {
    public:
        ActionSessionConfigGetTopic() = delete;
        ActionSessionConfigGetTopic(const ActionSessionConfigGetTopic &) = delete;
        ActionSessionConfigGetTopic &operator=(const ActionSessionConfigGetTopic &) = delete;
        ~ActionSessionConfigGetTopic() = delete;

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