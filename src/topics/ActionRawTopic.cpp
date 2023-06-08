#include "ActionRawTopic.h"

namespace MQTTTopics {
    const std::string ActionRawTopic::topic = "<vehicle_id>/<device_id>/action/raw";
    const uint8_t ActionRawTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionRawTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionRawTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionRawTopic::retained = false;

    TopicString ActionRawTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics