#include "ActionCarConfigGetTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigGetTopic::topic = "<vehicle_id>/<device_id>/action/car_config/get";
    const uint8_t ActionCarConfigGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigGetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionCarConfigGetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionCarConfigGetTopic::retained = false;

    TopicString ActionCarConfigGetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics