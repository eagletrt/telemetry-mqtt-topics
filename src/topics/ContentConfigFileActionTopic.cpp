#include "ContentConfigFileActionTopic.h"

namespace MQTTTopics {
    const std::string ContentConfigFileActionTopic::topic = "fenice-evo/<device_id>/action/+/content";
    const uint8_t ContentConfigFileActionTopic::qos = 0;
    const std::unordered_set<uint8_t> ContentConfigFileActionTopic::roles = {0, 2, 3};
    const bool ContentConfigFileActionTopic::retain = false;

    TopicString ContentConfigFileActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ContentConfigFileActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ContentConfigFileActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ContentConfigFileActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics