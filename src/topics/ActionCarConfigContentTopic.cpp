#include "ActionCarConfigContentTopic.h"

namespace MQTTTopics {
    const std::string ActionCarConfigContentTopic::topic = "fenice-evo/<device_id>/action/car_config/content";
    const uint8_t ActionCarConfigContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionCarConfigContentTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> ActionCarConfigContentTopic::publishRoles = {<publishRoles>};
    const bool ActionCarConfigContentTopic::retained = <retained>;

    TopicString ActionCarConfigContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionCarConfigContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionCarConfigContentTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionCarConfigContentTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionCarConfigContentTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics