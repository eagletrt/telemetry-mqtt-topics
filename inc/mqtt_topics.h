#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include <stdlib.h>
#include <stdbool.h>

#ifndef TOPIC_MAX_STR_LEN
#define TOPIC_MAX_STR_LEN 128
#endif

enum ROLES_T {
    ROLE_0 = 0,
	ROLE_1 = 1,
	ROLE_2 = 2,
	ROLE_3 = 3,
	ROLE_4 = 4,

	ROLE_128 = 128,
	ROLE_129 = 129,

}; 

enum TOPICS_T {
    TOPIC_VEHICLE_ID = 0,
	TOPIC_DEVICE_ID,
	TOPIC_DATA,
	TOPIC_DATA_PRIMARY,
	TOPIC_DATA_SECONDARY,
	TOPIC_DATA_INVERTER,
	TOPIC_DATA_GPS,
	TOPIC_DATA_BRUSA,
	TOPIC_STATUS,
	TOPIC_STATUS_INFO,
	TOPIC_STATUS_ERROR,
	TOPIC_STATUS_CAN_FREQUENCIES,
	TOPIC_COMMAND,
	TOPIC_COMMAND_SEND,
	TOPIC_COMMAND_RESULT,
	TOPIC_FILE_TRANSACTION_ASK,
	TOPIC_FILE_TRANSACTION_ACK,
	TOPIC_FILE_TRANSACTION,
	TOPIC_FILE_TRANSACTION_BEGIN,
	TOPIC_FILE_TRANSACTION_END,
	TOPIC_FILE_TRANSACTION_CHUNK,
	TOPIC_ACTION,
	TOPIC_ACTION_TELEMETRY_CONFIG,
	TOPIC_ACTION_TELEMETRY_CONFIG_SET,
	TOPIC_ACTION_TELEMETRY_CONFIG_GET,
	TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT,
	TOPIC_ACTION_SESSION_CONFIG,
	TOPIC_ACTION_SESSION_CONFIG_SET,
	TOPIC_ACTION_SESSION_CONFIG_GET,
	TOPIC_ACTION_SESSION_CONFIG_CONTENT,
	TOPIC_ACTION_CAR_CONFIG,
	TOPIC_ACTION_CAR_CONFIG_SET,
	TOPIC_ACTION_CAR_CONFIG_GET,
	TOPIC_ACTION_CAR_CONFIG_CONTENT,
	TOPIC_ACTION_HANDCART_SETTINGS,
	TOPIC_ACTION_HANDCART_SETTINGS_SET,
	TOPIC_ACTION_HANDCART_SETTINGS_GET,
	TOPIC_ACTION_HANDCART_SETTINGS_CONTENT,
	TOPIC_ACTION_CONFIGS_SET,
	TOPIC_ACTION_CONFIGS_GET,
	TOPIC_ACTION_CONFIGS_CONTENT,
	TOPIC_ACTION_KILL,
	TOPIC_ACTION_START,
	TOPIC_ACTION_RESET,
	TOPIC_ACTION_STOP,
	TOPIC_ACTION_PRECHARGE,
	TOPIC_ACTION_BALANCE,
	TOPIC_ACTION_STOP_B,
	TOPIC_ACTION_CHARGE,
	TOPIC_ACTION_STOP_,
	TOPIC_ACTION_RAW,
	TOPIC_ACTION_RESET_LAP_COUNTER
};

typedef struct topic_t {
    char topic[TOPIC_MAX_STR_LEN];
    int qos;
    bool retained;
}topic_t;

void free_topics(topic_t* topic);
topic_t* get_subscribe_topics(enum ROLES_T role);
topic_t* get_publish_topics(enum ROLES_T role);

bool can_subscribe(enum ROLES_T role, enum TOPICS_T topic);
bool can_publish(enum ROLES_T role, enum TOPICS_T topic);

topic_t build_topic_vehicle_id(char* vehicleId);
topic_t build_topic_device_id(char* vehicleId, char* deviceId);
topic_t build_topic_data(char* vehicleId, char* deviceId);
topic_t build_topic_data_primary(char* vehicleId, char* deviceId);
topic_t build_topic_data_secondary(char* vehicleId, char* deviceId);
topic_t build_topic_data_inverter(char* vehicleId, char* deviceId);
topic_t build_topic_data_gps(char* vehicleId, char* deviceId);
topic_t build_topic_data_brusa(char* vehicleId, char* deviceId);
topic_t build_topic_status(char* vehicleId, char* deviceId);
topic_t build_topic_status_info(char* vehicleId, char* deviceId);
topic_t build_topic_status_error(char* vehicleId, char* deviceId);
topic_t build_topic_status_can_frequencies(char* vehicleId, char* deviceId);
topic_t build_topic_command(char* vehicleId, char* deviceId);
topic_t build_topic_command_send(char* vehicleId, char* deviceId);
topic_t build_topic_command_result(char* vehicleId, char* deviceId);
topic_t build_topic_file_transaction_ask(char* vehicleId, char* deviceId);
topic_t build_topic_file_transaction_ack(char* vehicleId, char* deviceId);
topic_t build_topic_file_transaction(char* vehicleId, char* deviceId, char* transactionId);
topic_t build_topic_file_transaction_begin(char* vehicleId, char* deviceId, char* transactionId);
topic_t build_topic_file_transaction_end(char* vehicleId, char* deviceId, char* transactionId);
topic_t build_topic_file_transaction_chunk(char* vehicleId, char* deviceId, char* transactionId);
topic_t build_topic_action(char* vehicleId, char* deviceId);
topic_t build_topic_action_telemetry_config(char* vehicleId, char* deviceId);
topic_t build_topic_action_telemetry_config_set(char* vehicleId, char* deviceId);
topic_t build_topic_action_telemetry_config_get(char* vehicleId, char* deviceId);
topic_t build_topic_action_telemetry_config_content(char* vehicleId, char* deviceId);
topic_t build_topic_action_session_config(char* vehicleId, char* deviceId);
topic_t build_topic_action_session_config_set(char* vehicleId, char* deviceId);
topic_t build_topic_action_session_config_get(char* vehicleId, char* deviceId);
topic_t build_topic_action_session_config_content(char* vehicleId, char* deviceId);
topic_t build_topic_action_car_config(char* vehicleId, char* deviceId);
topic_t build_topic_action_car_config_set(char* vehicleId, char* deviceId);
topic_t build_topic_action_car_config_get(char* vehicleId, char* deviceId);
topic_t build_topic_action_car_config_content(char* vehicleId, char* deviceId);
topic_t build_topic_action_handcart_settings(char* vehicleId, char* deviceId);
topic_t build_topic_action_handcart_settings_set(char* vehicleId, char* deviceId);
topic_t build_topic_action_handcart_settings_get(char* vehicleId, char* deviceId);
topic_t build_topic_action_handcart_settings_content(char* vehicleId, char* deviceId);
topic_t build_topic_action_configs_set(char* vehicleId, char* deviceId);
topic_t build_topic_action_configs_get(char* vehicleId, char* deviceId);
topic_t build_topic_action_configs_content(char* vehicleId, char* deviceId);
topic_t build_topic_action_kill(char* vehicleId, char* deviceId);
topic_t build_topic_action_start(char* vehicleId, char* deviceId);
topic_t build_topic_action_reset(char* vehicleId, char* deviceId);
topic_t build_topic_action_stop(char* vehicleId, char* deviceId);
topic_t build_topic_action_precharge(char* vehicleId, char* deviceId);
topic_t build_topic_action_balance(char* vehicleId, char* deviceId);
topic_t build_topic_action_stop_b(char* vehicleId, char* deviceId);
topic_t build_topic_action_charge(char* vehicleId, char* deviceId);
topic_t build_topic_action_stop_(char* vehicleId, char* deviceId);
topic_t build_topic_action_raw(char* vehicleId, char* deviceId);
topic_t build_topic_action_reset_lap_counter(char* vehicleId, char* deviceId);


#endif