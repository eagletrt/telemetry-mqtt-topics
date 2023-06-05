#ifndef KILL_TELEMETRY_ACTION_TOPIC_H
#define KILL_TELEMETRY_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Kill action topic, it contains the kill action for shutting down the telemetry system
    class KillTelemetryActionTopic
    {
    public:
        KillTelemetryActionTopic() = delete;
        KillTelemetryActionTopic(const KillTelemetryActionTopic &) = delete;
        KillTelemetryActionTopic &operator=(const KillTelemetryActionTopic &) = delete;
        ~KillTelemetryActionTopic() = delete;

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