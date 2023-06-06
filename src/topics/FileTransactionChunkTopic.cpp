#include "FileTransactionChunkTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionChunkTopic::topic = "fenice-evo/<device_id>/file_transaction/<transaction_id>/chunk";
    const uint8_t FileTransactionChunkTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionChunkTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> FileTransactionChunkTopic::publishRoles = {0, 2};
    const bool FileTransactionChunkTopic::retained = false;

    TopicString FileTransactionChunkTopic::get(const std::string& transaction_id, const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionChunkTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool FileTransactionChunkTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool FileTransactionChunkTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool FileTransactionChunkTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics