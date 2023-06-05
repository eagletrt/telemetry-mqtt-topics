#ifndef COMMAND_RESULT_TOPIC_H
#define COMMAND_RESULT_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Command result topic, it contains the result of the command ran on the telemetry system
    class CommandResultTopic
    {
    public:
        CommandResultTopic() = delete;
        CommandResultTopic(const CommandResultTopic &) = delete;
        CommandResultTopic &operator=(const CommandResultTopic &) = delete;
        ~CommandResultTopic() = delete;

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