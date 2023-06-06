#include "ActionSessionConfigGetTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigGetTopic::topic = "fenice-evo/<device_id>/action/session_config/get";
    const uint8_t ActionSessionConfigGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigGetTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> ActionSessionConfigGetTopic::publishRoles = {0, 2};
    const bool ActionSessionConfigGetTopic::retained = false;

    TopicString ActionSessionConfigGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionSessionConfigGetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionSessionConfigGetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionSessionConfigGetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics