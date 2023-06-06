#include "ActionCarConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigSetTopic::topic = "fenice-evo/<device_id>/action/car_config/set";
    const uint8_t ActionCarConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigSetTopic::roles = {0, 2, 3};
    const bool ActionCarConfigSetTopic::retain = false;

    TopicString ActionCarConfigSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarConfigSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionCarConfigSetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionCarConfigSetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics