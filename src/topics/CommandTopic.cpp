#include "CommandTopic.h"

namespace MQTTTopics {
    const std::string CommandTopic::topic = "fenice-evo/<device_id>/command";
    const uint8_t CommandTopic::qos = 0;
    const std::unordered_set<uint8_t> CommandTopic::subscribeRoles = {0, 1, 2, 3};
    const std::unordered_set<uint8_t> CommandTopic::publishRoles = {0, 1, 2, 3};
    const bool CommandTopic::retained = false;

    TopicString CommandTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CommandTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool CommandTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool CommandTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool CommandTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics