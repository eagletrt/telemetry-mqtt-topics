#ifndef FENICE_EVO_TOPIC_H
#define FENICE_EVO_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // FeniceEvo topic for the device
    class FeniceEvoTopic
    {
    public:
        FeniceEvoTopic() = delete;
        FeniceEvoTopic(const FeniceEvoTopic &) = delete;
        FeniceEvoTopic &operator=(const FeniceEvoTopic &) = delete;
        ~FeniceEvoTopic() = delete;

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