#include "CommandResultTopic.h"

namespace MQTTTopics {
    const std::string CommandResultTopic::topic = "fenice-evo/<device_id>/command/result";
    const uint8_t CommandResultTopic::qos = 0;
    const std::unordered_set<uint8_t> CommandResultTopic::roles = {0, 2, 3};
    const bool CommandResultTopic::retain = false;

    TopicString CommandResultTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CommandResultTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CommandResultTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CommandResultTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics