#include "../inc/MqttTopics.h"

const VehicleIdTopic MqttTopics::vehicleIdTopic = VehicleIdTopic();
const FileTransactionBeginTopic MqttTopics::fileTransactionBeginTopic = FileTransactionBeginTopic();

/* ... */

std::vector<TopicString> MqttTopics::GetSubscribeTopics(unsigned int role) {
    std::vector<TopicString> ret;

    // IDK

    return ret;
}

std::vector<TopicString> MqttTopics::GetPublishTopics(unsigned int role) {
    std::vector<TopicString> ret;

    // IDK

    return ret;
}
