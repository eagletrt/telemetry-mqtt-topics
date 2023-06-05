#include "ActionResetLapCounterTopic.h"

namespace MQTTTopics {
    const std::string ActionResetLapCounterTopic::topic = "fenice-evo/<device_id>/action/lapcounter_reset";
    const uint8_t ActionResetLapCounterTopic::qos = 0;
    const std::unordered_set<uint8_t> ActionResetLapCounterTopic::roles = {0, 2, 3};
    const bool ActionResetLapCounterTopic::retain = false;

    TopicString ActionResetLapCounterTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int ActionResetLapCounterTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool ActionResetLapCounterTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool ActionResetLapCounterTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics