#include "ActionConfigsSetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsSetTopic::topic = "fenice-evo/<device_id>/action/+/set";
    const uint8_t ActionConfigsSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsSetTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> ActionConfigsSetTopic::publishRoles = {0, 2};
    const bool ActionConfigsSetTopic::retained = false;

    TopicString ActionConfigsSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigsSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionConfigsSetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionConfigsSetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionConfigsSetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics