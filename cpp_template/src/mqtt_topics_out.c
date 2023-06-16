#include "mqtt_topics_out.h"

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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
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
			case TOPIC_ACTION_CONFIGS_SET:
			case TOPIC_ACTION_CONFIGS_GET:
			case TOPIC_ACTION_CONFIGS_CONTENT:
			case TOPIC_ACTION_KILL:
			case TOPIC_ACTION_START:
			case TOPIC_ACTION_RESET:
			case TOPIC_ACTION_STOP:
			case TOPIC_ACTION_RAW:
			case TOPIC_ACTION_RESET_LAP_COUNTER:
				return true;
			break;
		}
	}

    return false;
}


char** get_subscribe_topics(enum ROLES_T role) {
	// I DUNNO, FIGURE IT OUT :3, (C++ >>> C)
}

char** get_publish_topics(enum ROLES_T role) {
	// I DUNNO, FIGURE IT OUT :3, (C++ >>> C)
}


topic_t get_status_info_topic(char* vehicleId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s", vehicleId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 1,
		.retained = true
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId, char* transactionId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s/%s", vehicleId, deviceId, transactionId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 0,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}

topic_t get_status_info_topic(char* vehicleId, char* deviceId) {
	topic_t topic = {
		.qos = 2,
		.retained = false
	};
	snprintf(topic.topic, TOPIC_MAX_STR_LEN, "%s/%s", vehicleId, deviceId);

	return topic;
}