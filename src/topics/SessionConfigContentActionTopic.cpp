#include "SessionConfigContentActionTopic.h"

namespace MQTTTopics {
    const std::string SessionConfigContentActionTopic::topic = "fenice-evo/<device_id>/action/session_config/content";
    const uint8_t SessionConfigContentActionTopic::qos = 0;
    const std::unordered_set<uint8_t> SessionConfigContentActionTopic::roles = {0, 2, 3};
    const bool SessionConfigContentActionTopic::retain = false;

    TopicString SessionConfigContentActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int SessionConfigContentActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool SessionConfigContentActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool SessionConfigContentActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics