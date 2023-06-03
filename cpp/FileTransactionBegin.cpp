#include "FileTransactionBegin.h"

namespace MQTTTopics {
    const std::string FileTransactionBegin::topic = "fenice-evo/<device_id>/file_transaction/<transaction_id>/begin";
    const uint8_t FileTransactionBegin::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionBegin::roles = {1, 2, 3, 4};

    TopicString FileTransactionBegin::get(const std::string &transactionId, const std::string &deviceId) {
        std::string str(topic);

        str.replace(str.find("<device_id>"), 11, deviceId);
        str.replace(str.find("<transaction_id>"), 16, transactionId);

        return str;
    }

    int FileTransactionBegin::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionBegin::canSubscribe(const unsigned int &role) {
        return (roles.find(role) != roles.cend());
    }
}// namespace MQTTTopics