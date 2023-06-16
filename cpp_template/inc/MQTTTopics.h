#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include <string>

constexpr int MQTT_TOPIC_MAX= 128;

enum class MQTTRoles {
    ROLE_0 = 0,
	ROLE_1 = 1,
	ROLE_2 = 2,
	ROLE_3 = 3,
	ROLE_4 = 4,

	ROLE_128 = 128,
	ROLE_129 = 129,

}; 

enum MQTTTopics {
    VEHICLE_ID = 0,
	DEVICE_ID,
	DATA,
	DATA_PRIMARY,
	DATA_SECONDARY,
	DATA_INVERTER,
	DATA_GPS,
	DATA_BRUSA,
	STATUS,
	STATUS_INFO,
	STATUS_ERROR,
	STATUS_CAN_FREQUENCIES,
	COMMAND,
	COMMAND_SEND,
	COMMAND_RESULT,
	FILE_TRANSACTION_ASK,
	FILE_TRANSACTION_ACK,
	FILE_TRANSACTION,
	FILE_TRANSACTION_BEGIN,
	FILE_TRANSACTION_END,
	FILE_TRANSACTION_CHUNK,
	ACTION,
	ACTION_TELEMETRY_CONFIG,
	ACTION_TELEMETRY_CONFIG_SET,
	ACTION_TELEMETRY_CONFIG_GET,
	ACTION_TELEMETRY_CONFIG_CONTENT,
	ACTION_SESSION_CONFIG,
	ACTION_SESSION_CONFIG_SET,
	ACTION_SESSION_CONFIG_GET,
	ACTION_SESSION_CONFIG_CONTENT,
	ACTION_CAR_CONFIG,
	ACTION_CAR_CONFIG_SET,
	ACTION_CAR_CONFIG_GET,
	ACTION_CAR_CONFIG_CONTENT,
	ACTION_CONFIGS_SET,
	ACTION_CONFIGS_GET,
	ACTION_CONFIGS_CONTENT,
	ACTION_KILL,
	ACTION_START,
	ACTION_RESET,
	ACTION_STOP,
	ACTION_RAW,
	ACTION_RESET_LAP_COUNTER
};

struct MQTTTopic 
{
    std::string topic[MQTT_TOPIC_MAX];
    int qos;
    bool retained;
}t;


// checks if sub or pub is allowed for the given role
bool canSubscribe(MQTTRoles role, MQTTTopics topic);
bool canPublish(MQTTRoles role, enum MQTTTopics topic);

// MODE 1 (construct anyway)
MQTTTopic build_vehicle_id(const std::string& vehicleId);
MQTTTopic build_device_id(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_data(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_data_primary(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_data_secondary(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_data_inverter(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_data_gps(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_data_brusa(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_status(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_status_info(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_status_error(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_status_can_frequencies(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_command(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_command_send(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_command_result(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_file_transaction_ask(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_file_transaction_ack(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_file_transaction(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
MQTTTopic build_file_transaction_begin(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
MQTTTopic build_file_transaction_end(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
MQTTTopic build_file_transaction_chunk(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
MQTTTopic build_action(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_telemetry_config(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_telemetry_config_set(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_telemetry_config_get(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_telemetry_config_content(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_session_config(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_session_config_set(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_session_config_get(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_session_config_content(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_car_config(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_car_config_set(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_car_config_get(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_car_config_content(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_configs_set(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_configs_get(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_configs_content(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_kill(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_start(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_reset(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_stop(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_raw(const std::string& vehicleId, const std::string& deviceId);
MQTTTopic build_action_reset_lap_counter(const std::string& vehicleId, const std::string& deviceId);

#endif