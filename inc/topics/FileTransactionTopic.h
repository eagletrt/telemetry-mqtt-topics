#ifndef FILE_TRANSACTION_TOPIC_H
#define FILE_TRANSACTION_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // File transaction topic, it contains the file transaction data
    class FileTransactionTopic
    {
    public:
        FileTransactionTopic() = delete;
        FileTransactionTopic(const FileTransactionTopic &) = delete;
        FileTransactionTopic &operator=(const FileTransactionTopic &) = delete;
        ~FileTransactionTopic() = delete;

    public:
        static TopicString get(const std::string& transaction-id, const std::string& device_id = "telemetry");
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