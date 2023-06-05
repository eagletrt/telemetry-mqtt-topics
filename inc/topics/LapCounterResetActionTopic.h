#ifndef LAP_COUNTER_RESET_ACTION_TOPIC_H
#define LAP_COUNTER_RESET_ACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // Lap counter reset action topic, it contains the lap counter reset action for resetting the lap counter
    class LapCounterResetActionTopic
    {
    public:
        LapCounterResetActionTopic() = delete;
        LapCounterResetActionTopic(const LapCounterResetActionTopic &) = delete;
        LapCounterResetActionTopic &operator=(const LapCounterResetActionTopic &) = delete;
        ~LapCounterResetActionTopic() = delete;

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