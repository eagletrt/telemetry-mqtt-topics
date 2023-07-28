#include "mqtt_topics.h"

bool can_subscribe(const enum ROLES_T role, const enum TOPICS_T topic){
    if (role == ROLE_0){
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_1) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_2) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_3) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_4) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_128) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_129) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    }

    return false;
}

bool can_publish(const enum ROLES_T role, const enum TOPICS_T topic){
    if (role == ROLE_0){
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_1) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_2) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_3) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_4) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_128) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    } else if (role == ROLE_129) {
        switch(topic) {
            case TOPIC_VEHICLE_ID:
            case TOPIC_DEVICE_ID:
            case TOPIC_DATA:
            case TOPIC_DATA_LAST_UPDATE:
            case TOPIC_DATA_PRIMARY:
            case TOPIC_DATA_SECONDARY:
            case TOPIC_DATA_BMS:
            case TOPIC_DATA_INVERTER:
            case TOPIC_DATA_GPS:
            case TOPIC_DATA_BRUSA:
            case TOPIC_STATUS:
            case TOPIC_STATUS_INFO:
            case TOPIC_STATUS_ERROR:
            case TOPIC_STATUS_ALERT:
            case TOPIC_STATUS_CAN_FREQUENCIES:
            case TOPIC_STATUS_LAP_COUNTER_STATUS:
            case TOPIC_STATUS_LAP_COUNTER_LAPS:
            case TOPIC_COMMAND:
            case TOPIC_COMMAND_SEND:
            case TOPIC_COMMAND_RESULT:
            case TOPIC_FILE_TRANSACTION_REQUEST:
            case TOPIC_FILE_TRANSACTION_RESPONSE:
            case TOPIC_FILE_TRANSACTION:
            case TOPIC_FILE_TRANSACTION_BEGIN:
            case TOPIC_FILE_TRANSACTION_END:
            case TOPIC_FILE_TRANSACTION_CHUNK:
            case TOPIC_FILE_TRANSACTION_CHUNK_ACK:
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
            case TOPIC_ACTION_KILL:
            case TOPIC_ACTION_START:
            case TOPIC_ACTION_RESET:
            case TOPIC_ACTION_STOP:
            case TOPIC_ACTION_PRECHARGE:
            case TOPIC_ACTION_BALANCE:
            case TOPIC_ACTION_STOP_BALANCE:
            case TOPIC_ACTION_CHARGE:
            case TOPIC_ACTION_STOP_CHARGE:
            case TOPIC_ACTION_RAW:
            case TOPIC_ACTION_RESET_LAP_COUNTER:
            case TOPIC_ACTION_SET_LAP_COUNTER_STATUS:
                return true;
            break;
            default:
                break;
        }
    }

    return false;
}

void free_topics(topic_t* topic){
    if(topic)
        free(topic);
}

void get_subscribe_topics(topic_t** dest, size_t* size, const enum ROLES_T role){
    switch(role){
      case ROLE_0:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_1:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_2:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_3:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_4:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_128:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_129:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
        default:
            break;
    }
}

void get_publish_topics(topic_t** dest, size_t* size, const enum ROLES_T role){
    switch(role){
      case ROLE_0:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_1:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_2:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_3:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_4:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_128:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
      case ROLE_129:
        *size = 56;
        *dest = (topic_t*) malloc(sizeof(topic_t) * 56);
        
        (*dest)[0] = build_topic_vehicle_id("+");
        (*dest)[1] = build_topic_device_id("+", "+");
        (*dest)[2] = build_topic_data("+", "+");
        (*dest)[3] = build_topic_data_last_update("+", "+");
        (*dest)[4] = build_topic_data_primary("+", "+");
        (*dest)[5] = build_topic_data_secondary("+", "+");
        (*dest)[6] = build_topic_data_bms("+", "+");
        (*dest)[7] = build_topic_data_inverter("+", "+");
        (*dest)[8] = build_topic_data_gps("+", "+");
        (*dest)[9] = build_topic_data_brusa("+", "+");
        (*dest)[10] = build_topic_status("+", "+");
        (*dest)[11] = build_topic_status_info("+", "+");
        (*dest)[12] = build_topic_status_error("+", "+");
        (*dest)[13] = build_topic_status_alert("+", "+");
        (*dest)[14] = build_topic_status_can_frequencies("+", "+");
        (*dest)[15] = build_topic_status_lap_counter_status("+", "+");
        (*dest)[16] = build_topic_status_lap_counter_laps("+", "+");
        (*dest)[17] = build_topic_command("+", "+");
        (*dest)[18] = build_topic_command_send("+", "+");
        (*dest)[19] = build_topic_command_result("+", "+");
        (*dest)[20] = build_topic_file_transaction_request("+", "+");
        (*dest)[21] = build_topic_file_transaction_response("+", "+");
        (*dest)[22] = build_topic_file_transaction("+", "+", "+");
        (*dest)[23] = build_topic_file_transaction_begin("+", "+", "+");
        (*dest)[24] = build_topic_file_transaction_end("+", "+", "+");
        (*dest)[25] = build_topic_file_transaction_chunk("+", "+", "+");
        (*dest)[26] = build_topic_file_transaction_chunk_ack("+", "+", "+");
        (*dest)[27] = build_topic_action("+", "+");
        (*dest)[28] = build_topic_action_telemetry_config("+", "+");
        (*dest)[29] = build_topic_action_telemetry_config_set("+", "+");
        (*dest)[30] = build_topic_action_telemetry_config_get("+", "+");
        (*dest)[31] = build_topic_action_telemetry_config_content("+", "+");
        (*dest)[32] = build_topic_action_session_config("+", "+");
        (*dest)[33] = build_topic_action_session_config_set("+", "+");
        (*dest)[34] = build_topic_action_session_config_get("+", "+");
        (*dest)[35] = build_topic_action_session_config_content("+", "+");
        (*dest)[36] = build_topic_action_car_config("+", "+");
        (*dest)[37] = build_topic_action_car_config_set("+", "+");
        (*dest)[38] = build_topic_action_car_config_get("+", "+");
        (*dest)[39] = build_topic_action_car_config_content("+", "+");
        (*dest)[40] = build_topic_action_handcart_settings("+", "+");
        (*dest)[41] = build_topic_action_handcart_settings_set("+", "+");
        (*dest)[42] = build_topic_action_handcart_settings_get("+", "+");
        (*dest)[43] = build_topic_action_handcart_settings_content("+", "+");
        (*dest)[44] = build_topic_action_kill("+", "+");
        (*dest)[45] = build_topic_action_start("+", "+");
        (*dest)[46] = build_topic_action_reset("+", "+");
        (*dest)[47] = build_topic_action_stop("+", "+");
        (*dest)[48] = build_topic_action_precharge("+", "+");
        (*dest)[49] = build_topic_action_balance("+", "+");
        (*dest)[50] = build_topic_action_stop_balance("+", "+");
        (*dest)[51] = build_topic_action_charge("+", "+");
        (*dest)[52] = build_topic_action_stop_charge("+", "+");
        (*dest)[53] = build_topic_action_raw("+", "+");
        (*dest)[54] = build_topic_action_reset_lap_counter("+", "+");
        (*dest)[55] = build_topic_action_set_lap_counter_status("+", "+");
        break;
        default:
            break;
    }
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

topic_t build_topic_data_last_update(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data/last_update", vehicleId, deviceId);
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

topic_t build_topic_data_bms(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 0,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/data/bms", vehicleId, deviceId);
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

topic_t build_topic_status_alert(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 1,
		.retain = true
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/status/alert", vehicleId, deviceId);
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

topic_t build_topic_status_lap_counter_status(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 1,
		.retain = true
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/status/lapCounterStatus", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_status_lap_counter_laps(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 1,
		.retain = true
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/status/lapCounterLaps", vehicleId, deviceId);
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

topic_t build_topic_file_transaction_request(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/request", vehicleId, deviceId);
    return topic;
}

topic_t build_topic_file_transaction_response(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/response", vehicleId, deviceId);
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

topic_t build_topic_file_transaction_chunk_ack(const char* vehicleId, const char* deviceId, const char* transactionId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/fileTransaction/%s/chunk_ack", vehicleId, deviceId, transactionId);
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

topic_t build_topic_action_stop_balance(const char* vehicleId, const char* deviceId) {
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

topic_t build_topic_action_stop_charge(const char* vehicleId, const char* deviceId) {
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

topic_t build_topic_action_set_lap_counter_status(const char* vehicleId, const char* deviceId) {
    topic_t topic = {
		.qos = 2,
		.retain = false
	};
    snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/action/setLapcounterStatus", vehicleId, deviceId);
    return topic;
}
