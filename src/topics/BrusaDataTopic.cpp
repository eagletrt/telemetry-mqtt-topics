#include "inc/topics/BrusaDataTopic.h"

namespace MQTTTopics {
    const std::string BrusaDataTopic::topic = "fenice-evo/<device_id>/data/brusa";
    const uint8_t BrusaDataTopic::qos = 0;
    const std::unordered_set<uint8_t> BrusaDataTopic::roles = {1, 2, 3, 4};

    TopicString BrusaDataTopic::get(const std::string& device_id = "telemetry") {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int BrusaDataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool BrusaDataTopic::hasPermission(const unsigned int &role) {
        return (roles.find(role) != roles.cend());
    }
}// namespace MQTTTopics