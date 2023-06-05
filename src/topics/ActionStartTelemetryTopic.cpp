#include "ActionStartTelemetryTopic.h"

namespace MQTTTopics {
    const std::string ActionStartTelemetryTopic::topic = "fenice-evo/<device_id>/action/start";
    const uint8_t ActionStartTelemetryTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionStartTelemetryTopic::roles = {0, 2, 3};
    const bool ActionStartTelemetryTopic::retain = false;

    TopicString ActionStartTelemetryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionStartTelemetryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionStartTelemetryTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionStartTelemetryTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics