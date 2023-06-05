#include "FileTransactionEndTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionEndTopic::topic = "fenice-evo/<device_id>/file_transaction/<transaction-id>/end";
    const uint8_t FileTransactionEndTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionEndTopic::roles = {0, 2, 3};
    const bool FileTransactionEndTopic::retain = false;

    TopicString FileTransactionEndTopic::get(const std::string& device_id, const std::string& transaction-id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction-id>"), 16, transaction-id);

        return str;
    }

    int FileTransactionEndTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionEndTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool FileTransactionEndTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics