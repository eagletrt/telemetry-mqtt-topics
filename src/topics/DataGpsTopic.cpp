#include "DataGpsTopic.h"

namespace MQTTTopics {
    const std::string DataGpsTopic::topic = "fenice-evo/<device_id>/data/gps";
    const uint8_t DataGpsTopic::qos = 0;
    const std::unordered_set<uint8_t> DataGpsTopic::roles = {0, 2, 3};
    const bool DataGpsTopic::retain = false;

    TopicString DataGpsTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataGpsTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool DataGpsTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool DataGpsTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics