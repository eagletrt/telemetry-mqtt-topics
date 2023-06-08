#ifndef ACTION_STOP_TOPIC_H
#define ACTION_STOP_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // <vehicleId>/<deviceId>/action/stop
    class ActionStopTopic
    {
    public:
        static TopicString get(const std::string& vehicleId = "feniceEvo", const std::string& deviceId = "telemetry");
    };
}// namespace MQTTTopics

#endif