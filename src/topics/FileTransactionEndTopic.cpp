#include "inc/topics/FileTransactionEndTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionEndTopic::topic = "fenice-evo/<device_id>/file_transaction/<transaction_id>/end";
    const uint8_t FileTransactionEndTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionEndTopic::roles = {1, 2, 3, 4};

    TopicString FileTransactionEndTopic::get(const std::string& transaction_id, const std::string& device_id = "telemetry") {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionEndTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FileTransactionEndTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }
}// namespace MQTTTopics