#ifndef PRIMARY_DATA_TOPIC_H
#define PRIMARY_DATA_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Primary data topic, it contains all the data from the primary CAN bus
    class PrimaryDataTopic
    {
    public:
        PrimaryDataTopic() = delete;
        PrimaryDataTopic(const PrimaryDataTopic &) = delete;
        PrimaryDataTopic &operator=(const PrimaryDataTopic &) = delete;
        ~PrimaryDataTopic() = delete;

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