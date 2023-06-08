#include "Topic.h"

namespace MQTTTopics {
    unsigned int Topic::qualityOfService() {
        return qos;
    }

     bool Topic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool Topic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool Topic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics