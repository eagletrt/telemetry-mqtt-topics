#ifndef VEHICLE_ID_TOPIC_H
#define VEHICLE_ID_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // <vehicleId>
    class VehicleIdTopic
    {
    public:
        static TopicString get(const std::string& vehicleId = "feniceEvo");
    };
}// namespace MQTTTopics

#endif