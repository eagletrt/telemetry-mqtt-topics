#ifndef START_TELEMETRY_ACTION_TOPIC_H
#define START_TELEMETRY_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Start action topic, it contains the start action for changing to RUN the FSM of the telemetry system
    class StartTelemetryActionTopic
    {
    public:
        StartTelemetryActionTopic() = delete;
        StartTelemetryActionTopic(const StartTelemetryActionTopic &) = delete;
        StartTelemetryActionTopic &operator=(const StartTelemetryActionTopic &) = delete;
        ~StartTelemetryActionTopic() = delete;

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