#include "CommandSendTopic.h"

namespace MQTTTopics {
    const std::string CommandSendTopic::topic = "fenice-evo/<device_id>/command/send";
    const uint8_t CommandSendTopic::qos = 0;
    const std::unordered_set<uint8_t> CommandSendTopic::roles = {0, 2, 3};
    const bool CommandSendTopic::retain = false;

    TopicString CommandSendTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CommandSendTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CommandSendTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CommandSendTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics