#include "ActionResetLapCounterTopic.h"

namespace MQTTTopics {
    const std::string ActionResetLapCounterTopic::topic = "<vehicle_id>/<device_id>/action/reset_lapcounter";
    const uint8_t ActionResetLapCounterTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionResetLapCounterTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionResetLapCounterTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionResetLapCounterTopic::retained = false;

    TopicString ActionResetLapCounterTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics