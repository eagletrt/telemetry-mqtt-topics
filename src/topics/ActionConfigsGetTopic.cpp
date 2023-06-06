#include "ActionConfigsGetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsGetTopic::topic = "fenice-evo/<device_id>/action/+/get";
    const uint8_t ActionConfigsGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsGetTopic::roles = {1, 2, 3, 4};
    const bool ActionConfigsGetTopic::retain = false;

    TopicString ActionConfigsGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigsGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionConfigsGetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionConfigsGetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionConfigsGetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics