#include "CommandSendTopic.h"

namespace MQTTTopics {
    const std::string CommandSendTopic::topic = "<vehicle_id>/<device_id>/command/send";
    const uint8_t CommandSendTopic::qos = 0;
    const std::unordered_set<uint8_t> CommandSendTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> CommandSendTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool CommandSendTopic::retained = false;

    TopicString CommandSendTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics