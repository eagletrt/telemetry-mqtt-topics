#include "DataTopic.h"

namespace MQTTTopics {
    const std::string DataTopic::topic = "fenice-evo/<device_id>/data";
    const uint8_t DataTopic::qos = 0;
    const std::unordered_set<uint8_t> DataTopic::roles = {0, 2, 3};
    const bool DataTopic::retain = false;

    TopicString DataTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool DataTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool DataTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics