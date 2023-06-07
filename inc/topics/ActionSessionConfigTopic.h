#ifndef ACTION_SESSION_CONFIG_TOPIC_H
#define ACTION_SESSION_CONFIG_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // Action session config topic, it contains the session config actions
    class ActionSessionConfigTopic
    {
    public:
        ActionSessionConfigTopic() = delete;
        ActionSessionConfigTopic(const ActionSessionConfigTopic &) = delete;
        ActionSessionConfigTopic &operator=(const ActionSessionConfigTopic &) = delete;
        ~ActionSessionConfigTopic() = delete;

    public:
        static TopicString get(const std::string& device_id = "telemetry");
        static int qualityOfService();
        static bool canSubscribe(unsigned int role);
        static bool canPublish(unsigned int role);
        static bool isRetained();

    private:
        static const std::string topic;
        static const uint8_t qos;
        static const std::unordered_set<uint8_t> subscribeRoles;
        static const std::unordered_set<uint8_t> publishRoles;
        static const bool retained;
    };
}// namespace MQTTTopics

#endif