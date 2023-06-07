#ifndef ACTION_CONFIGS_CONTENT_TOPIC_H
#define ACTION_CONFIGS_CONTENT_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // Action configs content topic, it gets all requests of config files content
    class ActionConfigsContentTopic
    {
    public:
        ActionConfigsContentTopic() = delete;
        ActionConfigsContentTopic(const ActionConfigsContentTopic &) = delete;
        ActionConfigsContentTopic &operator=(const ActionConfigsContentTopic &) = delete;
        ~ActionConfigsContentTopic() = delete;

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