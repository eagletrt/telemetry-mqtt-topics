#include "DataTopic.h"

namespace MQTTTopics {
    const std::string DataTopic::topic = "fenice-evo/<device_id>/data";
    const uint8_t DataTopic::qos = 0;
    const std::unordered_set<uint8_t> DataTopic::roles = {1, 2, 3, 4};
    const bool DataTopic::retain = false;

    TopicString DataTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool DataTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool DataTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool DataTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics