#ifndef ACTION_RAW_TOPIC_H
#define ACTION_RAW_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // Action raw topic, it contains custom commands to send to the telemetry system
    class ActionRawTopic
    {
    public:
        ActionRawTopic() = delete;
        ActionRawTopic(const ActionRawTopic &) = delete;
        ActionRawTopic &operator=(const ActionRawTopic &) = delete;
        ~ActionRawTopic() = delete;

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