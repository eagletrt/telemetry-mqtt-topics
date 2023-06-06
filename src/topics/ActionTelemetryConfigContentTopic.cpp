#include "ActionTelemetryConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionTelemetryConfigContentTopic::topic = "fenice-evo/<device_id>/action/telemetry_config/content";
    const uint8_t ActionTelemetryConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTelemetryConfigContentTopic::subscribeRoles = {0, 2};
    const std::unordered_set<uint8_t> ActionTelemetryConfigContentTopic::publishRoles = {1};
    const bool ActionTelemetryConfigContentTopic::retained = false;

    TopicString ActionTelemetryConfigContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTelemetryConfigContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionTelemetryConfigContentTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionTelemetryConfigContentTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionTelemetryConfigContentTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics