#include "StatusInfoTopic.h"

namespace MQTTTopics {
    const std::string StatusInfoTopic::topic = fenice-evo/<device_id>/status/info;
    const uint8_t StatusInfoTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusInfoTopic::subscribeRoles = {0, 1, 2, 3};
    const std::unordered_set<uint8_t> StatusInfoTopic::publishRoles = {0, 1};
    const bool StatusInfoTopic::retained = true;

    TopicString StatusInfoTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusInfoTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool StatusInfoTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool StatusInfoTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool StatusInfoTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics