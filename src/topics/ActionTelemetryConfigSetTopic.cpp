#include "ActionTelemetryConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigSetTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/set";
    const uint8_t ActionTelemetryConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigSetTopic::roles = {1, 2, 3, 4};
    const bool ActionTelemetryConfigSetTopic::retain = false;

    TopicString ActionTelemetryConfigSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTelemetryConfigSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionTelemetryConfigSetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionTelemetryConfigSetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionTelemetryConfigSetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics