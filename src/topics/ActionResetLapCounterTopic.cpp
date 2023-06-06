#include "ActionResetLapCounterTopic.h"

namespace MQTTTopics {
    const std::string ActionResetLapCounterTopic::topic = "fenice-evo/<device_id>/action/reset_lapcounter";
    const uint8_t ActionResetLapCounterTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionResetLapCounterTopic::roles = {1, 2, 3, 4};
    const bool ActionResetLapCounterTopic::retain = false;

    TopicString ActionResetLapCounterTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionResetLapCounterTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool ActionResetLapCounterTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool ActionResetLapCounterTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool ActionResetLapCounterTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics