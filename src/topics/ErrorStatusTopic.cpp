#include "ErrorStatusTopic.h"

namespace MQTTTopics {
    const std::string ErrorStatusTopic::topic = "fenice-evo/<device_id>/status/error";
    const uint8_t ErrorStatusTopic::qos = 0;
    const std::unordered_set<uint8_t> ErrorStatusTopic::roles = {0, 2, 3};
    const bool ErrorStatusTopic::retain = false;

    TopicString ErrorStatusTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ErrorStatusTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ErrorStatusTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ErrorStatusTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics