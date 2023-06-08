#include "DataSecondaryTopic.h"

namespace MQTTTopics {
    const std::string DataSecondaryTopic::topic = "<vehicle_id>/<device_id>/data/secondary";
    const uint8_t DataSecondaryTopic::qos = 0;
    const std::unordered_set<uint8_t> DataSecondaryTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> DataSecondaryTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool DataSecondaryTopic::retained = false;

    TopicString DataSecondaryTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics