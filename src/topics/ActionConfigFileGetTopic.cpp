#include "ActionConfigFileGetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigFileGetTopic::topic = "fenice-evo/<device_id>/action/+/get";
    const uint8_t ActionConfigFileGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigFileGetTopic::roles = {0, 2, 3};
    const bool ActionConfigFileGetTopic::retain = false;

    TopicString ActionConfigFileGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigFileGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigFileGetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigFileGetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics