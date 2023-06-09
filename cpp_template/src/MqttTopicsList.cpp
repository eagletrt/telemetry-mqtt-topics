#include "../inc/MqttTopicsList.h"

VehicleIdTopic::VehicleIdTopic()
    : MqttTopic("<vehicleId>", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionBeginTopic::FileTransactionBeginTopic()
    : MqttTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

/* ... */

TopicString VehicleIdTopic::get(const std::string &vehicleId) const {
    std::string str(topic);

    str.replace(str.find("<vehicle_id>"), 12, vehicleId);

    return str;
}

TopicString FileTransactionBeginTopic::get(const std::string &transactionId, const std::string &deviceId, const std::string &vehicleId) const {
    std::string str(topic);

    str.replace(str.find("<vehicleId>"), 11, vehicleId);
    str.replace(str.find("<deviceId>"), 10, deviceId);
    str.replace(str.find("<transactionId>"), 15, transactionId);

    return str;
}

/* ... */
