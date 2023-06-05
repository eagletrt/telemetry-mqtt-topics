#include "CmdTopic.h"

namespace MQTTTopics {
    const std::string CmdTopic::topic = "fenice-evo/<device_id>/cmd";
    const uint8_t CmdTopic::qos = 0;
    const std::unordered_set<uint8_t> CmdTopic::roles = {0, 2, 3};
    const bool CmdTopic::retain = false;

    TopicString CmdTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CmdTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CmdTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CmdTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics