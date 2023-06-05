#include "GetConfigFileActionTopic.h"

namespace MQTTTopics {
    const std::string GetConfigFileActionTopic::topic = "fenice-evo/<device_id>/action/+/get";
    const uint8_t GetConfigFileActionTopic::qos = 0;
    const std::unordered_set<uint8_t> GetConfigFileActionTopic::roles = {0, 2, 3};
    const bool GetConfigFileActionTopic::retain = false;

    TopicString GetConfigFileActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int GetConfigFileActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool GetConfigFileActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool GetConfigFileActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics