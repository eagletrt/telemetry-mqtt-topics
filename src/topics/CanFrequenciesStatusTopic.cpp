#include "CanFrequenciesStatusTopic.h"

namespace MQTTTopics {
    const std::string CanFrequenciesStatusTopic::topic = "fenice-evo/<device_id>/status/can_frequencies";
    const uint8_t CanFrequenciesStatusTopic::qos = 0;
    const std::unordered_set<uint8_t> CanFrequenciesStatusTopic::roles = {0, 2, 3};
    const bool CanFrequenciesStatusTopic::retain = false;

    TopicString CanFrequenciesStatusTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CanFrequenciesStatusTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CanFrequenciesStatusTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CanFrequenciesStatusTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics