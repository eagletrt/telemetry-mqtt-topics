#ifndef MESSAGE_PARSER_H
#define MESSAGE_PARSER_H

#include "topics.h"

#include <functional>
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
    };

public:
    MessageParser();

    void setMessageParse(Topic topic, parse_t parse, void* argument = nullptr);
    void parseMessage(const Variables& variables, const std::string& topic, const std::string& payload);

private:
    void buildTree();
    void addTopic(TopicNode& node, const std::string& topic);
    static TopicNode* findNode(TopicNode& node, const std::string& topic);
    static std::vector<TopicNode*> findNodesVariables(TopicNode& node, const std::string& topic, const Variables& variables);
    static void findNodesVariablesRec(TopicNode& node, const std::string& topic, const Variables& variables, bool hashtag, std::vector<TopicNode*>& ret);

    MessageParser::TopicNode tree;
};
}

#endif