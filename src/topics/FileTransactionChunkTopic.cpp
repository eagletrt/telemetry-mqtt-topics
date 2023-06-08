#include "FileTransactionChunkTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionChunkTopic::topic = "<vehicle_id>/<device_id>/file_transaction/<transaction_id>/chunk";
    const uint8_t FileTransactionChunkTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionChunkTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> FileTransactionChunkTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool FileTransactionChunkTopic::retained = false;

    TopicString FileTransactionChunkTopic::get(const std::string& transactionId, const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);
		str.replace(str.find("<transactionId>"), 15, transactionId);

        return str;
    }
}// namespace MQTTTopics