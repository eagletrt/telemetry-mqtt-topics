#include "ActionCarSetupGetTopic.h"

namespace MQTTTopics {
    const std::string ActionCarSetupGetTopic::topic = "fenice-evo/<device_id>/action/car_setup/get";
    const uint8_t ActionCarSetupGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarSetupGetTopic::roles = {0, 2, 3};
    const bool ActionCarSetupGetTopic::retain = false;

    TopicString ActionCarSetupGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarSetupGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionCarSetupGetTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionCarSetupGetTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics