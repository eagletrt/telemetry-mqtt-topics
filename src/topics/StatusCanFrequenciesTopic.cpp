#include "StatusCanFrequenciesTopic.h"

namespace MQTTTopics {
    const std::string StatusCanFrequenciesTopic::topic = "fenice-evo/<device_id>/status/can_frequencies";
    const uint8_t StatusCanFrequenciesTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusCanFrequenciesTopic::roles = {0, 2, 3};
    const bool StatusCanFrequenciesTopic::retain = false;

    TopicString StatusCanFrequenciesTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusCanFrequenciesTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool StatusCanFrequenciesTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool StatusCanFrequenciesTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics