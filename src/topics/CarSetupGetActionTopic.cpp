#include "CarSetupGetActionTopic.h"

namespace MQTTTopics {
    const std::string CarSetupGetActionTopic::topic = "fenice-evo/<device_id>/action/car_setup/get";
    const uint8_t CarSetupGetActionTopic::qos = 0;
    const std::unordered_set<uint8_t> CarSetupGetActionTopic::roles = {0, 2, 3};
    const bool CarSetupGetActionTopic::retain = false;

    TopicString CarSetupGetActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CarSetupGetActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CarSetupGetActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CarSetupGetActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics