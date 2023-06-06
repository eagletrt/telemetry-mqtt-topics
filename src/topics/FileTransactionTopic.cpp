#include "FileTransactionTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionTopic::topic = fenice-evo/<device_id>/file_transaction/<transaction_id>;
    const uint8_t FileTransactionTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> FileTransactionTopic::publishRoles = {0, 2};
    const bool FileTransactionTopic::retained = false;

    TopicString FileTransactionTopic::get(const std::string& transaction_id, const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool FileTransactionTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool FileTransactionTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool FileTransactionTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics