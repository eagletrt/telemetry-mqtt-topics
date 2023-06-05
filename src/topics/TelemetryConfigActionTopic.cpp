#include "TelemetryConfigActionTopic.h"

namespace MQTTTopics {
    const std::string TelemetryConfigActionTopic::topic = "fenice-evo/<device_id>/action/telemetry_config";
    const uint8_t TelemetryConfigActionTopic::qos = 0;
    const std::unordered_set<uint8_t> TelemetryConfigActionTopic::roles = {0, 2, 3};
    const bool TelemetryConfigActionTopic::retain = false;

    TopicString TelemetryConfigActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int TelemetryConfigActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool TelemetryConfigActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool TelemetryConfigActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics