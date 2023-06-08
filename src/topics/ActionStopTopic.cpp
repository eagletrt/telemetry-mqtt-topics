#include "ActionStopTopic.h"

namespace MQTTTopics {
    const std::string ActionStopTopic::topic = "<vehicle_id>/<device_id>/action/stop";
    const uint8_t ActionStopTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionStopTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionStopTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionStopTopic::retained = false;

    TopicString ActionStopTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics