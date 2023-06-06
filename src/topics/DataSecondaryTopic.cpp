#include "DataSecondaryTopic.h"

namespace MQTTTopics {
    const std::string DataSecondaryTopic::topic = "fenice-evo/<device_id>/data/secondary";
    const uint8_t DataSecondaryTopic::qos = 0;
    const std::unordered_set<uint8_t> DataSecondaryTopic::subscribeRoles = {0, 2, 3};
    const std::unordered_set<uint8_t> DataSecondaryTopic::publishRoles = {0, 1};
    const bool DataSecondaryTopic::retained = false;

    TopicString DataSecondaryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataSecondaryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool DataSecondaryTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool DataSecondaryTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool DataSecondaryTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics