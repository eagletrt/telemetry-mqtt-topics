#include "ActionSessionConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionSessionConfigSetTopic::topic = "fenice-evo/<device_id>/action/session_config/set";
    const uint8_t ActionSessionConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionSessionConfigSetTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> ActionSessionConfigSetTopic::publishRoles = {<publishRoles>};
    const bool ActionSessionConfigSetTopic::retained = <retained>;

    TopicString ActionSessionConfigSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionSessionConfigSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionSessionConfigSetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionSessionConfigSetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionSessionConfigSetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics