#include "FileTransactionAskTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionAskTopic::topic = "fenice-evo/<device_id>/file_transaction/ask";
    const uint8_t FileTransactionAskTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionAskTopic::roles = {0, 2, 3};
    const bool FileTransactionAskTopic::retain = false;

    TopicString FileTransactionAskTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int FileTransactionAskTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionAskTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool FileTransactionAskTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics