#ifndef ACTION_CAR_SETUP_GET_TOPIC_H
#define ACTION_CAR_SETUP_GET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action car setup get action topic, it requests the car setup file
    class ActionCarSetupGetTopic
    {
    public:
        ActionCarSetupGetTopic() = delete;
        ActionCarSetupGetTopic(const ActionCarSetupGetTopic &) = delete;
        ActionCarSetupGetTopic &operator=(const ActionCarSetupGetTopic &) = delete;
        ~ActionCarSetupGetTopic() = delete;

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