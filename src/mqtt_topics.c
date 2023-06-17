#include "mqtt_topics.h"

bool can_subscribe(enum ROLES_T role, enum TOPICS_T topic){
    if (role == ROLE_0){
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_1) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_2) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_3) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_4) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_128) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_129) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    }

    return false;
}

bool can_publish(enum ROLES_T role, enum TOPICS_T topic){
    if (role == ROLE_0){
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_1) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_2) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_3) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_4) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_128) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    } else if (role == ROLE_129) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_ASK:
            case TOPIC_FILE_TRANSACTION_ACK:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_ACTION:
            case TOPIC_ACTION_TELEMETRY_CONFIG:
            case TOPIC_ACTION_TELEMETRY_CONFIG_SET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_GET:
            case TOPIC_ACTION_TELEMETRY_CONFIG_CONTENT:
            case TOPIC_ACTION_SESSION_CONFIG:
            case TOPIC_ACTION_SESSION_CONFIG_SET:
            case TOPIC_ACTION_SESSION_CONFIG_GET:
            case TOPIC_ACTION_SESSION_CONFIG_CONTENT:
            case TOPIC_ACTION_CAR_CONFIG:
            case TOPIC_ACTION_CAR_CONFIG_SET:
            case TOPIC_ACTION_CAR_CONFIG_GET:
            case TOPIC_ACTION_CAR_CONFIG_CONTENT:
            case TOPIC_ACTION_HANDCART_SETTINGS:
            case TOPIC_ACTION_HANDCART_SETTINGS_SET:
            case TOPIC_ACTION_HANDCART_SETTINGS_GET:
            case TOPIC_ACTION_HANDCART_SETTINGS_CONTENT:
            case TOPIC_ACTION_CONFIGS_SET:
            case TOPIC_ACTION_CONFIGS_GET:
            case TOPIC_ACTION_CONFIGS_CONTENT:
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_B:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
                return true;
            break;
        }
    }

    return false;
}

void free_topics(topic_t* topic){
    if(topic)
        free(topic);
}

topic_t* get_subscribe_topics(enum ROLES_T role){
    topic_t* ret = NULL;

    switch(role){
      case ROLE_0:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_1:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_2:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_3:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_4:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_128:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_129:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
    }

    return ret;
}

topic_t* get_publish_topics(enum ROLES_T role){
    topic_t* ret = NULL;

    switch(role){
      case ROLE_0:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_1:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_2:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_3:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_4:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_128:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
      case ROLE_129:
        ret = (topic_t*) malloc(sizeof(topic_t) * 52);
        
        ret[0] = build_topic_vehicle_id("+");
        ret[1] = build_topic_device_id("+", "+");
        ret[2] = build_topic_data("+", "+");
        ret[3] = build_topic_data_primary("+", "+");
        ret[4] = build_topic_data_secondary("+", "+");
        ret[5] = build_topic_data_inverter("+", "+");
        ret[6] = build_topic_data_gps("+", "+");
        ret[7] = build_topic_data_brusa("+", "+");
        ret[8] = build_topic_status("+", "+");
        ret[9] = build_topic_status_info("+", "+");
        ret[10] = build_topic_status_error("+", "+");
        ret[11] = build_topic_status_can_frequencies("+", "+");
        ret[12] = build_topic_command("+", "+");
        ret[13] = build_topic_command_send("+", "+");
        ret[14] = build_topic_command_result("+", "+");
        ret[15] = build_topic_file_transaction_ask("+", "+");
        ret[16] = build_topic_file_transaction_ack("+", "+");
        ret[17] = build_topic_file_transaction("+", "+", "+");
        ret[18] = build_topic_file_transaction_begin("+", "+", "+");
        ret[19] = build_topic_file_transaction_end("+", "+", "+");
        ret[20] = build_topic_file_transaction_chunk("+", "+", "+");
        ret[21] = build_topic_action("+", "+");
        ret[22] = build_topic_action_telemetry_config("+", "+");
        ret[23] = build_topic_action_telemetry_config_set("+", "+");
        ret[24] = build_topic_action_telemetry_config_get("+", "+");
        ret[25] = build_topic_action_telemetry_config_content("+", "+");
        ret[26] = build_topic_action_session_config("+", "+");
        ret[27] = build_topic_action_session_config_set("+", "+");
        ret[28] = build_topic_action_session_config_get("+", "+");
        ret[29] = build_topic_action_session_config_content("+", "+");
        ret[30] = build_topic_action_car_config("+", "+");
        ret[31] = build_topic_action_car_config_set("+", "+");
        ret[32] = build_topic_action_car_config_get("+", "+");
        ret[33] = build_topic_action_car_config_content("+", "+");
        ret[34] = build_topic_action_handcart_settings("+", "+");
        ret[35] = build_topic_action_handcart_settings_set("+", "+");
        ret[36] = build_topic_action_handcart_settings_get("+", "+");
        ret[37] = build_topic_action_handcart_settings_content("+", "+");
        ret[38] = build_topic_action_configs_set("+", "+");
        ret[39] = build_topic_action_configs_get("+", "+");
        ret[40] = build_topic_action_configs_content("+", "+");
        ret[41] = build_topic_action_kill("+", "+");
        ret[42] = build_topic_action_start("+", "+");
        ret[43] = build_topic_action_reset("+", "+");
        ret[44] = build_topic_action_stop("+", "+");
        ret[45] = build_topic_action_precharge("+", "+");
        ret[46] = build_topic_action_balance("+", "+");
        ret[47] = build_topic_action_stop_b("+", "+");
        ret[48] = build_topic_action_charge("+", "+");
        ret[49] = build_topic_action_stop_("+", "+");
        ret[50] = build_topic_action_raw("+", "+");
        ret[51] = build_topic_action_reset_lap_counter("+", "+");
        break;
    }

    return ret;
}


topic_t build_topic_vehicle_id(const char* vehicleId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s", vehicleId);
    return topic;
}

topic_t build_topic_device_id(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_data(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_data_primary(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data/primary", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_data_secondary(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data/secondary", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_data_inverter(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data/inverter", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_data_gps(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data/gps", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_data_brusa(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data/brusa", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_status(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 1,
		.retain = true
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/status", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_status_info(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 1,
		.retain = true
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/status/info", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_status_error(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 1,
		.retain = true
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/status/error", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_status_can_frequencies(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 1,
		.retain = true
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/status/canFrequencies", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_command(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/command", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_command_send(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/command/send", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_command_result(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/command/result", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_file_transaction_ask(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/ask", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_file_transaction_ack(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/ack", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_file_transaction(const char* vehicleId, const char* deviceId, const char* transactionId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/%s", vehicleId, deviceId, transactionId);
    return topic;
}

topic_t build_topic_file_transaction_begin(const char* vehicleId, const char* deviceId, const char* transactionId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/%s/begin", vehicleId, deviceId, transactionId);
    return topic;
}

topic_t build_topic_file_transaction_end(const char* vehicleId, const char* deviceId, const char* transactionId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/%s/end", vehicleId, deviceId, transactionId);
    return topic;
}

topic_t build_topic_file_transaction_chunk(const char* vehicleId, const char* deviceId, const char* transactionId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/%s/chunk", vehicleId, deviceId, transactionId);
    return topic;
}

topic_t build_topic_action(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_telemetry_config(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/telemetryConfig", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_telemetry_config_set(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/telemetryConfig/set", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_telemetry_config_get(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/telemetryConfig/get", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_telemetry_config_content(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/telemetryConfig/content", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_session_config(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/sessionConfig", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_session_config_set(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/sessionConfig/set", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_session_config_get(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/sessionConfig/get", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_session_config_content(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/sessionConfig/content", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_car_config(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/carConfig", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_car_config_set(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/carConfig/set", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_car_config_get(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/carConfig/get", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_car_config_content(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/carConfig/content", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_handcart_settings(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/handcartSettings", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_handcart_settings_set(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/handcartSettings/set", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_handcart_settings_get(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/handcartSettings/get", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_handcart_settings_content(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/handcartSettings/content", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_configs_set(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/+/set", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_configs_get(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/+/get", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_configs_content(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/+/content", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_kill(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/kill", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_start(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/start", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_reset(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/reset", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_stop(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/stop", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_precharge(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/precharge", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_balance(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/balance", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_stop_b(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/stopBalance", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_charge(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/charge", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_stop_(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/stopCharge", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_raw(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/raw", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_action_reset_lap_counter(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/resetLapcounter", vehicleId, deviceId);
    return topic;
}
