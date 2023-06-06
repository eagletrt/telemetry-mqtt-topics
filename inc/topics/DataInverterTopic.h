#ifndef DATA_INVERTER_TOPIC_H
#define DATA_INVERTER_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Data inverter topic, it contains all the data from the inverter CAN bus
    class DataInverterTopic
    {
    public:
        DataInverterTopic() = delete;
        DataInverterTopic(const DataInverterTopic &) = delete;
        DataInverterTopic &operator=(const DataInverterTopic &) = delete;
        ~DataInverterTopic() = delete;

    public:
        static TopicString get(const std::string& device_id = "telemetry");
        static int qualityOfService();
        static bool canSubscribe(unsigned int role);
        static bool canPublish(unsigned int role);
        static bool isRetained();

    private:
        static const std::string topic;
        static const uint8_t qos;
        static const std::unordered_set<uint8_t> subscribeRoles;
        static const std::unordered_set<uint8_t> publishRoles;
        static const bool retained;
    };
}// namespace MQTTTopics

#endif