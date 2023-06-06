#include "ActionConfigFilesSetterTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigFilesSetterTopic::topic = "fenice-evo/<device_id>/action/+/set";
    const uint8_t ActionConfigFilesSetterTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigFilesSetterTopic::roles = {0, 2, 3};
    const bool ActionConfigFilesSetterTopic::retain = false;

    TopicString ActionConfigFilesSetterTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigFilesSetterTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigFilesSetterTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigFilesSetterTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics