#include "ActionTopic.h"

namespace MQTTTopics {
    const std::string ActionTopic::topic = "fenice-evo/<device_id>/action";
    const uint8_t ActionTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionTopic::roles = {0, 2, 3};
    const bool ActionTopic::retain = false;

    TopicString ActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics