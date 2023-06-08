#ifndef TOPIC_H
#define TOPIC_H

#include "TopicString.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    class Topic
    {
    public:
        Topic() = delete;
        Topic(const Topic &) = delete;
        Topic &operator=(const Topic &) = delete;
        ~Topic() = delete;

    public:
        static unsigned int qualityOfService();
        static bool canSubscribe(unsigned int role);
        static bool canPublish(unsigned int role);
        static bool isRetained();

    protected:
        static const std::string topic;
        static const uint8_t qos;
        static const std::unordered_set<uint8_t> subscribeRoles;
        static const std::unordered_set<uint8_t> publishRoles;
        static const bool retained;
    };
}// namespace MQTTTopics

#endif