#include "ActionConfigFilesContentTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigFilesContentTopic::topic = "fenice-evo/<device_id>/action/+/content";
    const uint8_t ActionConfigFilesContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigFilesContentTopic::roles = {0, 2, 3};
    const bool ActionConfigFilesContentTopic::retain = false;

    TopicString ActionConfigFilesContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigFilesContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigFilesContentTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigFilesContentTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics