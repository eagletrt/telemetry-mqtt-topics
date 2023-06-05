#include "CmdSendTopic.h"

namespace MQTTTopics {
    const std::string CmdSendTopic::topic = "fenice-evo/<device_id>/cmd/cmd";
    const uint8_t CmdSendTopic::qos = 0;
    const std::unordered_set<uint8_t> CmdSendTopic::roles = {0, 2, 3};
    const bool CmdSendTopic::retain = false;

    TopicString CmdSendTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CmdSendTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CmdSendTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CmdSendTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics