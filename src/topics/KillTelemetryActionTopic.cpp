#include "KillTelemetryActionTopic.h"

namespace MQTTTopics {
    const std::string KillTelemetryActionTopic::topic = "fenice-evo/<device_id>/action/kill";
    const uint8_t KillTelemetryActionTopic::qos = 0;
    const std::unordered_set<uint8_t> KillTelemetryActionTopic::roles = {0, 2, 3};
    const bool KillTelemetryActionTopic::retain = false;

    TopicString KillTelemetryActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int KillTelemetryActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool KillTelemetryActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool KillTelemetryActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics