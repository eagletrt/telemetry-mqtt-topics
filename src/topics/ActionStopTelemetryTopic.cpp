#include "ActionStopTelemetryTopic.h"

namespace MQTTTopics {
    const std::string ActionStopTelemetryTopic::topic = "fenice-evo/<device_id>/action/stop";
    const uint8_t ActionStopTelemetryTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionStopTelemetryTopic::roles = {1, 2, 3, 4};
    const bool ActionStopTelemetryTopic::retain = false;

    TopicString ActionStopTelemetryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionStopTelemetryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionStopTelemetryTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionStopTelemetryTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionStopTelemetryTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics