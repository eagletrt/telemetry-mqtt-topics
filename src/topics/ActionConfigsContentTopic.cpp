#include "ActionConfigsContentTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsContentTopic::topic = "fenice-evo/<device_id>/action/+/content";
    const uint8_t ActionConfigsContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsContentTopic::roles = {0, 2, 3};
    const bool ActionConfigsContentTopic::retain = false;

    TopicString ActionConfigsContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigsContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigsContentTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigsContentTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics