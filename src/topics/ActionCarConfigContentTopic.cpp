#include "ActionCarConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigContentTopic::topic = "<vehicle_id>/<device_id>/action/car_config/content";
    const uint8_t ActionCarConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigContentTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionCarConfigContentTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionCarConfigContentTopic::retained = false;

    TopicString ActionCarConfigContentTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics