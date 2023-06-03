#include "inc/topics/SecondaryDataTopic.h"

namespace MQTTTopics {
    const std::string SecondaryDataTopic::topic = "fenice-evo/<device_id>/data/secondary";
    const uint8_t SecondaryDataTopic::qos = 0;
    const std::unordered_set<uint8_t> SecondaryDataTopic::roles = {1, 2, 3, 4};

    TopicString SecondaryDataTopic::get(const std::string& device_id = "telemetry") {
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
}// namespace MQTTTopics