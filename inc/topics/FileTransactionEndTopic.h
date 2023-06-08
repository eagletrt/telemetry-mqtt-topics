#ifndef FILE_TRANSACTION_END_TOPIC_H
#define FILE_TRANSACTION_END_TOPIC_H

#include "TopicString.h"
#include "Topics.h"

#include <cstdint>
#include <string>
#include <unordered_set>

namespace MQTTTopics {
    // <vehicleId>/<deviceId>/fileTransaction/<transactionId>/end
    class FileTransactionEndTopic
    {
    public:
        static TopicString get(const std::string& transactionId, const std::string& vehicleId = "feniceEvo", const std::string& deviceId = "telemetry");
    };
}// namespace MQTTTopics

#endif