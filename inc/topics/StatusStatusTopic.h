#ifndef STATUS_STATUS_TOPIC_H
#define STATUS_STATUS_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Status info topic, it contains the status of the running telemetry system
    class StatusStatusTopic
    {
    public:
        StatusStatusTopic() = delete;
        StatusStatusTopic(const StatusStatusTopic &) = delete;
        StatusStatusTopic &operator=(const StatusStatusTopic &) = delete;
        ~StatusStatusTopic() = delete;

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