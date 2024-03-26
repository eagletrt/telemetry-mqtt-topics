#ifndef MESSAGE_PARSER_H
#define MESSAGE_PARSER_H

#include "topics.h"

#include <string>
#include <memory>
#include <unordered_map>

namespace MQTTTopics
{
class MessageParser
{
public:
    typedef void (*parse_t)(const std::string& payload, void*);
    
    struct Variables
    {
        Variables(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);

        std::string vehicleId;
        std::string deviceId;
        std::string transactionId;
    };

private:
    struct TopicNode
    {
        std::unique_ptr<parse_t> parse;
        void* argument = nullptr;
        std::unordered_map<std::string, TopicNode> adjacent;

        void addNode(const std::string& topic);
        TopicNode* findNode(const std::string& topic);
        std::vector<TopicNode*> findNodesVariables(const std::string& topic, const Variables& variables);
        void findNodesVariablesRec(const std::string& topic, const Variables& variables, bool hashtag, std::vector<TopicNode*>& ret);
    };

public:
    MessageParser();

    void setMessageParse(Topic topic, parse_t parse, void* argument = nullptr);
    void parseMessage(const Variables& variables, const std::string& topic, const std::string& payload);

private:
    MessageParser::TopicNode tree;
};
}

#endif