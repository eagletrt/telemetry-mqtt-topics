#ifndef ACTION_CONFIG_FILE_SET_TOPIC_H
#define ACTION_CONFIG_FILE_SET_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action config gile set topic, it gets all requests of config files to set
    class ActionConfigFileSetTopic
    {
    public:
        ActionConfigFileSetTopic() = delete;
        ActionConfigFileSetTopic(const ActionConfigFileSetTopic &) = delete;
        ActionConfigFileSetTopic &operator=(const ActionConfigFileSetTopic &) = delete;
        ~ActionConfigFileSetTopic() = delete;

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