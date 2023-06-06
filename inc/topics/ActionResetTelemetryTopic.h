#ifndef ACTION_RESET_TELEMETRY_TOPIC_H
#define ACTION_RESET_TELEMETRY_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action reset telemetry topic, it contains the reset action for changing to UNINITIALIZED the FSM of the telemetry system
    class ActionResetTelemetryTopic
    {
    public:
        ActionResetTelemetryTopic() = delete;
        ActionResetTelemetryTopic(const ActionResetTelemetryTopic &) = delete;
        ActionResetTelemetryTopic &operator=(const ActionResetTelemetryTopic &) = delete;
        ~ActionResetTelemetryTopic() = delete;

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