# E-Agle TRT
# MQTT topics

MQTT-topics is a code generation library for C++ to handle MQTT topics and make messages parse easier.

Given a _topics_tree.jsonc_ file that describes the topics as a tree structure, it generates two header files (topics.h, 
message_parser.h) and two source files (topics.cpp, message_parser.cpp), besides creating a CMakeLists.txt file to integrate the code with your main project and a header "mqtt_topics.h".

### topics_tree.jsonc
    {
        "<vehicleId>": {
            "alias": "VehicleId",
            "description": "<vehicleId>",
            "qos": 0,
            "retain": false,
            "subscribe_roles": ["0", "1", "2", "3", "4", "128", "129"],
            "publish_roles": ["0", "1", "2", "3", "4", "128", "129"],
            "variables": ["vehicleId"],
            "sub_topics": {
              "data": {
                  "alias": "Data",
                  "description": "<vehicleId>/data",
                  "qos": 0,
                  "retain": false,
                  "subscribe_roles": ["0", "1", "2", "3", "4"],
                  "publish_roles": ["0", "1", "2", "3", "4", "128", "129"],
                  "sub_topics": { [...] }
              }, [...]
            }
        }
    }

This is an example of _topics_tree.jsonc_; each topic is described by its name and the the following fields:
- alias: topic's name in CamelCase.
- description: topic's usage description.
- qos: MQTT Quality of Service, can be 0, 1 or 2.
- retain: MQTT retain boolean flag.
- subscribe_roles: users with this role can subscribe to the topic.
- publish_roles: users with this role can publish messages with this topic.
- variables: different values for variable fields can match the same topic.
- sub_topics: topic's subtopics, such as \<vehicleId>/data for \<vehicleId>. 
          

### topics.h
The generated topics.h header provides the following structures:
```
enum class Role 
{
    role_0 = 0,
    role_1 = 1,
    [...]
};
```
Role contains one value for each role used in all subscribe_roles and publish_roles.

```
enum class Topic
{
    vehicle_id = 0,
    data = 1,
    [...]
};
```
Topic contains one value for each topic.
```
struct TopicMessage
{
    TopicMessage(std::string&& topic, int qos, bool retain);

    std::string topic;
    int qos;
    bool retain;
};
```
TopicMessage represents a MQTT message information.

and the following functions:
```
std::vector<TopicMessage> GetSubscribeTopics(Role role, const std::string& vehicleId, [...]);
std::vector<TopicMessage> GetPublishTopics(Role role, const std::string& vehicleId, [...]);
```
GetSubscribeTopics returns the topics list a user with the passed role can subscribe to. \
GetPublishTopics returns the topics list a user with the passed role can publish to.
```
bool CanSubscribe(Role role, Topic topic);
bool CanPublish(Role role, Topic topic);
```
CanSubscribe returns true if a user with the passed role can subscribe to topic. \
CanPublish returns true if a user with the passed role can publish to topic.

```
TopicMessage GetTopic(Topic topic, const std::string& vehicleId = "\<vehicleId>");
TopicMessage GetTopicVehicleId(const std::string& vehicleId);
TopicMessage GetTopicData(const std::string& vehicleId);
```
GetTopic... functions set can be used to build a TopicMessage with the passed values for variable fields.

### message_parser.h
The generated message_parser.h heade provides the MessageParser class which expose the following types and methods:
  ```
struct Variables
{
    Variables(const std::string& vehicleId, const std::string& deviceId, [...]);

    std::string vehicleId;
    std::string deviceId;
    [...]
};
```
Variables is used to represent the set of variable fields of all topics.
```
typedef void (*parse_t)(const std::string& payload, void* argument);
```
parse_t is the type for parse callback functions; argument is passed through setMessageParse.
```
MessageParser();
```
MessageParser is the default contructor.
```
void setMessageParse(Topic topic, parse_t parse, void* argument = nullptr);
```
setMessageParse is used to set parse as the function callback for the passed topic; argument can be used inside parse implementation.
```
void parseMessage(const Variables& variables, const std::string& topic, const std::string& payload);
```
parseMessage matches and calls the previously set parse callback functions, for message with the passed topic and payload, considering the passed variable fields values.
