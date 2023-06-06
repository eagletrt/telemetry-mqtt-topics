#include "ActionStartTelemetryTopic.h"

namespace MQTTTopics {
    const std::string ActionStartTelemetryTopic::topic = "fenice-evo/<device_id>/action/start";
    const uint8_t ActionStartTelemetryTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionStartTelemetryTopic::roles = {1, 2, 3, 4};
    const bool ActionStartTelemetryTopic::retain = false;

    TopicString ActionStartTelemetryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionStartTelemetryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionStartTelemetryTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionStartTelemetryTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionStartTelemetryTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics