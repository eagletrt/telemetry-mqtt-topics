#include "LapCounterResetActionTopic.h"

namespace MQTTTopics {
    const std::string LapCounterResetActionTopic::topic = "fenice-evo/<device_id>/action/lapcounter_reset";
    const uint8_t LapCounterResetActionTopic::qos = 0;
    const std::unordered_set<uint8_t> LapCounterResetActionTopic::roles = {0, 2, 3};
    const bool LapCounterResetActionTopic::retain = false;

    TopicString LapCounterResetActionTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int LapCounterResetActionTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool LapCounterResetActionTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool LapCounterResetActionTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics