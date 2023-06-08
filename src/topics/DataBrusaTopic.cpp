#include "DataBrusaTopic.h"

namespace MQTTTopics {
    const std::string DataBrusaTopic::topic = "<vehicle_id>/<device_id>/data/brusa";
    const uint8_t DataBrusaTopic::qos = 0;
    const std::unordered_set<uint8_t> DataBrusaTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> DataBrusaTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool DataBrusaTopic::retained = false;

    TopicString DataBrusaTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics