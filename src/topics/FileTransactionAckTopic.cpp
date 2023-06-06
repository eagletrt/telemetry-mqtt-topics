#include "FileTransactionAckTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionAckTopic::topic = "fenice-evo/<device_id>/file_transaction/ack";
    const uint8_t FileTransactionAckTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionAckTopic::roles = {1, 2, 3, 4};
    const bool FileTransactionAckTopic::retain = false;

    TopicString FileTransactionAckTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int FileTransactionAckTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool FileTransactionAckTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool FileTransactionAckTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool FileTransactionAckTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics