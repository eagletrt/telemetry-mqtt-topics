#include "ActionCarConfigSetTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigSetTopic::topic = "fenice-evo/<device_id>/action/car_config/set";
    const uint8_t ActionCarConfigSetTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigSetTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> ActionCarConfigSetTopic::publishRoles = {<publishRoles>};
    const bool ActionCarConfigSetTopic::retained = <retained>;

    TopicString ActionCarConfigSetTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarConfigSetTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionCarConfigSetTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionCarConfigSetTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionCarConfigSetTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics