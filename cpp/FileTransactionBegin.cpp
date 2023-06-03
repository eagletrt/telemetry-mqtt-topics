#include "FileTransactionBegin.h"

namespace MQTTTopics {

    FileTransactionBegin::FileTransactionBegin(const std::string &topic, const uint64_t &qos, const std::initializer_list<uint64_t> &roles)
        : topic(topic), qos(qos), roles(roles) {
    }

    TopicString FileTransactionBegin::get(const std::string &deviceId, const std::string &transactionId) const {
        std::string str(topic);

        // the second parameter is the hardcoded length of the first parameter
        str.replace(str.find("<device_id>"), 11, deviceId);
        str.replace(str.find("<transaction_id>"), 16, transactionId);

        return str;
    }

    int FileTransactionBegin::qualityOfService() const {
        return static_cast<int>(qos);
    }

    bool FileTransactionBegin::canSubscribe(const unsigned int &role) const {
        return (roles.find(role) != roles.cend());
    }
}// namespace MQTTTopics