#ifndef CAR_SETUP_ACTION_TOPIC_H
#define CAR_SETUP_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Car setup action topic, it contains the car setup actions
    class CarSetupActionTopic
    {
    public:
        CarSetupActionTopic() = delete;
        CarSetupActionTopic(const CarSetupActionTopic &) = delete;
        CarSetupActionTopic &operator=(const CarSetupActionTopic &) = delete;
        ~CarSetupActionTopic() = delete;

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