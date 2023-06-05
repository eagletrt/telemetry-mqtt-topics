#include "CarSetupContentActionTopic.h"

namespace MQTTTopics {
    const std::string CarSetupContentActionTopic::topic = "fenice-evo/<device_id>/action/car_setup/content";
    const uint8_t CarSetupContentActionTopic::qos = 0;
    const std::unordered_set<uint8_t> CarSetupContentActionTopic::roles = {0, 2, 3};
    const bool CarSetupContentActionTopic::retain = false;

    TopicString CarSetupContentActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CarSetupContentActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CarSetupContentActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CarSetupContentActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics