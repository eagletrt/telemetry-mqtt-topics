#ifndef FENICE_EVO_ROOT_TOPIC_H
#define FENICE_EVO_ROOT_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    class FeniceEvoRootTopic
    {
    public:
        FeniceEvoRootTopic() = delete;
        FeniceEvoRootTopic(const FeniceEvoRootTopic &) = delete;
        FeniceEvoRootTopic &operator=(const FeniceEvoRootTopic &) = delete;
        ~FeniceEvoRootTopic() = delete;

    public:
        static TopicString get(const std::string& device_id = "telemetry");
        static int qualityOfService();
        static bool hasPermission(const unsigned int &role);

    private:
        static const std::string topic;
        static const uint8_t qos;
        static const std::unordered_set<uint8_t> roles;
    };
}// namespace MQTTTopics

#endif