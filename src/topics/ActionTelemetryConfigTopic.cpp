#include "ActionTelemetryConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigTopic::topic = "<vehicle_id>/<device_id>/action/telemetry_config";
    const uint8_t ActionTelemetryConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionTelemetryConfigTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionTelemetryConfigTopic::retained = false;

    TopicString ActionTelemetryConfigTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics