#ifndef TOPIC_TEMPLATE_H
#define TOPIC_TEMPLATE_H

#include "TopicString.h"
#include "topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    class FileTransactionBegin
    {
    public:
        FileTransactionBegin() = delete;
        FileTransactionBegin(const FileTransactionBegin &) = delete;
        FileTransactionBegin &operator=(const FileTransactionBegin &) = delete;
        ~FileTransactionBegin() = delete;

    public:
        static TopicString get(const std::string &transactionId, const std::string &deviceId = "telemetry");
        static int qualityOfService();
        static bool canSubscribe(const unsigned int &role);

    private:
        static const std::string topic;
        static const uint8_t qos;
        static const std::unordered_set<uint8_t> roles;
    };
}// namespace MQTTTopics

#endif