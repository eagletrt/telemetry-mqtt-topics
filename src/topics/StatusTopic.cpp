#include "StatusTopic.h"

namespace MQTTTopics {
    const std::string StatusTopic::topic = "fenice-evo/<device_id>/status";
    const uint8_t StatusTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusTopic::roles = {0, 2, 3};
    const bool StatusTopic::retain = false;

    TopicString StatusTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool StatusTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool StatusTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics