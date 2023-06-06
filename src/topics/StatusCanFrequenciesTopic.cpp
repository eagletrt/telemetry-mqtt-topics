#include "StatusCanFrequenciesTopic.h"

namespace MQTTTopics {
    const std::string StatusCanFrequenciesTopic::topic = "fenice-evo/<device_id>/status/can_frequencies";
    const uint8_t StatusCanFrequenciesTopic::qos = 0;
    const std::unordered_set<uint8_t> StatusCanFrequenciesTopic::roles = {1, 2, 3, 4};
    const bool StatusCanFrequenciesTopic::retain = false;

    TopicString StatusCanFrequenciesTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int StatusCanFrequenciesTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool StatusCanFrequenciesTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool StatusCanFrequenciesTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool StatusCanFrequenciesTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics