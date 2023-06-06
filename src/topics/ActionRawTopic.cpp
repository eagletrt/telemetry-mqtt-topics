#include "ActionRawTopic.h"

namespace MQTTTopics {
    const std::string ActionRawTopic::topic = "fenice-evo/<device_id>/action/raw";
    const uint8_t ActionRawTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionRawTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> ActionRawTopic::publishRoles = {<publishRoles>};
    const bool ActionRawTopic::retained = <retained>;

    TopicString ActionRawTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionRawTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionRawTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionRawTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionRawTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics