#include "TelemetryConfigContentActionTopic.h"

namespace MQTTTopics {
    const std::string TelemetryConfigContentActionTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/content";
    const uint8_t TelemetryConfigContentActionTopic::qos = 0;
    const std::unordered_set<uint8_t> TelemetryConfigContentActionTopic::roles = {0, 2, 3};
    const bool TelemetryConfigContentActionTopic::retain = false;

    TopicString TelemetryConfigContentActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int TelemetryConfigContentActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool TelemetryConfigContentActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool TelemetryConfigContentActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics