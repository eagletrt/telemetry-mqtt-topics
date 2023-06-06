#include "ActionTopic.h"

namespace MQTTTopics {
    const std::string ActionTopic::topic = "fenice-evo/<device_id>/action";
    const uint8_t ActionTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTopic::roles = {1, 2, 3, 4};
    const bool ActionTopic::retain = false;

    TopicString ActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics