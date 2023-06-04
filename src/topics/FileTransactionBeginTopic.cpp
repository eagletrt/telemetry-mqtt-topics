#include "FileTransactionBeginTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionBeginTopic::topic = "fenice-evo/<device_id>/file_transaction/<transaction_id>/begin";
    const uint8_t FileTransactionBeginTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionBeginTopic::roles = {0, 2, 3};
    const bool FileTransactionBeginTopic::retain = false;

    TopicString FileTransactionBeginTopic::get(const std::string& transaction_id, const std::string& device_id = "telemetry") {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionBeginTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionBeginTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool FileTransactionBeginTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics