#ifndef ACTION_TELEMETRY_CONFIG_SET_TOPIC_H
#define ACTION_TELEMETRY_CONFIG_SET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // <vehicleId>/<deviceId>/action/telemetryConfig/set
    class ActionTelemetryConfigSetTopic
    {
    public:
        static TopicString get(const std::string& vehicleId = "feniceEvo", const std::string& deviceId = "telemetry");
    };
}// namespace MQTTTopics

#endif