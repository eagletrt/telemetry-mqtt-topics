#ifndef ACTION_RESET_LAP_COUNTER_TOPIC_H
#define ACTION_RESET_LAP_COUNTER_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // Action reset lap counter action topic, it contains the lap counter reset action for resetting the lap counter
    class ActionResetLapCounterTopic
    {
    public:
        ActionResetLapCounterTopic() = delete;
        ActionResetLapCounterTopic(const ActionResetLapCounterTopic &) = delete;
        ActionResetLapCounterTopic &operator=(const ActionResetLapCounterTopic &) = delete;
        ~ActionResetLapCounterTopic() = delete;

    public:
        static TopicString get(const std::string& device_id = "telemetry");
        static int qualityOfService();
        static bool canSubscribe(unsigned int role);
        static bool canPublish(unsigned int role);
        static bool isRetained();

    private:
        static const std::string topic;
        static const uint8_t qos;
        static const std::unordered_set<uint8_t> subscribeRoles;
        static const std::unordered_set<uint8_t> publishRoles;
        static const bool retained;
    };
}// namespace MQTTTopics

#endif