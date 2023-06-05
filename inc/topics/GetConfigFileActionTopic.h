#ifndef GET_CONFIG_FILE_ACTION_TOPIC_H
#define GET_CONFIG_FILE_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Get action topic, it gets all requests of config files to get
    class GetConfigFileActionTopic
    {
    public:
        GetConfigFileActionTopic() = delete;
        GetConfigFileActionTopic(const GetConfigFileActionTopic &) = delete;
        GetConfigFileActionTopic &operator=(const GetConfigFileActionTopic &) = delete;
        ~GetConfigFileActionTopic() = delete;

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