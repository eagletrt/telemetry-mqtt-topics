#include "FileTransactionEndTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionEndTopic::topic = "<vehicle_id>/<device_id>/file_transaction/<transaction_id>/end";
    const uint8_t FileTransactionEndTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionEndTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> FileTransactionEndTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool FileTransactionEndTopic::retained = false;

    TopicString FileTransactionEndTopic::get(const std::string& transactionId, const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);
		str.replace(str.find("<transactionId>"), 15, transactionId);

        return str;
    }
}// namespace MQTTTopics