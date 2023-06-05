#include "TelemetryConfigGetActionTopic.h"

namespace MQTTTopics {
    const std::string TelemetryConfigGetActionTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/get";
    const uint8_t TelemetryConfigGetActionTopic::qos = 0;
    const std::unordered_set<uint8_t> TelemetryConfigGetActionTopic::roles = {0, 2, 3};
    const bool TelemetryConfigGetActionTopic::retain = false;

    TopicString TelemetryConfigGetActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int TelemetryConfigGetActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool TelemetryConfigGetActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool TelemetryConfigGetActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics