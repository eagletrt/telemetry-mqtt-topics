#include "../inc/MqttTopic.h"

MqttTopic::MqttTopic(const std::string &topic, uint8_t qos, const std::unordered_set<uint8_t> &subscribeRoles, const std::unordered_set<uint8_t> &publishRoles, bool retained)
    : topic(topic), qos(qos), subscribeRoles(subscribeRoles), publishRoles(publishRoles), retained(retained) {}

unsigned int MqttTopic::qualityOfService() const {
    return qos;
}

bool MqttTopic::canSubscribe(unsigned int role) const {
    return (subscribeRoles.find(role) != subscribeRoles.cend());
}

bool MqttTopic::canPublish(unsigned int role) const {
    return (publishRoles.find(role) != publishRoles.cend());
}

bool MqttTopic::isRetained() const {
    return retained;
}