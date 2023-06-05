#include "SecondaryDataTopic.h"

namespace MQTTTopics {
    const std::string SecondaryDataTopic::topic = "fenice-evo/<device_id>/data/secondary";
    const uint8_t SecondaryDataTopic::qos = 0;
    const std::unordered_set<uint8_t> SecondaryDataTopic::roles = {0, 2, 3};
    const bool SecondaryDataTopic::retain = true;

    TopicString SecondaryDataTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int SecondaryDataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool SecondaryDataTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool SecondaryDataTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics