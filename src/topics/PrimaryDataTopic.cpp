#include "inc/topics/PrimaryDataTopic.h"

namespace MQTTTopics {
    const std::string PrimaryDataTopic::topic = "fenice-evo/<device_id>/data/primary";
    const uint8_t PrimaryDataTopic::qos = 0;
    const std::unordered_set<uint8_t> PrimaryDataTopic::roles = {1, 2, 3, 4};

    TopicString PrimaryDataTopic::get(const std::string& device_id = "telemetry") {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);

        return str;
    }

    int PrimaryDataTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

    bool PrimaryDataTopic::hasPermission(const unsigned int &role) {
        return (roles.find(role) != roles.cend());
    }
}// namespace MQTTTopics