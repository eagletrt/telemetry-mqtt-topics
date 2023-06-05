#ifndef ACTION_CONFIG_FILE_GET_TOPIC_H
#define ACTION_CONFIG_FILE_GET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action config file get topic, it gets all requests of config files to get
    class ActionConfigFileGetTopic
    {
    public:
        ActionConfigFileGetTopic() = delete;
        ActionConfigFileGetTopic(const ActionConfigFileGetTopic &) = delete;
        ActionConfigFileGetTopic &operator=(const ActionConfigFileGetTopic &) = delete;
        ~ActionConfigFileGetTopic() = delete;

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