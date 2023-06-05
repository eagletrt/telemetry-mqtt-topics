#include "TelemetryConfigSetActionTopic.h"

namespace MQTTTopics {
    const std::string TelemetryConfigSetActionTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/set";
    const uint8_t TelemetryConfigSetActionTopic::qos = 0;
    const std::unordered_set<uint8_t> TelemetryConfigSetActionTopic::roles = {0, 2, 3};
    const bool TelemetryConfigSetActionTopic::retain = false;

    TopicString TelemetryConfigSetActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int TelemetryConfigSetActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool TelemetryConfigSetActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool TelemetryConfigSetActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics