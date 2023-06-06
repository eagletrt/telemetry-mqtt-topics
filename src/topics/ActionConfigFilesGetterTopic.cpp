#include "ActionConfigFilesGetterTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigFilesGetterTopic::topic = "fenice-evo/<device_id>/action/+/get";
    const uint8_t ActionConfigFilesGetterTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigFilesGetterTopic::roles = {0, 2, 3};
    const bool ActionConfigFilesGetterTopic::retain = false;

    TopicString ActionConfigFilesGetterTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigFilesGetterTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionConfigFilesGetterTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionConfigFilesGetterTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics