#include "ActionConfigsContentTopic.h"

namespace MQTTTopics {
    const std::string ActionConfigsContentTopic::topic = "fenice-evo/<device_id>/action/+/content";
    const uint8_t ActionConfigsContentTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionConfigsContentTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> ActionConfigsContentTopic::publishRoles = {<publishRoles>};
    const bool ActionConfigsContentTopic::retained = <retained>;

    TopicString ActionConfigsContentTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionConfigsContentTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionConfigsContentTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionConfigsContentTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionConfigsContentTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics