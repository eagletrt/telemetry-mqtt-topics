#include "ActionKillTelemetryTopic.h"

namespace MQTTTopics {
    const std::string ActionKillTelemetryTopic::topic = "fenice-evo/<device_id>/action/kill";
    const uint8_t ActionKillTelemetryTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionKillTelemetryTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> ActionKillTelemetryTopic::publishRoles = {<publishRoles>};
    const bool ActionKillTelemetryTopic::retained = <retained>;

    TopicString ActionKillTelemetryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionKillTelemetryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionKillTelemetryTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionKillTelemetryTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionKillTelemetryTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics