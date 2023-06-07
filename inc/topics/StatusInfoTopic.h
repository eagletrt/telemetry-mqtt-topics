#ifndef STATUS_INFO_TOPIC_H
#define STATUS_INFO_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // Status info topic, it contains the status of the running telemetry system
    class StatusInfoTopic
    {
    public:
        StatusInfoTopic() = delete;
        StatusInfoTopic(const StatusInfoTopic &) = delete;
        StatusInfoTopic &operator=(const StatusInfoTopic &) = delete;
        ~StatusInfoTopic() = delete;

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