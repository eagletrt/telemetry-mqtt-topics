#include "ActionCarConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigTopic::topic = "<vehicle_id>/<device_id>/action/car_config";
    const uint8_t ActionCarConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionCarConfigTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionCarConfigTopic::retained = false;

    TopicString ActionCarConfigTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics