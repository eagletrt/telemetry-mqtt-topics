#include "ActionConfigFileContentTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigFileContentTopic::topic = "fenice-evo/<device_id>/action/+/content";
    const uint8_t ActionConfigFileContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigFileContentTopic::roles = {0, 2, 3};
    const bool ActionConfigFileContentTopic::retain = false;

    TopicString ActionConfigFileContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigFileContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigFileContentTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigFileContentTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics