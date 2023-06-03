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
        ~FileTransactionBegin() = default;

        FileTransactionBegin(const std::string &topic, const uint64_t &qos, const std::initializer_list<uint64_t> &roles);

    public:
        TopicString get(const std::string &deviceId = "telemetry", const std::string &transactionId = "") const;
        int qualityOfService() const;
        bool canSubscribe(const unsigned int &role) const;

    private:
        const std::string topic;
        const uint64_t qos;
        const std::unordered_set<uint64_t> roles;
    };
}// namespace MQTTTopics

#endif