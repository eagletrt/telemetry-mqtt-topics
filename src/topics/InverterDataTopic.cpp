#include "inc/topics/InverterDataTopic.h"

namespace MQTTTopics {
    const std::string InverterDataTopic::topic = "fenice-evo/<device_id>/data/inverter";
    const uint8_t InverterDataTopic::qos = 0;
    const std::unordered_set<uint8_t> InverterDataTopic::roles = {1, 2, 3, 4};

    TopicString InverterDataTopic::get(const std::string& device_id = "telemetry") {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int InverterDataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool InverterDataTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }
}// namespace MQTTTopics