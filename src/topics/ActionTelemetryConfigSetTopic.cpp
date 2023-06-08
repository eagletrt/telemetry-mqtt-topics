#include "ActionTelemetryConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigSetTopic::topic = "<vehicle_id>/<device_id>/action/telemetry_config/set";
    const uint8_t ActionTelemetryConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigSetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionTelemetryConfigSetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionTelemetryConfigSetTopic::retained = false;

    TopicString ActionTelemetryConfigSetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics