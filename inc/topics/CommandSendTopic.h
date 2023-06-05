#ifndef COMMAND_SEND_TOPIC_H
#define COMMAND_SEND_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Command send topic, it contains the command to run on the telemetry system
    class CommandSendTopic
    {
    public:
        CommandSendTopic() = delete;
        CommandSendTopic(const CommandSendTopic &) = delete;
        CommandSendTopic &operator=(const CommandSendTopic &) = delete;
        ~CommandSendTopic() = delete;

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