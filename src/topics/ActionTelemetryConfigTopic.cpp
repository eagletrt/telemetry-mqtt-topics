#include "ActionTelemetryConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigTopic::topic = "fenice-evo/<device_id>/action/telemetry_config";
    const uint8_t ActionTelemetryConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigTopic::roles = {0, 2, 3};
    const bool ActionTelemetryConfigTopic::retain = false;

    TopicString ActionTelemetryConfigTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTelemetryConfigTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionTelemetryConfigTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionTelemetryConfigTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics