#include "ActionTelemetryConfigGetTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigGetTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/get";
    const uint8_t ActionTelemetryConfigGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigGetTopic::roles = {0, 2, 3};
    const bool ActionTelemetryConfigGetTopic::retain = false;

    TopicString ActionTelemetryConfigGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTelemetryConfigGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionTelemetryConfigGetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionTelemetryConfigGetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics