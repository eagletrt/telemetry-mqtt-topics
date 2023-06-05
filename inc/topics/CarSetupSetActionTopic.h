#ifndef CAR_SETUP_SET_ACTION_TOPIC_H
#define CAR_SETUP_SET_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Car setup set action topic, it sets the car setup file
    class CarSetupSetActionTopic
    {
    public:
        CarSetupSetActionTopic() = delete;
        CarSetupSetActionTopic(const CarSetupSetActionTopic &) = delete;
        CarSetupSetActionTopic &operator=(const CarSetupSetActionTopic &) = delete;
        ~CarSetupSetActionTopic() = delete;

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