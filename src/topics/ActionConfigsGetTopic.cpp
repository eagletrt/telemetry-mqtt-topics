#include "ActionConfigsGetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsGetTopic::topic = "<vehicle_id>/<device_id>/action/+/get";
    const uint8_t ActionConfigsGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsGetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionConfigsGetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionConfigsGetTopic::retained = false;

    TopicString ActionConfigsGetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics