#ifndef MQTT_TOPICS_LIST_H
#define MQTT_TOPICS_LIST_H

#include "MqttTopic.h"
#include "TopicString.h"

class VehicleIdTopic : public MqttTopic
{
    friend class MqttTopics;

public:
    VehicleIdTopic(const VehicleIdTopic &) = delete;
    VehicleIdTopic &operator=(const VehicleIdTopic &) = delete;
    ~VehicleIdTopic() override = default;

private:
    VehicleIdTopic();

public:
    TopicString get(const std::string &vehicleId = "feniceEvo") const;
};

class FileTransactionBeginTopic : public MqttTopic
{
    friend class MqttTopics;

public:
    FileTransactionBeginTopic(const FileTransactionBeginTopic &) = delete;
    FileTransactionBeginTopic &operator=(const FileTransactionBeginTopic &) = delete;
    ~FileTransactionBeginTopic() override = default;

private:
    FileTransactionBeginTopic();

public:
    TopicString get(const std::string &transactionId, const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};

/* ... */

#endif
