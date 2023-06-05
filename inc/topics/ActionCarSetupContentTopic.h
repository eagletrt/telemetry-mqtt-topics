#ifndef ACTION_CAR_SETUP_CONTENT_TOPIC_H
#define ACTION_CAR_SETUP_CONTENT_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action car setup content action topic, it contains the car setup file content
    class ActionCarSetupContentTopic
    {
    public:
        ActionCarSetupContentTopic() = delete;
        ActionCarSetupContentTopic(const ActionCarSetupContentTopic &) = delete;
        ActionCarSetupContentTopic &operator=(const ActionCarSetupContentTopic &) = delete;
        ~ActionCarSetupContentTopic() = delete;

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