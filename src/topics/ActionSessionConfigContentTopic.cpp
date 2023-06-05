#include "ActionSessionConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigContentTopic::topic = "fenice-evo/<device_id>/action/session_config/content";
    const uint8_t ActionSessionConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigContentTopic::roles = {0, 2, 3};
    const bool ActionSessionConfigContentTopic::retain = false;

    TopicString ActionSessionConfigContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionSessionConfigContentTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionSessionConfigContentTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics