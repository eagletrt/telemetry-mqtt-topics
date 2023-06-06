#ifndef FILE_TRANSACTION_ACK_TOPIC_H
#define FILE_TRANSACTION_ACK_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // File transaction ack topic, it contains the ack for a file transaction
    class FileTransactionAckTopic
    {
    public:
        FileTransactionAckTopic() = delete;
        FileTransactionAckTopic(const FileTransactionAckTopic &) = delete;
        FileTransactionAckTopic &operator=(const FileTransactionAckTopic &) = delete;
        ~FileTransactionAckTopic() = delete;

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