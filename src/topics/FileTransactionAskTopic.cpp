#include "FileTransactionAskTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionAskTopic::topic = "<vehicle_id>/<device_id>/file_transaction/ask";
    const uint8_t FileTransactionAskTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionAskTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> FileTransactionAskTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool FileTransactionAskTopic::retained = false;

    TopicString FileTransactionAskTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics