#include "FileTransactionEndTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionEndTopic::topic = fenice-evo/<device_id>/file_transaction/<transaction_id>/end;
    const uint8_t FileTransactionEndTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionEndTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> FileTransactionEndTopic::publishRoles = {0, 2};
    const bool FileTransactionEndTopic::retained = false;

    TopicString FileTransactionEndTopic::get(const std::string& transaction_id, const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionEndTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool FileTransactionEndTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool FileTransactionEndTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool FileTransactionEndTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics