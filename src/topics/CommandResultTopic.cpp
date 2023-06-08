#include "CommandResultTopic.h"

namespace MQTTTopics {
    const std::string CommandResultTopic::topic = "<vehicle_id>/<device_id>/command/result";
    const uint8_t CommandResultTopic::qos = 0;
    const std::unordered_set<uint8_t> CommandResultTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> CommandResultTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool CommandResultTopic::retained = false;

    TopicString CommandResultTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics