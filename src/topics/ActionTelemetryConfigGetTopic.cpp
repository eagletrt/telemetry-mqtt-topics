#include "ActionTelemetryConfigGetTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigGetTopic::topic = "<vehicle_id>/<device_id>/action/telemetry_config/get";
    const uint8_t ActionTelemetryConfigGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigGetTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionTelemetryConfigGetTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionTelemetryConfigGetTopic::retained = false;

    TopicString ActionTelemetryConfigGetTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics