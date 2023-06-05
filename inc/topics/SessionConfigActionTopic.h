#ifndef SESSION_CONFIG_ACTION_TOPIC_H
#define SESSION_CONFIG_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Session config action topic, it contains the session config actions
    class SessionConfigActionTopic
    {
    public:
        SessionConfigActionTopic() = delete;
        SessionConfigActionTopic(const SessionConfigActionTopic &) = delete;
        SessionConfigActionTopic &operator=(const SessionConfigActionTopic &) = delete;
        ~SessionConfigActionTopic() = delete;

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