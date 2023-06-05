#include "FeniceEvoRootTopic.h"

namespace MQTTTopics {
    const std::string FeniceEvoRootTopic::topic = "fenice-evo/<device_id>";
    const uint8_t FeniceEvoRootTopic::qos = 0;
    const std::unordered_set<uint8_t> FeniceEvoRootTopic::roles = {0, 2, 3};
    const bool FeniceEvoRootTopic::retain = false;

    TopicString FeniceEvoRootTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int FeniceEvoRootTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FeniceEvoRootTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool FeniceEvoRootTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics