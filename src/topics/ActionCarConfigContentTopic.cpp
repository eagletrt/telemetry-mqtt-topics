#include "ActionCarConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigContentTopic::topic = "fenice-evo/<device_id>/action/car_config/content";
    const uint8_t ActionCarConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigContentTopic::roles = {0, 2, 3};
    const bool ActionCarConfigContentTopic::retain = false;

    TopicString ActionCarConfigContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarConfigContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionCarConfigContentTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionCarConfigContentTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics