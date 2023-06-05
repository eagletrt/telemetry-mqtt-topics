#include "StartTelemetryActionTopic.h"

namespace MQTTTopics {
    const std::string StartTelemetryActionTopic::topic = "fenice-evo/<device_id>/action/start";
    const uint8_t StartTelemetryActionTopic::qos = 0;
    const std::unordered_set<uint8_t> StartTelemetryActionTopic::roles = {0, 2, 3};
    const bool StartTelemetryActionTopic::retain = false;

    TopicString StartTelemetryActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StartTelemetryActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool StartTelemetryActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool StartTelemetryActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics