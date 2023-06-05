#include "SessionConfigGetActionTopic.h"

namespace MQTTTopics {
    const std::string SessionConfigGetActionTopic::topic = "fenice-evo/<device_id>/action/session_config/get";
    const uint8_t SessionConfigGetActionTopic::qos = 0;
    const std::unordered_set<uint8_t> SessionConfigGetActionTopic::roles = {0, 2, 3};
    const bool SessionConfigGetActionTopic::retain = false;

    TopicString SessionConfigGetActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int SessionConfigGetActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool SessionConfigGetActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool SessionConfigGetActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics