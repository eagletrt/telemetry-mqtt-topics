#include "StatusErrorTopic.h"

namespace MQTTTopics {
    const std::string StatusErrorTopic::topic = "<vehicle_id>/<device_id>/status/error";
    const uint8_t StatusErrorTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusErrorTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> StatusErrorTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool StatusErrorTopic::retained = true;

    TopicString StatusErrorTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics