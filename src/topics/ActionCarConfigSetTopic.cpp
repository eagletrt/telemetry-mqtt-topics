#include "ActionCarConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigSetTopic::topic = "<vehicle_id>/<device_id>/action/car_config/set";
    const uint8_t ActionCarConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigSetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionCarConfigSetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionCarConfigSetTopic::retained = false;

    TopicString ActionCarConfigSetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics