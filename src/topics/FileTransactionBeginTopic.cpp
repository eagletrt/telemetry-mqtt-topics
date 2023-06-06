#include "FileTransactionBeginTopic.h"

namespace MQTTTopics {
    const std::string FileTransactionBeginTopic::topic = "fenice-evo/<device_id>/file_transaction/<transaction_id>/begin";
    const uint8_t FileTransactionBeginTopic::qos = 0;
    const std::unordered_set<uint8_t> FileTransactionBeginTopic::subscribeRoles = {<subscribeRoles>};
    const std::unordered_set<uint8_t> FileTransactionBeginTopic::publishRoles = {<publishRoles>};
    const bool FileTransactionBeginTopic::retained = <retained>;

    TopicString FileTransactionBeginTopic::get(const std::string& transaction_id, const std::string& device_id) {
        std::string str(topic);

		str.replace(str.find("<device_id>"), 11, device_id);
		str.replace(str.find("<transaction_id>"), 16, transaction_id);

        return str;
    }

    int FileTransactionBeginTopic::qualityOfService() {
        return static_cast<int>(qos);
    }

     bool FileTransactionBeginTopic::canSubscribe(unsigned int role) {
        return (subscribeRoles.find(role) != subscribeRoles.cend());
    }

    bool FileTransactionBeginTopic::canPublish(unsigned int role) {
        return (publishRoles.find(role) != publishRoles.cend());
    }

    bool FileTransactionBeginTopic::isRetained() {
        return retained;
    }
}// namespace MQTTTopics