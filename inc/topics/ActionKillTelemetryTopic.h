#ifndef ACTION_KILL_TELEMETRY_TOPIC_H
#define ACTION_KILL_TELEMETRY_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action kill telemetry topic, it contains the kill action for shutting down the telemetry system
    class ActionKillTelemetryTopic
    {
    public:
        ActionKillTelemetryTopic() = delete;
        ActionKillTelemetryTopic(const ActionKillTelemetryTopic &) = delete;
        ActionKillTelemetryTopic &operator=(const ActionKillTelemetryTopic &) = delete;
        ~ActionKillTelemetryTopic() = delete;

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