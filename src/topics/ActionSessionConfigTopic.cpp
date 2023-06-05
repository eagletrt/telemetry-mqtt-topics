#include "ActionSessionConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigTopic::topic = "fenice-evo/<device_id>/action/session_config";
    const uint8_t ActionSessionConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigTopic::roles = {0, 2, 3};
    const bool ActionSessionConfigTopic::retain = false;

    TopicString ActionSessionConfigTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionSessionConfigTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionSessionConfigTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics