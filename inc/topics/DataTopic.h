#ifndef DATA_TOPIC_H
#define DATA_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // The data topic, it contains all the CAN messages
    class DataTopic
    {
    public:
        DataTopic() = delete;
        DataTopic(const DataTopic &) = delete;
        DataTopic &operator=(const DataTopic &) = delete;
        ~DataTopic() = delete;

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