#include "ActionTelemetryConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigSetTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/set";
    const uint8_t ActionTelemetryConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigSetTopic::roles = {0, 2, 3};
    const bool ActionTelemetryConfigSetTopic::retain = false;

    TopicString ActionTelemetryConfigSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTelemetryConfigSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionTelemetryConfigSetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionTelemetryConfigSetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics