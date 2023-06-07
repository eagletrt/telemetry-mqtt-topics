#ifndef ACTION_STOP_TELEMETRY_TOPIC_H
#define ACTION_STOP_TELEMETRY_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // Action stop telemetry topic topic, it contains the stop action for changing to IDLE the FSM of the telemetry system
    class ActionStopTelemetryTopic
    {
    public:
        ActionStopTelemetryTopic() = delete;
        ActionStopTelemetryTopic(const ActionStopTelemetryTopic &) = delete;
        ActionStopTelemetryTopic &operator=(const ActionStopTelemetryTopic &) = delete;
        ~ActionStopTelemetryTopic() = delete;

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