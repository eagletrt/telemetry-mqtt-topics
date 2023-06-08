#include "ActionSessionConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigTopic::topic = "<vehicle_id>/<device_id>/action/session_config";
    const uint8_t ActionSessionConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionSessionConfigTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionSessionConfigTopic::retained = false;

    TopicString ActionSessionConfigTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics