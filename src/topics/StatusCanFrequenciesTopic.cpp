#include "StatusCanFrequenciesTopic.h"

namespace MQTTTopics {
    const std::string StatusCanFrequenciesTopic::topic = "<vehicle_id>/<device_id>/status/can_frequencies";
    const uint8_t StatusCanFrequenciesTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusCanFrequenciesTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> StatusCanFrequenciesTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool StatusCanFrequenciesTopic::retained = true;

    TopicString StatusCanFrequenciesTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics