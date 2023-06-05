#ifndef CAR_SETUP_CONTENT_ACTION_TOPIC_H
#define CAR_SETUP_CONTENT_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Car setup content action topic, it contains the car setup file content
    class CarSetupContentActionTopic
    {
    public:
        CarSetupContentActionTopic() = delete;
        CarSetupContentActionTopic(const CarSetupContentActionTopic &) = delete;
        CarSetupContentActionTopic &operator=(const CarSetupContentActionTopic &) = delete;
        ~CarSetupContentActionTopic() = delete;

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