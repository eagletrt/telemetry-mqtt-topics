#include "CmdResultTopic.h"

namespace MQTTTopics {
    const std::string CmdResultTopic::topic = "fenice-evo/<device_id>/cmd/result";
    const uint8_t CmdResultTopic::qos = 0;
    const std::unordered_set<uint8_t> CmdResultTopic::roles = {0, 2, 3};
    const bool CmdResultTopic::retain = false;

    TopicString CmdResultTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int CmdResultTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool CmdResultTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool CmdResultTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics