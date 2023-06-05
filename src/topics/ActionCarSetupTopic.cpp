#include "ActionCarSetupTopic.h"

namespace MQTTTopics {
    const std::string ActionCarSetupTopic::topic = "fenice-evo/<device_id>/action/car_setup";
    const uint8_t ActionCarSetupTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarSetupTopic::roles = {0, 2, 3};
    const bool ActionCarSetupTopic::retain = false;

    TopicString ActionCarSetupTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarSetupTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionCarSetupTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionCarSetupTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics