#include "DataPrimaryTopic.h"

namespace MQTTTopics {
    const std::string DataPrimaryTopic::topic = "<vehicle_id>/<device_id>/data/primary";
    const uint8_t DataPrimaryTopic::qos = 0;
    const std::unordered_set<uint8_t> DataPrimaryTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> DataPrimaryTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool DataPrimaryTopic::retained = false;

    TopicString DataPrimaryTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics