#include "VehicleIdTopic.h"

namespace MQTTTopics {
    const std::string VehicleIdTopic::topic = "<vehicle_id>";
    const uint8_t VehicleIdTopic::qos = 0;
    const std::unordered_set<uint8_t> VehicleIdTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> VehicleIdTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool VehicleIdTopic::retained = false;

    TopicString VehicleIdTopic::get(const std::string& vehicleId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);

        return str;
    }
}// namespace MQTTTopics