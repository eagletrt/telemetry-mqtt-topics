#include "ActionConfigsSetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsSetTopic::topic = "fenice-evo/<device_id>/action/+/set";
    const uint8_t ActionConfigsSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsSetTopic::roles = {0, 2, 3};
    const bool ActionConfigsSetTopic::retain = false;

    TopicString ActionConfigsSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigsSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigsSetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigsSetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics