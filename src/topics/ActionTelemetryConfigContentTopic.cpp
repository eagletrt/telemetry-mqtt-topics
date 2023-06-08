#include "ActionTelemetryConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigContentTopic::topic = "<vehicle_id>/<device_id>/action/telemetry_config/content";
    const uint8_t ActionTelemetryConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigContentTopic::subscribeRoles = {0, 1, 2, 3, 4, 128, 129};
    const std::unordered_set<uint8_t> ActionTelemetryConfigContentTopic::publishRoles = {0, 1, 2, 3, 4, 128, 129};
    const bool ActionTelemetryConfigContentTopic::retained = false;

    TopicString ActionTelemetryConfigContentTopic::get(const std::string& vehicleId, const std::string& deviceId) {
        std::string str(topic);

		str.replace(str.find("<vehicleId>"), 11, vehicleId);
		str.replace(str.find("<deviceId>"), 10, deviceId);

        return str;
    }
}// namespace MQTTTopics