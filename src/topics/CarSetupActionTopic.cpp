#include "CarSetupActionTopic.h"

namespace MQTTTopics {
    const std::string CarSetupActionTopic::topic = "fenice-evo/<device_id>/action/car_setup";
    const uint8_t CarSetupActionTopic::qos = 0;
    const std::unordered_set<uint8_t> CarSetupActionTopic::roles = {0, 2, 3};
    const bool CarSetupActionTopic::retain = false;

    TopicString CarSetupActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CarSetupActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CarSetupActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CarSetupActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics