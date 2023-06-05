#ifndef STATUS_CAN_FREQUENCIES_TOPIC_H
#define STATUS_CAN_FREQUENCIES_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Status CAN frequencies topic, it contains the frequencies of the CAN buses messages
    class StatusCanFrequenciesTopic
    {
    public:
        StatusCanFrequenciesTopic() = delete;
        StatusCanFrequenciesTopic(const StatusCanFrequenciesTopic &) = delete;
        StatusCanFrequenciesTopic &operator=(const StatusCanFrequenciesTopic &) = delete;
        ~StatusCanFrequenciesTopic() = delete;

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