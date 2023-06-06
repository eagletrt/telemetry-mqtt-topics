#include "ActionTelemetryConfigGetTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigGetTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/get";
    const uint8_t ActionTelemetryConfigGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigGetTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> ActionTelemetryConfigGetTopic::publishRoles = {0, 2};
    const bool ActionTelemetryConfigGetTopic::retained = false;

    TopicString ActionTelemetryConfigGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTelemetryConfigGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionTelemetryConfigGetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionTelemetryConfigGetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionTelemetryConfigGetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics