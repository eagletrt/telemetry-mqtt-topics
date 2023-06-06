#include "ActionResetTelemetryTopic.h"

namespace MQTTTopics {
    const std::string ActionResetTelemetryTopic::topic = "fenice-evo/<device_id>/action/reset";
    const uint8_t ActionResetTelemetryTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionResetTelemetryTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> ActionResetTelemetryTopic::publishRoles = {0};
    const bool ActionResetTelemetryTopic::retained = false;

    TopicString ActionResetTelemetryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionResetTelemetryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionResetTelemetryTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionResetTelemetryTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionResetTelemetryTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics