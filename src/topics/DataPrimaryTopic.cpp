#include "DataPrimaryTopic.h"

namespace MQTTTopics {
    const std::string DataPrimaryTopic::topic = "fenice-evo/<device_id>/data/primary";
    const uint8_t DataPrimaryTopic::qos = 0;
    const std::unordered_set<uint8_t> DataPrimaryTopic::roles = {0, 2, 3};
    const bool DataPrimaryTopic::retain = false;

    TopicString DataPrimaryTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int DataPrimaryTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool DataPrimaryTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool DataPrimaryTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics