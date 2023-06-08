#include "StatusTopic.h"

namespace MQTTTopics {
    const std::string StatusTopic::topic = "<vehicle_id>/<device_id>/status";
    const uint8_t StatusTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> StatusTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool StatusTopic::retained = true;

    TopicString StatusTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics