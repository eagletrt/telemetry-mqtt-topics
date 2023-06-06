#include "DataGpsTopic.h"

namespace MQTTTopics {
    const std::string DataGpsTopic::topic = fenice-evo/<device_id>/data/gps;
    const uint8_t DataGpsTopic::qos = 0;
    const std::unordered_set<uint8_t> DataGpsTopic::subscribeRoles = {0, 2, 3};
    const std::unordered_set<uint8_t> DataGpsTopic::publishRoles = {0, 1};
    const bool DataGpsTopic::retained = false;

    TopicString DataGpsTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataGpsTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool DataGpsTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool DataGpsTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool DataGpsTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics