#include "ActionCarConfigGetTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigGetTopic::topic = fenice-evo/<device_id>/action/car_config/get;
    const uint8_t ActionCarConfigGetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigGetTopic::subscribeRoles = {1};
    const std::unordered_set<uint8_t> ActionCarConfigGetTopic::publishRoles = {0, 2};
    const bool ActionCarConfigGetTopic::retained = false;

    TopicString ActionCarConfigGetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarConfigGetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionCarConfigGetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionCarConfigGetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionCarConfigGetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics