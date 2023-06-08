#include "FileTransactionTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionTopic::topic = "<vehicle_id>/<device_id>/file_transaction/<transaction_id>";
    const uint8_t FileTransactionTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> FileTransactionTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool FileTransactionTopic::retained = false;

    TopicString FileTransactionTopic::get(const std::string& transactionId, const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);
		str.replace(str.find("<transactionId>"), 15, transactionId);

        return str;
    }
}// namespace MQTTTopics