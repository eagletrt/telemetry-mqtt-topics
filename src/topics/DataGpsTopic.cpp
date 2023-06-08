#include "DataGpsTopic.h"

namespace MQTTTopics {
    const std::string DataGpsTopic::topic = "<vehicle_id>/<device_id>/data/gps";
    const uint8_t DataGpsTopic::qos = 0;
    const std::unordered_set<uint8_t> DataGpsTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> DataGpsTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool DataGpsTopic::retained = false;

    TopicString DataGpsTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics