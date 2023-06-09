#include "MQTTTopic.h"

MQTTTopic::MQTTTopic(const std::string &topic, uint8_t qos, const std::unordered_set<uint8_t> &subscribeRoles, const std::unordered_set<uint8_t> &publishRoles, bool retained)
    : topic(topic), qos(qos), subscribeRoles(subscribeRoles), publishRoles(publishRoles), retained(retained) {}

unsigned int MQTTTopic::qualityOfService() const {
    return qos;
}

bool MQTTTopic::canSubscribe(unsigned int role) const {
    return (subscribeRoles.find(role) != subscribeRoles.cend());
}

bool MQTTTopic::canPublish(unsigned int role) const {
    return (publishRoles.find(role) != publishRoles.cend());
}

bool MQTTTopic::isRetained() const {
    return retained;
}