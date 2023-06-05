#ifndef ACTION_CAR_SETUP_SET_TOPIC_H
#define ACTION_CAR_SETUP_SET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action car setup set topic, it sets the car setup file
    class ActionCarSetupSetTopic
    {
    public:
        ActionCarSetupSetTopic() = delete;
        ActionCarSetupSetTopic(const ActionCarSetupSetTopic &) = delete;
        ActionCarSetupSetTopic &operator=(const ActionCarSetupSetTopic &) = delete;
        ~ActionCarSetupSetTopic() = delete;

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