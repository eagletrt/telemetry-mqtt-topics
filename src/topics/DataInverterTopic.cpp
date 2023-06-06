#include "DataInverterTopic.h"

namespace MQTTTopics {
    const std::string DataInverterTopic::topic = "fenice-evo/<device_id>/data/inverter";
    const uint8_t DataInverterTopic::qos = 0;
    const std::unordered_set<uint8_t> DataInverterTopic::roles = {1, 2, 3, 4};
    const bool DataInverterTopic::retain = false;

    TopicString DataInverterTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataInverterTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool DataInverterTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool DataInverterTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool DataInverterTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics