#include "ActionKillTelemetryTopic.h"

namespace MQTTTopics {
    const std::string ActionKillTelemetryTopic::topic = "fenice-evo/<device_id>/action/kill";
    const uint8_t ActionKillTelemetryTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionKillTelemetryTopic::roles = {0, 2, 3};
    const bool ActionKillTelemetryTopic::retain = false;

    TopicString ActionKillTelemetryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionKillTelemetryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionKillTelemetryTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionKillTelemetryTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics