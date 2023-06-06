#include "StatusInfoTopic.h"

namespace MQTTTopics {
    const std::string StatusInfoTopic::topic = "fenice-evo/<device_id>/status/info";
    const uint8_t StatusInfoTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusInfoTopic::roles = {0, 2, 3};
    const bool StatusInfoTopic::retain = false;

    TopicString StatusInfoTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusInfoTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool StatusInfoTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool StatusInfoTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics