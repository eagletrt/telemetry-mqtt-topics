#include "StopTelemetryActionTopic.h"

namespace MQTTTopics {
    const std::string StopTelemetryActionTopic::topic = "fenice-evo/<device_id>/action/stop";
    const uint8_t StopTelemetryActionTopic::qos = 0;
    const std::unordered_set<uint8_t> StopTelemetryActionTopic::roles = {0, 2, 3};
    const bool StopTelemetryActionTopic::retain = false;

    TopicString StopTelemetryActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StopTelemetryActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool StopTelemetryActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool StopTelemetryActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics