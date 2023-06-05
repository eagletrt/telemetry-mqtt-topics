#ifndef ACTION_TELEMETRY_CONFIG_SET_TOPIC_H
#define ACTION_TELEMETRY_CONFIG_SET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action telemetry config set topic, it sets the telemetry config file
    class ActionTelemetryConfigSetTopic
    {
    public:
        ActionTelemetryConfigSetTopic() = delete;
        ActionTelemetryConfigSetTopic(const ActionTelemetryConfigSetTopic &) = delete;
        ActionTelemetryConfigSetTopic &operator=(const ActionTelemetryConfigSetTopic &) = delete;
        ~ActionTelemetryConfigSetTopic() = delete;

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