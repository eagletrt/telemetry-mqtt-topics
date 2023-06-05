#ifndef STOP_TELEMETRY_ACTION_TOPIC_H
#define STOP_TELEMETRY_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Stop action topic, it contains the stop action for changing to IDLE the FSM of the telemetry system
    class StopTelemetryActionTopic
    {
    public:
        StopTelemetryActionTopic() = delete;
        StopTelemetryActionTopic(const StopTelemetryActionTopic &) = delete;
        StopTelemetryActionTopic &operator=(const StopTelemetryActionTopic &) = delete;
        ~StopTelemetryActionTopic() = delete;

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