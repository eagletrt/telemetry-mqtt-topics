#include "ActionSessionConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigSetTopic::topic = "fenice-evo/<device_id>/action/session_config/set";
    const uint8_t ActionSessionConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigSetTopic::roles = {0, 2, 3};
    const bool ActionSessionConfigSetTopic::retain = false;

    TopicString ActionSessionConfigSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionSessionConfigSetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionSessionConfigSetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics