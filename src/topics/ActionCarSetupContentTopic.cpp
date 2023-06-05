#include "ActionCarSetupContentTopic.h"

namespace MQTTTopics {
    const std::string ActionCarSetupContentTopic::topic = "fenice-evo/<device_id>/action/car_setup/content";
    const uint8_t ActionCarSetupContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarSetupContentTopic::roles = {0, 2, 3};
    const bool ActionCarSetupContentTopic::retain = false;

    TopicString ActionCarSetupContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarSetupContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionCarSetupContentTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionCarSetupContentTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics