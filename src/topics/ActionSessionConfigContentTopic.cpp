#include "ActionSessionConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigContentTopic::topic = "fenice-evo/<device_id>/action/session_config/content";
    const uint8_t ActionSessionConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigContentTopic::subscribeRoles = {0, 2};
    const std::unordered_set<uint8_t> ActionSessionConfigContentTopic::publishRoles = {1};
    const bool ActionSessionConfigContentTopic::retained = false;

    TopicString ActionSessionConfigContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionSessionConfigContentTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionSessionConfigContentTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionSessionConfigContentTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics