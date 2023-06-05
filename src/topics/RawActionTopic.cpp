#include "RawActionTopic.h"

namespace MQTTTopics {
    const std::string RawActionTopic::topic = "fenice-evo/<device_id>/action/raw";
    const uint8_t RawActionTopic::qos = 0;
    const std::unordered_set<uint8_t> RawActionTopic::roles = {0, 2, 3};
    const bool RawActionTopic::retain = false;

    TopicString RawActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int RawActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool RawActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool RawActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics