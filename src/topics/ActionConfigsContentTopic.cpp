#include "ActionConfigsContentTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsContentTopic::topic = "<vehicle_id>/<device_id>/action/+/content";
    const uint8_t ActionConfigsContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsContentTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionConfigsContentTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionConfigsContentTopic::retained = false;

    TopicString ActionConfigsContentTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics