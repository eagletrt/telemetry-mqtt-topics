#include "GPSDataTopic.h"

namespace MQTTTopics {
    const std::string GPSDataTopic::topic = "fenice-evo/<device_id>/data/gps";
    const uint8_t GPSDataTopic::qos = 0;
    const std::unordered_set<uint8_t> GPSDataTopic::roles = {0, 2, 3};
    const bool GPSDataTopic::retain = true;

    TopicString GPSDataTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int GPSDataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool GPSDataTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool GPSDataTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics