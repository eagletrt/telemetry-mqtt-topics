#ifndef ACTION_CONFIG_FILES_GETTER_TOPIC_H
#define ACTION_CONFIG_FILES_GETTER_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Action config file get topic, it gets all requests of config files to get
    class ActionConfigFilesGetterTopic
    {
    public:
        ActionConfigFilesGetterTopic() = delete;
        ActionConfigFilesGetterTopic(const ActionConfigFilesGetterTopic &) = delete;
        ActionConfigFilesGetterTopic &operator=(const ActionConfigFilesGetterTopic &) = delete;
        ~ActionConfigFilesGetterTopic() = delete;

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