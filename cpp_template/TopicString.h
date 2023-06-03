#ifndef TOPIC_STRING_H
#define TOPIC_STRING_H

#include <string>

class TopicString
{
    friend TopicString operator/(const TopicString &lhs, const TopicString &rhs);
    friend TopicString operator/(const TopicString &lhs, const std::string &rhs);
    friend TopicString operator/(const TopicString &lhs, char rhs);

public:
    TopicString() = delete;
    TopicString(const TopicString &) = default;
    TopicString &operator=(const TopicString &) = delete;
    ~TopicString() = default;

    TopicString(const std::string &topic);

public:
    operator std::string() const { return topic; }

private:
    const std::string topic;
};

TopicString operator/(const TopicString &lhs, const TopicString &rhs);
TopicString operator/(const TopicString &lhs, const std::string &rhs);
TopicString operator/(const TopicString &lhs, char rhs);

#endif