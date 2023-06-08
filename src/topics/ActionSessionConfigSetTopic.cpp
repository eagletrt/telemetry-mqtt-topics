#include "ActionSessionConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigSetTopic::topic = "<vehicle_id>/<device_id>/action/session_config/set";
    const uint8_t ActionSessionConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigSetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionSessionConfigSetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionSessionConfigSetTopic::retained = false;

    TopicString ActionSessionConfigSetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics