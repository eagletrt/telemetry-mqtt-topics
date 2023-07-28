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
    TOPIC_DATA_LAST_UPDATE = 3,
    TOPIC_DATA_PRIMARY = 4,
    TOPIC_DATA_SECONDARY = 5,
    TOPIC_DATA_BMS = 6,
    TOPIC_DATA_INVERTER = 7,
    TOPIC_DATA_GPS = 8,
    TOPIC_DATA_BRUSA = 9,
    TOPIC_STATUS = 10,
    TOPIC_STATUS_INFO = 11,
    TOPIC_STATUS_ERROR = 12,
    TOPIC_STATUS_ALERT = 13,
    TOPIC_STATUS_CAN_FREQUENCIES = 14,
    TOPIC_STATUS_LAP_COUNTER_STATUS = 15,
    TOPIC_STATUS_LAP_COUNTER_LAPS = 16,
    TOPIC_COMMAND = 17,
    TOPIC_COMMAND_SEND = 18,
    TOPIC_COMMAND_RESULT = 19,
    TOPIC_FILE_TRANSACTION_REQUEST = 20,
    TOPIC_FILE_TRANSACTION_RESPONSE = 21,
    TOPIC_FILE_TRANSACTION = 22,
    TOPIC_FILE_TRANSACTION_BEGIN = 23,
    TOPIC_FILE_TRANSACTION_END = 24,
    TOPIC_FILE_TRANSACTION_CHUNK = 25,
    TOPIC_FILE_TRANSACTION_CHUNK_ACK = 26,
    TOPIC_ACTION = 27,
    TOPIC_ACTION_TELEMETRY_CONFIG = 28,
    TOPIC_ACTION_TELEMETRY_CONFIG_SET = 29,
    TOPIC_ACTION_TELEMETRY_CONFIG_GET = 30,
    TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT = 31,
    TOPIC_ACTION_SESSION_CONFIG = 32,
    TOPIC_ACTION_SESSION_CONFIG_SET = 33,
    TOPIC_ACTION_SESSION_CONFIG_GET = 34,
    TOPIC_ACTION_SESSION_CONFIG_CONTENT = 35,
    TOPIC_ACTION_CAR_CONFIG = 36,
    TOPIC_ACTION_CAR_CONFIG_SET = 37,
    TOPIC_ACTION_CAR_CONFIG_GET = 38,
    TOPIC_ACTION_CAR_CONFIG_CONTENT = 39,
    TOPIC_ACTION_HANDCART_SETTINGS = 40,
    TOPIC_ACTION_HANDCART_SETTINGS_SET = 41,
    TOPIC_ACTION_HANDCART_SETTINGS_GET = 42,
    TOPIC_ACTION_HANDCART_SETTINGS_CONTENT = 43,
    TOPIC_ACTION_KILL = 44,
    TOPIC_ACTION_START = 45,
    TOPIC_ACTION_RESET = 46,
    TOPIC_ACTION_STOP = 47,
    TOPIC_ACTION_PRECHARGE = 48,
    TOPIC_ACTION_BALANCE = 49,
    TOPIC_ACTION_STOP_BALANCE = 50,
    TOPIC_ACTION_CHARGE = 51,
    TOPIC_ACTION_STOP_CHARGE = 52,
    TOPIC_ACTION_RAW = 53,
    TOPIC_ACTION_RESET_LAP_COUNTER = 54,
    TOPIC_ACTION_SET_LAP_COUNTER_STATUS = 55,

    TOPICS_NUM = 56
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
topic_t build_topic_data_last_update(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_primary(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_secondary(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_bms(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_inverter(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_gps(const char* vehicleId, const char* deviceId);
topic_t build_topic_data_brusa(const char* vehicleId, const char* deviceId);
topic_t build_topic_status(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_info(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_error(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_alert(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_can_frequencies(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_lap_counter_status(const char* vehicleId, const char* deviceId);
topic_t build_topic_status_lap_counter_laps(const char* vehicleId, const char* deviceId);
topic_t build_topic_command(const char* vehicleId, const char* deviceId);
topic_t build_topic_command_send(const char* vehicleId, const char* deviceId);
topic_t build_topic_command_result(const char* vehicleId, const char* deviceId);
topic_t build_topic_file_transaction_request(const char* vehicleId, const char* deviceId);
topic_t build_topic_file_transaction_response(const char* vehicleId, const char* deviceId);
topic_t build_topic_file_transaction(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_file_transaction_begin(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_file_transaction_end(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_file_transaction_chunk(const char* vehicleId, const char* deviceId, const char* transactionId);
topic_t build_topic_file_transaction_chunk_ack(const char* vehicleId, const char* deviceId, const char* transactionId);
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
topic_t build_topic_action_kill(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_start(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_reset(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_stop(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_precharge(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_balance(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_stop_balance(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_charge(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_stop_charge(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_raw(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_reset_lap_counter(const char* vehicleId, const char* deviceId);
topic_t build_topic_action_set_lap_counter_status(const char* vehicleId, const char* deviceId);


#ifdef __cplusplus
}
#endif

#endif