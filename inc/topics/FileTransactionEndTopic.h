#ifndef FILE_TRANSACTION_END_TOPIC_H
#define FILE_TRANSACTION_END_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // File transaction end topic, it contains the end of a file transaction
    class FileTransactionEndTopic
    {
    public:
        FileTransactionEndTopic() = delete;
        FileTransactionEndTopic(const FileTransactionEndTopic &) = delete;
        FileTransactionEndTopic &operator=(const FileTransactionEndTopic &) = delete;
        ~FileTransactionEndTopic() = delete;

    public:
        static TopicString get(const std::string& transaction_id, const std::string& device_id = "telemetry");
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