#include "ActionConfigsSetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsSetTopic::topic = "<vehicle_id>/<device_id>/action/+/set";
    const uint8_t ActionConfigsSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsSetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionConfigsSetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionConfigsSetTopic::retained = false;

    TopicString ActionConfigsSetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics