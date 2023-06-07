#ifndef ACTION_SESSION_CONFIG_CONTENT_TOPIC_H
#define ACTION_SESSION_CONFIG_CONTENT_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // Action session config content topic, it contains the session config file content
    class ActionSessionConfigContentTopic
    {
    public:
        ActionSessionConfigContentTopic() = delete;
        ActionSessionConfigContentTopic(const ActionSessionConfigContentTopic &) = delete;
        ActionSessionConfigContentTopic &operator=(const ActionSessionConfigContentTopic &) = delete;
        ~ActionSessionConfigContentTopic() = delete;

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