#include "FileTransactionAckTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionAckTopic::topic = "fenice-evo/<device_id>/file_transaction/ack";
    const uint8_t FileTransactionAckTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionAckTopic::roles = {0, 2, 3};
    const bool FileTransactionAckTopic::retain = false;

    TopicString FileTransactionAckTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int FileTransactionAckTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionAckTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool FileTransactionAckTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics