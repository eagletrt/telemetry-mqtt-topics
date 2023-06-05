#include "ActionSessionConfigGetTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigGetTopic::topic = "fenice-evo/<device_id>/action/session_config/get";
    const uint8_t ActionSessionConfigGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigGetTopic::roles = {0, 2, 3};
    const bool ActionSessionConfigGetTopic::retain = false;

    TopicString ActionSessionConfigGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionSessionConfigGetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionSessionConfigGetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics