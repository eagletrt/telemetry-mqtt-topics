#include "CarSetupSetActionTopic.h"

namespace MQTTTopics {
    const std::string CarSetupSetActionTopic::topic = "fenice-evo/<device_id>/action/car_setup/set";
    const uint8_t CarSetupSetActionTopic::qos = 0;
    const std::unordered_set<uint8_t> CarSetupSetActionTopic::roles = {0, 2, 3};
    const bool CarSetupSetActionTopic::retain = false;

    TopicString CarSetupSetActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CarSetupSetActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CarSetupSetActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CarSetupSetActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics