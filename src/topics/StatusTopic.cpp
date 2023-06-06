#include "StatusTopic.h"

namespace MQTTTopics {
    const std::string StatusTopic::topic = fenice-evo/<device_id>/status;
    const uint8_t StatusTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusTopic::subscribeRoles = {0, 1, 2, 3};
    const std::unordered_set<uint8_t> StatusTopic::publishRoles = {0, 1};
    const bool StatusTopic::retained = true;

    TopicString StatusTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool StatusTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool StatusTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool StatusTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics