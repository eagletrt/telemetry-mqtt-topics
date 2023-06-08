#include "DataInverterTopic.h"

namespace MQTTTopics {
    const std::string DataInverterTopic::topic = "<vehicle_id>/<device_id>/data/inverter";
    const uint8_t DataInverterTopic::qos = 0;
    const std::unordered_set<uint8_t> DataInverterTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> DataInverterTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool DataInverterTopic::retained = false;

    TopicString DataInverterTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics