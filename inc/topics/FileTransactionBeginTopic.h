#ifndef FILE_TRANSACTION_BEGIN_TOPIC_H
#define FILE_TRANSACTION_BEGIN_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {

    // The begin topic
    class FileTransactionBeginTopic
    {
    public:
        FileTransactionBeginTopic() = delete;
        FileTransactionBeginTopic(const FileTransactionBeginTopic &) = delete;
        FileTransactionBeginTopic &operator=(const FileTransactionBeginTopic &) = delete;
        ~FileTransactionBeginTopic() = delete;

    public:
        static TopicString get(const std::string& transaction_id, const std::string& device_id = "telemetry");
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