#include "ActionTopic.h"

namespace MQTTTopics {
    const std::string ActionTopic::topic = "<vehicle_id>/<device_id>/action";
    const uint8_t ActionTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionTopic::retained = false;

    TopicString ActionTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics