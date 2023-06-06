#include "ActionCarConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigTopic::topic = "fenice-evo/<device_id>/action/car_config";
    const uint8_t ActionCarConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigTopic::roles = {0, 2, 3};
    const bool ActionCarConfigTopic::retain = false;

    TopicString ActionCarConfigTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarConfigTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionCarConfigTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionCarConfigTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics