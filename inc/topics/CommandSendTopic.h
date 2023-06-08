#ifndef COMMAND_SEND_TOPIC_H
#define COMMAND_SEND_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // <vehicleId>/<deviceId>/command/send
    class CommandSendTopic
    {
    public:
        static TopicString get(const std::string& vehicleId = "feniceEvo", const std::string& deviceId = "telemetry");
    };
}// namespace MQTTTopics

#endif