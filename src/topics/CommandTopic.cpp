#include "CommandTopic.h"

namespace MQTTTopics {
    const std::string CommandTopic::topic = "fenice-evo/<device_id>/command";
    const uint8_t CommandTopic::qos = 0;
    const std::unordered_set<uint8_t> CommandTopic::roles = {0, 2, 3};
    const bool CommandTopic::retain = false;

    TopicString CommandTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CommandTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CommandTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CommandTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics