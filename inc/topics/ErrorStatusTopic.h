#ifndef ERROR_STATUS_TOPIC_H
#define ERROR_STATUS_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Error status topic, it contains the errors of the running telemetry system
    class ErrorStatusTopic
    {
    public:
        ErrorStatusTopic() = delete;
        ErrorStatusTopic(const ErrorStatusTopic &) = delete;
        ErrorStatusTopic &operator=(const ErrorStatusTopic &) = delete;
        ~ErrorStatusTopic() = delete;

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