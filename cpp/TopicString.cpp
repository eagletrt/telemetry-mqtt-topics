#include "TopicString.h"

TopicString::TopicString(const std::string &topic) : topic(topic) {}

TopicString operator/(const TopicString &lhs, const TopicString &rhs) {
    return (lhs.topic + '/' + rhs.topic);
}

TopicString operator/(const TopicString &lhs, const std::string &rhs) {
    return (lhs.topic + '/' + rhs);
}

TopicString operator/(const TopicString &lhs, const char &rhs) {
    return (lhs.topic + '/' + rhs);
}