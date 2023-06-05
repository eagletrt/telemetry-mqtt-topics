#include "StatusErrorTopic.h"

namespace MQTTTopics {
    const std::string StatusErrorTopic::topic = "fenice-evo/<device_id>/status/error";
    const uint8_t StatusErrorTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusErrorTopic::roles = {0, 2, 3};
    const bool StatusErrorTopic::retain = false;

    TopicString StatusErrorTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusErrorTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool StatusErrorTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool StatusErrorTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics