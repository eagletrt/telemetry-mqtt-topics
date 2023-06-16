#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include <stdlib.h>
#include <stdbool.h>

#ifndef TOPIC_MAX_STR_LEN
#define TOPIC_MAX_STR_LEN 128
#endif

enum ROLES_T
{
    ROLE_0 = 0,
	ROLE_1 = 1,
	ROLE_2 = 2,
	ROLE_3 = 3,
	ROLE_4 = 4,

	ROLE_128 = 128,
	ROLE_129 = 129,
}; 

enum TOPICS_T
{
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
	TOPIC_ACTION_CONFIGS_SET,
	TOPIC_ACTION_CONFIGS_GET,
	TOPIC_ACTION_CONFIGS_CONTENT,
	TOPIC_ACTION_KILL,
	TOPIC_ACTION_START,
	TOPIC_ACTION_RESET,
	TOPIC_ACTION_STOP,
	TOPIC_ACTION_RAW,
	TOPIC_ACTION_RESET_LAP_COUNTER
};

typedef struct topic_t {
    char topic[TOPIC_MAX_STR_LEN];
    int qos;
    bool retained;
}topic_t;


bool can_subscribe(enum ROLES_T role, enum TOPICS_T topic);
bool can_publish(enum ROLES_T role, enum TOPICS_T topic);


char** get_subscribe_topics(enum ROLES_T role);
char** get_publish_topics(enum ROLES_T role);


topic_t get_vehicle_id_topic(char* vehicleId);
topic_t get_device_id_topic(char* vehicleId, char* deviceId);
topic_t get_data_topic(char* vehicleId, char* deviceId);
topic_t get_data_primary_topic(char* vehicleId, char* deviceId);
topic_t get_data_secondary_topic(char* vehicleId, char* deviceId);
topic_t get_data_inverter_topic(char* vehicleId, char* deviceId);
topic_t get_data_gps_topic(char* vehicleId, char* deviceId);
topic_t get_data_brusa_topic(char* vehicleId, char* deviceId);
topic_t get_status_topic(char* vehicleId, char* deviceId);
topic_t get_status_info_topic(char* vehicleId, char* deviceId);
topic_t get_status_error_topic(char* vehicleId, char* deviceId);
topic_t get_status_can_frequencies_topic(char* vehicleId, char* deviceId);
topic_t get_command_topic(char* vehicleId, char* deviceId);
topic_t get_command_send_topic(char* vehicleId, char* deviceId);
topic_t get_command_result_topic(char* vehicleId, char* deviceId);
topic_t get_file_transaction_ask_topic(char* vehicleId, char* deviceId);
topic_t get_file_transaction_ack_topic(char* vehicleId, char* deviceId);
topic_t get_file_transaction_topic(char* vehicleId, char* deviceId, char* transactionId);
topic_t get_file_transaction_begin_topic(char* vehicleId, char* deviceId, char* transactionId);
topic_t get_file_transaction_end_topic(char* vehicleId, char* deviceId, char* transactionId);
topic_t get_file_transaction_chunk_topic(char* vehicleId, char* deviceId, char* transactionId);
topic_t get_action_topic(char* vehicleId, char* deviceId);
topic_t get_action_telemetry_config_topic(char* vehicleId, char* deviceId);
topic_t get_action_telemetry_config_set_topic(char* vehicleId, char* deviceId);
topic_t get_action_telemetry_config_get_topic(char* vehicleId, char* deviceId);
topic_t get_action_telemetry_config_content_topic(char* vehicleId, char* deviceId);
topic_t get_action_session_config_topic(char* vehicleId, char* deviceId);
topic_t get_action_session_config_set_topic(char* vehicleId, char* deviceId);
topic_t get_action_session_config_get_topic(char* vehicleId, char* deviceId);
topic_t get_action_session_config_content_topic(char* vehicleId, char* deviceId);
topic_t get_action_car_config_topic(char* vehicleId, char* deviceId);
topic_t get_action_car_config_set_topic(char* vehicleId, char* deviceId);
topic_t get_action_car_config_get_topic(char* vehicleId, char* deviceId);
topic_t get_action_car_config_content_topic(char* vehicleId, char* deviceId);
topic_t get_action_configs_set_topic(char* vehicleId, char* deviceId);
topic_t get_action_configs_get_topic(char* vehicleId, char* deviceId);
topic_t get_action_configs_content_topic(char* vehicleId, char* deviceId);
topic_t get_action_kill_topic(char* vehicleId, char* deviceId);
topic_t get_action_start_topic(char* vehicleId, char* deviceId);
topic_t get_action_reset_topic(char* vehicleId, char* deviceId);
topic_t get_action_stop_topic(char* vehicleId, char* deviceId);
topic_t get_action_raw_topic(char* vehicleId, char* deviceId);
topic_t get_action_reset_lap_counter_topic(char* vehicleId, char* deviceId);

#endif