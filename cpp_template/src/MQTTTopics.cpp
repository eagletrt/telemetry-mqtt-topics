#include "MQTTTopics.h"

bool canSubscribe(MQTTRoles role, MQTTTopics topic){

    if (role == MQTTRoles::ROLE_0){
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_1) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_2) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_3) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_4) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_128) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_129) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	}

    return false;
}

bool canPublish(MQTTRoles role, MQTTTopics topic){

    if (role == MQTTRoles::ROLE_0){
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_1) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_2) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_3) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_4) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_128) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	} else if (role == MQTTRoles::ROLE_129) {
		switch(topic) {
			case MQTTTopics::VEHICLE_ID:
			case MQTTTopics::DEVICE_ID:
			case MQTTTopics::DATA:
			case MQTTTopics::DATA_PRIMARY:
			case MQTTTopics::DATA_SECONDARY:
			case MQTTTopics::DATA_INVERTER:
			case MQTTTopics::DATA_GPS:
			case MQTTTopics::DATA_BRUSA:
			case MQTTTopics::STATUS:
			case MQTTTopics::STATUS_INFO:
			case MQTTTopics::STATUS_ERROR:
			case MQTTTopics::STATUS_CAN_FREQUENCIES:
			case MQTTTopics::COMMAND:
			case MQTTTopics::COMMAND_SEND:
			case MQTTTopics::COMMAND_RESULT:
			case MQTTTopics::FILE_TRANSACTION_ASK:
			case MQTTTopics::FILE_TRANSACTION_ACK:
			case MQTTTopics::FILE_TRANSACTION:
			case MQTTTopics::FILE_TRANSACTION_BEGIN:
			case MQTTTopics::FILE_TRANSACTION_END:
			case MQTTTopics::FILE_TRANSACTION_CHUNK:
			case MQTTTopics::ACTION:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_SET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_GET:
			case MQTTTopics::ACTION_TELEMETRY_CONFIG_CONTENT:
			case MQTTTopics::ACTION_SESSION_CONFIG:
			case MQTTTopics::ACTION_SESSION_CONFIG_SET:
			case MQTTTopics::ACTION_SESSION_CONFIG_GET:
			case MQTTTopics::ACTION_SESSION_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CAR_CONFIG:
			case MQTTTopics::ACTION_CAR_CONFIG_SET:
			case MQTTTopics::ACTION_CAR_CONFIG_GET:
			case MQTTTopics::ACTION_CAR_CONFIG_CONTENT:
			case MQTTTopics::ACTION_CONFIGS_SET:
			case MQTTTopics::ACTION_CONFIGS_GET:
			case MQTTTopics::ACTION_CONFIGS_CONTENT:
			case MQTTTopics::ACTION_KILL:
			case MQTTTopics::ACTION_START:
			case MQTTTopics::ACTION_RESET:
			case MQTTTopics::ACTION_STOP:
			case MQTTTopics::ACTION_RAW:
			case MQTTTopics::ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	}

    return false;
}

MQTTTopic build_status_info_topic(char* vehicleId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s", vehicleId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

MQTTTopic build_status_info_topic(char* vehicleId, char* deviceId) {
	MQTTTopic topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, MQTTTopics::MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}