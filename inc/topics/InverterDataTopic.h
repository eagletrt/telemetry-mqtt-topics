#ifndef INVERTER_DATA_TOPIC_H
#define INVERTER_DATA_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // The inverter data topic
    class InverterDataTopic
    {
    public:
        InverterDataTopic() = delete;
        InverterDataTopic(const InverterDataTopic &) = delete;
        InverterDataTopic &operator=(const InverterDataTopic &) = delete;
        ~InverterDataTopic() = delete;

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