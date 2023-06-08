#include "VehicleIdDeviceIdTopic.h"

namespace MQTTTopics {
    const std::string VehicleIdDeviceIdTopic::topic = "<vehicle_id>/<device_id>";
    const uint8_t VehicleIdDeviceIdTopic::qos = 0;
    const std::unordered_set<uint8_t> VehicleIdDeviceIdTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> VehicleIdDeviceIdTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool VehicleIdDeviceIdTopic::retained = false;

    TopicString VehicleIdDeviceIdTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics