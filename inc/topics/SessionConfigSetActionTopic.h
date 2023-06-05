#ifndef SESSION_CONFIG_SET_ACTION_TOPIC_H
#define SESSION_CONFIG_SET_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Session config set action topic, it sets the session config file
    class SessionConfigSetActionTopic
    {
    public:
        SessionConfigSetActionTopic() = delete;
        SessionConfigSetActionTopic(const SessionConfigSetActionTopic &) = delete;
        SessionConfigSetActionTopic &operator=(const SessionConfigSetActionTopic &) = delete;
        ~SessionConfigSetActionTopic() = delete;

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