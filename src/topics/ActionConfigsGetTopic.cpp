#include "ActionConfigsGetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsGetTopic::topic = "fenice-evo/<device_id>/action/+/get";
    const uint8_t ActionConfigsGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsGetTopic::roles = {0, 2, 3};
    const bool ActionConfigsGetTopic::retain = false;

    TopicString ActionConfigsGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigsGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigsGetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigsGetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics