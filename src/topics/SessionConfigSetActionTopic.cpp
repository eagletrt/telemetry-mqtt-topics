#include "SessionConfigSetActionTopic.h"

namespace MQTTTopics {
    const std::string SessionConfigSetActionTopic::topic = "fenice-evo/<device_id>/action/session_config/set";
    const uint8_t SessionConfigSetActionTopic::qos = 0;
    const std::unordered_set<uint8_t> SessionConfigSetActionTopic::roles = {0, 2, 3};
    const bool SessionConfigSetActionTopic::retain = false;

    TopicString SessionConfigSetActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int SessionConfigSetActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool SessionConfigSetActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool SessionConfigSetActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics