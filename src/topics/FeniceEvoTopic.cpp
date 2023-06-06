#include "FeniceEvoTopic.h"

namespace MQTTTopics {
    const std::string FeniceEvoTopic::topic = "fenice-evo/<device_id>";
    const uint8_t FeniceEvoTopic::qos = 0;
    const std::unordered_set<uint8_t> FeniceEvoTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> FeniceEvoTopic::publishRoles = {<publishRoles>};
    const bool FeniceEvoTopic::retained = <retained>;

    TopicString FeniceEvoTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int FeniceEvoTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool FeniceEvoTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool FeniceEvoTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool FeniceEvoTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics