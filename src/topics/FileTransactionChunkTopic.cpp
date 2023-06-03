#include "inc/topics/FileTransactionChunkTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionChunkTopic::topic = "fenice-evo/<device_id>/file_transaction/<transaction_id>/chunk";
    const uint8_t FileTransactionChunkTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionChunkTopic::roles = {1, 2, 3, 4};

    TopicString FileTransactionChunkTopic::get(const std::string& transaction_id, const std::string& device_id = "telemetry") {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionChunkTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionChunkTopic::hasPermission(const unsigned int &role) {
        return (roles.find(role) != roles.cend());
    }
}// namespace MQTTTopics