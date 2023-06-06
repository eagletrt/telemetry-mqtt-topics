#include "ActionSessionConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigTopic::topic = "fenice-evo/<device_id>/action/session_config";
    const uint8_t ActionSessionConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigTopic::roles = {1, 2, 3, 4};
    const bool ActionSessionConfigTopic::retain = false;

    TopicString ActionSessionConfigTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionSessionConfigTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionSessionConfigTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionSessionConfigTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics