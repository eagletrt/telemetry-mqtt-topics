#ifndef SET_CONFIG_FILE_ACTION_TOPIC_H
#define SET_CONFIG_FILE_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Set action topic, it gets all requests of config files to set
    class SetConfigFileActionTopic
    {
    public:
        SetConfigFileActionTopic() = delete;
        SetConfigFileActionTopic(const SetConfigFileActionTopic &) = delete;
        SetConfigFileActionTopic &operator=(const SetConfigFileActionTopic &) = delete;
        ~SetConfigFileActionTopic() = delete;

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