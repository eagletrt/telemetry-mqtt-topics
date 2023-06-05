#include "ActionConfigFileSetTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigFileSetTopic::topic = "fenice-evo/<device_id>/action/+/set";
    const uint8_t ActionConfigFileSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigFileSetTopic::roles = {0, 2, 3};
    const bool ActionConfigFileSetTopic::retain = false;

    TopicString ActionConfigFileSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigFileSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigFileSetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigFileSetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics