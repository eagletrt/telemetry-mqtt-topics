#include "ActionRawTopic.h"

namespace MQTTTopics {
    const std::string ActionRawTopic::topic = "fenice-evo/<device_id>/action/raw";
    const uint8_t ActionRawTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionRawTopic::roles = {0, 2, 3};
    const bool ActionRawTopic::retain = false;

    TopicString ActionRawTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionRawTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionRawTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionRawTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics