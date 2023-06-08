#include "ActionResetTopic.h"

namespace MQTTTopics {
    const std::string ActionResetTopic::topic = "<vehicle_id>/<device_id>/action/reset";
    const uint8_t ActionResetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionResetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionResetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionResetTopic::retained = false;

    TopicString ActionResetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics