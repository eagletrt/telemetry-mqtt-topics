#include "ActionStartTopic.h"

namespace MQTTTopics {
    const std::string ActionStartTopic::topic = "<vehicle_id>/<device_id>/action/start";
    const uint8_t ActionStartTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionStartTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionStartTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionStartTopic::retained = false;

    TopicString ActionStartTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics