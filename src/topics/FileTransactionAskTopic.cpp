#include "FileTransactionAskTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionAskTopic::topic = "fenice-evo/<device_id>/file_transaction/ask";
    const uint8_t FileTransactionAskTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionAskTopic::roles = {1, 2, 3, 4};
    const bool FileTransactionAskTopic::retain = false;

    TopicString FileTransactionAskTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int FileTransactionAskTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool FileTransactionAskTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool FileTransactionAskTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool FileTransactionAskTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics