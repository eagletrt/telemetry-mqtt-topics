#include "ActionStopTelemetryTopic.h"

namespace MQTTTopics {
    const std::string ActionStopTelemetryTopic::topic = "fenice-evo/<device_id>/action/stop";
    const uint8_t ActionStopTelemetryTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionStopTelemetryTopic::roles = {0, 2, 3};
    const bool ActionStopTelemetryTopic::retain = false;

    TopicString ActionStopTelemetryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionStopTelemetryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionStopTelemetryTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionStopTelemetryTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics