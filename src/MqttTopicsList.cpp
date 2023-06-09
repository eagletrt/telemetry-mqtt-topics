#include "MqttTopicsList.h"


VehicleIdTopic::VehicleIdTopic()
	: MqttTopic("<vehicle_id>", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

VehicleIdDeviceIdTopic::VehicleIdDeviceIdTopic()
	: MqttTopic("<vehicle_id>/<device_id>", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataTopic::DataTopic()
	: MqttTopic("<vehicle_id>/<device_id>/data", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataPrimaryTopic::DataPrimaryTopic()
	: MqttTopic("<vehicle_id>/<device_id>/data/primary", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataSecondaryTopic::DataSecondaryTopic()
	: MqttTopic("<vehicle_id>/<device_id>/data/secondary", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataInverterTopic::DataInverterTopic()
	: MqttTopic("<vehicle_id>/<device_id>/data/inverter", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataGpsTopic::DataGpsTopic()
	: MqttTopic("<vehicle_id>/<device_id>/data/gps", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataBrusaTopic::DataBrusaTopic()
	: MqttTopic("<vehicle_id>/<device_id>/data/brusa", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

StatusTopic::StatusTopic()
	: MqttTopic("<vehicle_id>/<device_id>/status", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusInfoTopic::StatusInfoTopic()
	: MqttTopic("<vehicle_id>/<device_id>/status/info", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusErrorTopic::StatusErrorTopic()
	: MqttTopic("<vehicle_id>/<device_id>/status/error", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusCanFrequenciesTopic::StatusCanFrequenciesTopic()
	: MqttTopic("<vehicle_id>/<device_id>/status/can_frequencies", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

CommandTopic::CommandTopic()
	: MqttTopic("<vehicle_id>/<device_id>/command", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

CommandSendTopic::CommandSendTopic()
	: MqttTopic("<vehicle_id>/<device_id>/command/send", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

CommandResultTopic::CommandResultTopic()
	: MqttTopic("<vehicle_id>/<device_id>/command/result", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionAskTopic::FileTransactionAskTopic()
	: MqttTopic("<vehicle_id>/<device_id>/file_transaction/ask", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionAckTopic::FileTransactionAckTopic()
	: MqttTopic("<vehicle_id>/<device_id>/file_transaction/ack", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionTopic::FileTransactionTopic()
	: MqttTopic("<vehicle_id>/<device_id>/file_transaction/<transaction_id>", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionBeginTopic::FileTransactionBeginTopic()
	: MqttTopic("<vehicle_id>/<device_id>/file_transaction/<transaction_id>/begin", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionEndTopic::FileTransactionEndTopic()
	: MqttTopic("<vehicle_id>/<device_id>/file_transaction/<transaction_id>/end", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionChunkTopic::FileTransactionChunkTopic()
	: MqttTopic("<vehicle_id>/<device_id>/file_transaction/<transaction_id>/chunk", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTopic::ActionTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigTopic::ActionTelemetryConfigTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/telemetry_config", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigSetTopic::ActionTelemetryConfigSetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/telemetry_config/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigGetTopic::ActionTelemetryConfigGetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/telemetry_config/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigContentTopic::ActionTelemetryConfigContentTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/telemetry_config/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigTopic::ActionSessionConfigTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/session_config", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigSetTopic::ActionSessionConfigSetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/session_config/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigGetTopic::ActionSessionConfigGetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/session_config/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigContentTopic::ActionSessionConfigContentTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/session_config/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigTopic::ActionCarConfigTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/car_config", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigSetTopic::ActionCarConfigSetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/car_config/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigGetTopic::ActionCarConfigGetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/car_config/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigContentTopic::ActionCarConfigContentTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/car_config/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsSetTopic::ActionConfigsSetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/+/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsGetTopic::ActionConfigsGetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/+/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsContentTopic::ActionConfigsContentTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/+/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionKillTopic::ActionKillTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/kill", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStartTopic::ActionStartTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/start", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionResetTopic::ActionResetTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/reset", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStopTopic::ActionStopTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/stop", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionRawTopic::ActionRawTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/raw", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionResetLapCounterTopic::ActionResetLapCounterTopic()
	: MqttTopic("<vehicle_id>/<device_id>/action/reset_lapcounter", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}


TopicString VehicleIdTopic::get(const std::string &vehicleId = "feniceEvo") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);

	return str;
}

TopicString VehicleIdDeviceIdTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataPrimaryTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataSecondaryTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataInverterTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataGpsTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataBrusaTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusInfoTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusErrorTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusCanFrequenciesTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString CommandTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString CommandSendTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString CommandResultTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString FileTransactionAskTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString FileTransactionAckTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString FileTransactionTopic::get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString FileTransactionBeginTopic::get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString FileTransactionEndTopic::get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString FileTransactionChunkTopic::get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString ActionTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigSetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigGetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigContentTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigSetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigGetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigContentTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigSetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigGetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigContentTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionConfigsSetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionConfigsGetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionConfigsContentTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionKillTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionStartTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionResetTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionStopTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionRawTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionResetLapCounterTopic::get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}


