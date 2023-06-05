#include "SetConfigFileActionTopic.h"

namespace MQTTTopics {
    const std::string SetConfigFileActionTopic::topic = "fenice-evo/<device_id>/action/+/set";
    const uint8_t SetConfigFileActionTopic::qos = 0;
    const std::unordered_set<uint8_t> SetConfigFileActionTopic::roles = {0, 2, 3};
    const bool SetConfigFileActionTopic::retain = false;

    TopicString SetConfigFileActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int SetConfigFileActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool SetConfigFileActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool SetConfigFileActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics