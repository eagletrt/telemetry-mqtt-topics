#include "SessionConfigActionTopic.h"

namespace MQTTTopics {
    const std::string SessionConfigActionTopic::topic = "fenice-evo/<device_id>/action/session_config";
    const uint8_t SessionConfigActionTopic::qos = 0;
    const std::unordered_set<uint8_t> SessionConfigActionTopic::roles = {0, 2, 3};
    const bool SessionConfigActionTopic::retain = false;

    TopicString SessionConfigActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int SessionConfigActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool SessionConfigActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool SessionConfigActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics