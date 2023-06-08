#include "ActionKillTopic.h"

namespace MQTTTopics {
    const std::string ActionKillTopic::topic = "<vehicle_id>/<device_id>/action/kill";
    const uint8_t ActionKillTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionKillTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionKillTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionKillTopic::retained = false;

    TopicString ActionKillTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics