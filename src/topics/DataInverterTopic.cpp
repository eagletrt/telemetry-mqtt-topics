#include "DataInverterTopic.h"

namespace MQTTTopics {
    const std::string DataInverterTopic::topic = "fenice-evo/<device_id>/data/inverter";
    const uint8_t DataInverterTopic::qos = 0;
    const std::unordered_set<uint8_t> DataInverterTopic::roles = {0, 2, 3};
    const bool DataInverterTopic::retain = false;

    TopicString DataInverterTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataInverterTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool DataInverterTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool DataInverterTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics