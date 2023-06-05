#include "FeniceEvoTopic.h"

namespace MQTTTopics {
    const std::string FeniceEvoTopic::topic = "fenice-evo/<device_id>";
    const uint8_t FeniceEvoTopic::qos = 0;
    const std::unordered_set<uint8_t> FeniceEvoTopic::roles = {0, 2, 3};
    const bool FeniceEvoTopic::retain = false;

    TopicString FeniceEvoTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int FeniceEvoTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool FeniceEvoTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool FeniceEvoTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics