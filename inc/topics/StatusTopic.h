#ifndef STATUS_TOPIC_H
#define STATUS_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Status topic, it contains all the status of the running telemetry system
    class StatusTopic
    {
    public:
        StatusTopic() = delete;
        StatusTopic(const StatusTopic &) = delete;
        StatusTopic &operator=(const StatusTopic &) = delete;
        ~StatusTopic() = delete;

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