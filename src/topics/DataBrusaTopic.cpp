#include "DataBrusaTopic.h"

namespace MQTTTopics {
    const std::string DataBrusaTopic::topic = "fenice-evo/<device_id>/data/brusa";
    const uint8_t DataBrusaTopic::qos = 0;
    const std::unordered_set<uint8_t> DataBrusaTopic::subscribeRoles = {0, 2, 3};
    const std::unordered_set<uint8_t> DataBrusaTopic::publishRoles = {0, 1};
    const bool DataBrusaTopic::retained = false;

    TopicString DataBrusaTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataBrusaTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool DataBrusaTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool DataBrusaTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool DataBrusaTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics