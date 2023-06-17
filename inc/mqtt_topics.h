#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

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
    ROLE_129 = 129
}; 

enum TOPICS_T {
    TOPIC_VEHICLE_ID = 0,
    TOPIC_DEVICE_ID = 1,
    TOPIC_DATA = 2,
    TOPIC_DATA_PRIMARY = 3,
    TOPIC_DATA_SECONDARY = 4,
    TOPIC_DATA_INVERTER = 5,
    TOPIC_DATA_GPS = 6,
    TOPIC_DATA_BRUSA = 7,
    TOPIC_STATUS = 8,
    TOPIC_STATUS_INFO = 9,
    TOPIC_STATUS_ERROR = 10,
    TOPIC_STATUS_CAN_FREQUENCIES = 11,
    TOPIC_COMMAND = 12,
    TOPIC_COMMAND_SEND = 13,
    TOPIC_COMMAND_RESULT = 14,
    TOPIC_FILE_TRANSACTION_ASK = 15,
    TOPIC_FILE_TRANSACTION_ACK = 16,
    TOPIC_FILE_TRANSACTION = 17,
    TOPIC_FILE_TRANSACTION_BEGIN = 18,
    TOPIC_FILE_TRANSACTION_END = 19,
    TOPIC_FILE_TRANSACTION_CHUNK = 20,
    TOPIC_ACTION = 21,
    TOPIC_ACTION_TELEMETRY_CONFIG = 22,
    TOPIC_ACTION_TELEMETRY_CONFIG_SET = 23,
    TOPIC_ACTION_TELEMETRY_CONFIG_GET = 24,
    TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT = 25,
    TOPIC_ACTION_SESSION_CONFIG = 26,
    TOPIC_ACTION_SESSION_CONFIG_SET = 27,
    TOPIC_ACTION_SESSION_CONFIG_GET = 28,
    TOPIC_ACTION_SESSION_CONFIG_CONTENT = 29,
    TOPIC_ACTION_CAR_CONFIG = 30,
    TOPIC_ACTION_CAR_CONFIG_SET = 31,
    TOPIC_ACTION_CAR_CONFIG_GET = 32,
    TOPIC_ACTION_CAR_CONFIG_CONTENT = 33,
    TOPIC_ACTION_HANDCART_SETTINGS = 34,
    TOPIC_ACTION_HANDCART_SETTINGS_SET = 35,
    TOPIC_ACTION_HANDCART_SETTINGS_GET = 36,
    TOPIC_ACTION_HANDCART_SETTINGS_CONTENT = 37,
    TOPIC_ACTION_CONFIGS_SET = 38,
    TOPIC_ACTION_CONFIGS_GET = 39,
    TOPIC_ACTION_CONFIGS_CONTENT = 40,
    TOPIC_ACTION_KILL = 41,
    TOPIC_ACTION_START = 42,
    TOPIC_ACTION_RESET = 43,
    TOPIC_ACTION_STOP = 44,
    TOPIC_ACTION_PRECHARGE = 45,
    TOPIC_ACTION_BALANCE = 46,
    TOPIC_ACTION_STOP_B = 47,
    TOPIC_ACTION_CHARGE = 48,
    TOPIC_ACTION_STOP_ = 49,
    TOPIC_ACTION_RAW = 50,
    TOPIC_ACTION_RESET_LAP_COUNTER = 51,

    TOPICS_NUM = 52
};

typedef struct topic_t {
    char topic[TOPIC_MAX_STR_LEN];
    int qos;
    bool retain;
}topic_t;

void free_topics(topic_t* topic);
void get_subscribe_topics(topic_t** dest, size_t* dimension, const enum ROLES_T role);
void get_publish_topics(topic_t** dest, size_t* dimension, const enum ROLES_T role);

bool can_subscribe(const enum ROLES_T role, const enum TOPICS_T topic);
bool can_publish(const enum ROLES_T role, const enum TOPICS_T topic);

topic_t build_topic_vehicle_id(const char* vehicleId);
topic_t build_topic_device_id(const char* vehicleId, const char* deviceId);
topic_t build_topic_data(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_primary(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_secondary(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_inverter(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_gps(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_brusa(const char* vehicleId, const char* deviceId);
topic_t build_topic_status(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_info(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_error(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_can_frequencies(const char* vehicleId, const char* deviceId);
topic_t build_topic_command(const char* vehicleId, const char* deviceId);
topic_t build_topic_command_send(const char* vehicleId, const char* deviceId);
topic_t build_topic_command_result(const char* vehicleId, const char* deviceId);
topic_t build_topic_file_transaction_ask(const char* vehicleId, const char* deviceId);
topic_t build_topic_file_transaction_ack(const char* vehicleId, const char* deviceId);
topic_t build_topic_file_transaction(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_file_transaction_begin(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_file_transaction_end(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_file_transaction_chunk(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_action(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_telemetry_config(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_telemetry_config_set(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_telemetry_config_get(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_telemetry_config_content(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_session_config(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_session_config_set(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_session_config_get(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_session_config_content(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_car_config(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_car_config_set(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_car_config_get(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_car_config_content(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_handcart_settings(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_handcart_settings_set(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_handcart_settings_get(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_handcart_settings_content(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_configs_set(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_configs_get(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_configs_content(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_kill(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_start(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_reset(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_stop(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_precharge(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_balance(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_stop_b(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_charge(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_stop_(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_raw(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_reset_lap_counter(const char* vehicleId, const char* deviceId);


#ifdef __cplusplus
}
#endif

#endif