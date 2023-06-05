#include "PrimaryDataTopic.h"

namespace MQTTTopics {
    const std::string PrimaryDataTopic::topic = "fenice-evo/<device_id>/data/primary";
    const uint8_t PrimaryDataTopic::qos = 0;
    const std::unordered_set<uint8_t> PrimaryDataTopic::roles = {0, 2, 3};
    const bool PrimaryDataTopic::retain = false;

    TopicString PrimaryDataTopic::get(const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int PrimaryDataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool PrimaryDataTopic::hasPermission(unsigned int role) {
        return (roles.find(role) != roles.cend());
    }

    bool PrimaryDataTopic::retained() {
        return retain;
    }
}// namespace MQTTTopics