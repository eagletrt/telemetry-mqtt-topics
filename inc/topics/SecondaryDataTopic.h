#ifndef SECONDARY_DATA_TOPIC_H
#define SECONDARY_DATA_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // The secondary data topic
    class SecondaryDataTopic
    {
    public:
        SecondaryDataTopic() = delete;
        SecondaryDataTopic(const SecondaryDataTopic &) = delete;
        SecondaryDataTopic &operator=(const SecondaryDataTopic &) = delete;
        ~SecondaryDataTopic() = delete;

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