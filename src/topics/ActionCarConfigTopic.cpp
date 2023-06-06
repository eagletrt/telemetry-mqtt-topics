#include "ActionCarConfigTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigTopic::topic = "fenice-evo/<device_id>/action/car_config";
    const uint8_t ActionCarConfigTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigTopic::subscribeRoles = {0, 1, 2, 3};
    const std::unordered_set<uint8_t> ActionCarConfigTopic::publishRoles = {0, 1, 2, 3};
    const bool ActionCarConfigTopic::retained = false;

    TopicString ActionCarConfigTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarConfigTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionCarConfigTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionCarConfigTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionCarConfigTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics