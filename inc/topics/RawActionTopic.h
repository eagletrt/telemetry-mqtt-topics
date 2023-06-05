#ifndef RAW_ACTION_TOPIC_H
#define RAW_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Raw action topic, it contains custom commands to send to the telemetry system
    class RawActionTopic
    {
    public:
        RawActionTopic() = delete;
        RawActionTopic(const RawActionTopic &) = delete;
        RawActionTopic &operator=(const RawActionTopic &) = delete;
        ~RawActionTopic() = delete;

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