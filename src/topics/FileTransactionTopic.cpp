#include "FileTransactionTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionTopic::topic = "fenice-evo/<device_id>/file_transaction/<transaction_id>";
    const uint8_t FileTransactionTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionTopic::roles = {0, 2, 3};
    const bool FileTransactionTopic::retain = false;

    TopicString FileTransactionTopic::get(const std::string& device_id, const std::string& transaction_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool FileTransactionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics