#include "ActionSessionConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigContentTopic::topic = "<vehicle_id>/<device_id>/action/session_config/content";
    const uint8_t ActionSessionConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigContentTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionSessionConfigContentTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionSessionConfigContentTopic::retained = false;

    TopicString ActionSessionConfigContentTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics