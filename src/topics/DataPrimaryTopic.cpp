#include "DataPrimaryTopic.h"

namespace MQTTTopics {
    const std::string DataPrimaryTopic::topic = fenice-evo/<device_id>/data/primary;
    const uint8_t DataPrimaryTopic::qos = 0;
    const std::unordered_set<uint8_t> DataPrimaryTopic::subscribeRoles = {0, 2, 3};
    const std::unordered_set<uint8_t> DataPrimaryTopic::publishRoles = {0, 1};
    const bool DataPrimaryTopic::retained = false;

    TopicString DataPrimaryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataPrimaryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool DataPrimaryTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool DataPrimaryTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool DataPrimaryTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics