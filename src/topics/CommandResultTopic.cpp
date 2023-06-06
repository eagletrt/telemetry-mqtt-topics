#include "CommandResultTopic.h"

namespace MQTTTopics {
    const std::string CommandResultTopic::topic = "fenice-evo/<device_id>/command/result";
    const uint8_t CommandResultTopic::qos = 0;
    const std::unordered_set<uint8_t> CommandResultTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> CommandResultTopic::publishRoles = {<publishRoles>};
    const bool CommandResultTopic::retained = <retained>;

    TopicString CommandResultTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CommandResultTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool CommandResultTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool CommandResultTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool CommandResultTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics