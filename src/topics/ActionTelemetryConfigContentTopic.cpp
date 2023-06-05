#include "ActionTelemetryConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigContentTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/content";
    const uint8_t ActionTelemetryConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigContentTopic::roles = {0, 2, 3};
    const bool ActionTelemetryConfigContentTopic::retain = false;

    TopicString ActionTelemetryConfigContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTelemetryConfigContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionTelemetryConfigContentTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionTelemetryConfigContentTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics