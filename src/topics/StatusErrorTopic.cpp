#include "StatusErrorTopic.h"

namespace MQTTTopics {
    const std::string StatusErrorTopic::topic = "fenice-evo/<device_id>/status/error";
    const uint8_t StatusErrorTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusErrorTopic::subscribeRoles = {0, 1, 2, 3};
    const std::unordered_set<uint8_t> StatusErrorTopic::publishRoles = {0, 1};
    const bool StatusErrorTopic::retained = true;

    TopicString StatusErrorTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusErrorTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool StatusErrorTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool StatusErrorTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool StatusErrorTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics