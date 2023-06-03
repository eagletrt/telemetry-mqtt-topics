#ifndef G_P_S_DATA_TOPIC_H
#define G_P_S_DATA_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    class GPSDataTopic
    {
    public:
        GPSDataTopic() = delete;
        GPSDataTopic(const GPSDataTopic &) = delete;
        GPSDataTopic &operator=(const GPSDataTopic &) = delete;
        ~GPSDataTopic() = delete;

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