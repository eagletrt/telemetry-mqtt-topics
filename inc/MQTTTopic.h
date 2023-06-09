#ifndef MQTT_TOPIC_H
#define MQTT_TOPIC_H

#include <cstdint>
#include <string>
#include <unordered_set>

class MQTTTopic
{
public:
    MQTTTopic() = delete;
    MQTTTopic(const MQTTTopic &) = delete;
    MQTTTopic &operator=(const MQTTTopic &) = delete;
    virtual ~MQTTTopic() = default;

    MQTTTopic(const std::string &topic, uint8_t qos, const std::unordered_set<uint8_t> &subscribeRoles, const std::unordered_set<uint8_t> &publishRoles, bool retained);

public:
    unsigned int qualityOfService() const;
    bool canSubscribe(unsigned int role) const;
    bool canPublish(unsigned int role) const;
    bool isRetained() const;

protected:
    const std::string topic;
    const uint8_t qos;
    const std::unordered_set<uint8_t> subscribeRoles;
    const std::unordered_set<uint8_t> publishRoles;
    const bool retained;
};

#endif