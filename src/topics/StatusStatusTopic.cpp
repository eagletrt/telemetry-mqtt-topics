#include "StatusStatusTopic.h"

namespace MQTTTopics {
    const std::string StatusStatusTopic::topic = "fenice-evo/<device_id>/status/status";
    const uint8_t StatusStatusTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusStatusTopic::roles = {0, 2, 3};
    const bool StatusStatusTopic::retain = false;

    TopicString StatusStatusTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusStatusTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool StatusStatusTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool StatusStatusTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics