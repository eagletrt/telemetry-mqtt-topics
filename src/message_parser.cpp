#include "message_parser.h"

#include <algorithm>

namespace MQTTTopics
{

MessageParser::Variables::Variables(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) :
    vehicleId(vehicleId), deviceId(deviceId), transactionId(transactionId) {}

MessageParser::MessageParser() {
    this->buildTree();
}

void MessageParser::setMessageParse(Topic topic, parse_t parse, void* argument) {
    auto node = this->findNode(this->tree, GetTopic(topic).topic);

    if(node != nullptr) {
        node->parse = std::make_unique<parse_t>(parse);
        
        if(argument != nullptr) {
            node->argument = argument; 
        }
    }
}

void MessageParser::parseMessage(const Variables& variables, const std::string& topic, const std::string& payload) {
    auto node = this->findNode(this->tree, topic, variables);

    if(node != nullptr) {
        (*node->parse)(payload, node->argument);
    }
}

void MessageParser::buildTree() {
    this->addTopic(this->tree, "<vehicleId>");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/version");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data/primary");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data/secondary");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data/bms");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data/inverters");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data/simulator");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data/gps");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/data/brusa");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/last_update");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/status");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/status/info");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/status/error");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/status/alert");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/status/canFrequencies");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/status/lapCounterStatus");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/status/lapCounterLaps");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/command");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/command/send");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/command/result");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/fileTransaction/request");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/fileTransaction/response");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/fileTransaction/<transactionId>");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/fileTransaction/<transactionId>/end");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk_ack");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/telemetryConfig");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/telemetryConfig/set");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/telemetryConfig/get");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/telemetryConfig/content");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/sessionConfig");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/sessionConfig/set");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/sessionConfig/get");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/sessionConfig/content");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/carConfig");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/carConfig/set");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/carConfig/get");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/carConfig/content");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/handcartSettings");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/handcartSettings/set");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/handcartSettings/get");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/handcartSettings/content");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/kill");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/start");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/reset");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/stop");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/precharge");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/balance");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/stopBalance");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/charge");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/stopCharge");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/raw");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/resetLapcounter");
    this->addTopic(this->tree, "<vehicleId>/<deviceId>/action/setLapcounterStatus");
}

void MessageParser::addTopic(TopicNode& node, const std::string& topic) {
    if(topic.empty()) {
        return;
    }

    auto slash = std::find(topic.begin(), topic.end(), '/');

    std::string subTopic = std::string(topic.begin(), slash);
    auto iter = node.adjacent.find(subTopic);

    if(iter == node.adjacent.end()) {
        iter = node.adjacent.emplace(subTopic, TopicNode()).first;
    }

    if(slash != topic.end()) {
        this->addTopic(iter->second, std::string(slash + 1, topic.end()));
    }
}

MessageParser::TopicNode* MessageParser::findNode(TopicNode& node, const std::string& topic) {
    auto slash = std::find(topic.begin(), topic.end(), '/');

    std::string subTopic = std::string(topic.begin(), slash);
    auto iter = node.adjacent.find(subTopic);

    if(iter == node.adjacent.end()) {
        return nullptr;
    } 
    
    if(slash == topic.end()) {
        return &(iter->second);
    } else {
        return findNode(iter->second, std::string(slash + 1, topic.end()));
    }
}

MessageParser::TopicNode* MessageParser::findNode(TopicNode& node, const std::string& topic, const Variables& variables) {
    auto slash = std::find(topic.begin(), topic.end(), '/');

    std::string subTopic = std::string(topic.begin(), slash);
    auto iter = node.adjacent.find(subTopic);

    if(iter == node.adjacent.end()) {
        iter = std::find_if(node.adjacent.begin(), node.adjacent.end(), [&subTopic, &variables](auto& next) {
            if(next.first == "<vehicleId>" && subTopic == variables.vehicleId) {
                return true;
            } else if(next.first == "<deviceId>" && subTopic == variables.deviceId) {
                return true;
            } else if(next.first == "<transactionId>" && subTopic == variables.transactionId) {
                return true;
            } else {
                return false;
            }
        });
    }

    if(iter == node.adjacent.end()) {
        return nullptr;
    } 
    
    if(slash == topic.end()) {
        return &(iter->second);
    } else {
        return findNode(iter->second, std::string(slash + 1, topic.end()), variables);
    }
}
}