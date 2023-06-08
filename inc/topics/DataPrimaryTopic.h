#ifndef DATA_PRIMARY_TOPIC_H
#define DATA_PRIMARY_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // <vehicleId>/<deviceId>/data/primary
    class DataPrimaryTopic
    {
    public:
        static TopicString get(const std::string& vehicleId = "feniceEvo", const std::string& deviceId = "telemetry");
    };
}// namespace MQTTTopics

#endif