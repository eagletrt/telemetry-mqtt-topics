#include "ActionCarSetupSetTopic.h"

namespace MQTTTopics {
    const std::string ActionCarSetupSetTopic::topic = "fenice-evo/<device_id>/action/car_setup/set";
    const uint8_t ActionCarSetupSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarSetupSetTopic::roles = {0, 2, 3};
    const bool ActionCarSetupSetTopic::retain = false;

    TopicString ActionCarSetupSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarSetupSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionCarSetupSetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionCarSetupSetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics