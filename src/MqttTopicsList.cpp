#include "MqttTopicsList.h"


VehicleIdTopic::VehicleIdTopic()
	: MqttTopic("<vehicleId>", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DeviceIdTopic::DeviceIdTopic()
	: MqttTopic("<vehicleId>/<deviceId>", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataTopic::DataTopic()
	: MqttTopic("<vehicleId>/<deviceId>/data", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataPrimaryTopic::DataPrimaryTopic()
	: MqttTopic("<vehicleId>/<deviceId>/data/primary", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataSecondaryTopic::DataSecondaryTopic()
	: MqttTopic("<vehicleId>/<deviceId>/data/secondary", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataInverterTopic::DataInverterTopic()
	: MqttTopic("<vehicleId>/<deviceId>/data/inverter", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataGpsTopic::DataGpsTopic()
	: MqttTopic("<vehicleId>/<deviceId>/data/gps", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataBrusaTopic::DataBrusaTopic()
	: MqttTopic("<vehicleId>/<deviceId>/data/brusa", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

StatusTopic::StatusTopic()
	: MqttTopic("<vehicleId>/<deviceId>/status", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusInfoTopic::StatusInfoTopic()
	: MqttTopic("<vehicleId>/<deviceId>/status/info", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusErrorTopic::StatusErrorTopic()
	: MqttTopic("<vehicleId>/<deviceId>/status/error", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusCanFrequenciesTopic::StatusCanFrequenciesTopic()
	: MqttTopic("<vehicleId>/<deviceId>/status/canFrequencies", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

CommandTopic::CommandTopic()
	: MqttTopic("<vehicleId>/<deviceId>/command", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

CommandSendTopic::CommandSendTopic()
	: MqttTopic("<vehicleId>/<deviceId>/command/send", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

CommandResultTopic::CommandResultTopic()
	: MqttTopic("<vehicleId>/<deviceId>/command/result", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionAskTopic::FileTransactionAskTopic()
	: MqttTopic("<vehicleId>/<deviceId>/fileTransaction/ask", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionAckTopic::FileTransactionAckTopic()
	: MqttTopic("<vehicleId>/<deviceId>/fileTransaction/ack", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionTopic::FileTransactionTopic()
	: MqttTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionBeginTopic::FileTransactionBeginTopic()
	: MqttTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionEndTopic::FileTransactionEndTopic()
	: MqttTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/end", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionChunkTopic::FileTransactionChunkTopic()
	: MqttTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTopic::ActionTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigTopic::ActionTelemetryConfigTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/telemetryConfig", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigSetTopic::ActionTelemetryConfigSetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/telemetryConfig/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigGetTopic::ActionTelemetryConfigGetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/telemetryConfig/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigContentTopic::ActionTelemetryConfigContentTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/telemetryConfig/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigTopic::ActionSessionConfigTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/sessionConfig", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigSetTopic::ActionSessionConfigSetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/sessionConfig/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigGetTopic::ActionSessionConfigGetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/sessionConfig/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigContentTopic::ActionSessionConfigContentTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/sessionConfig/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigTopic::ActionCarConfigTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/carConfig", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigSetTopic::ActionCarConfigSetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/carConfig/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigGetTopic::ActionCarConfigGetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/carConfig/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigContentTopic::ActionCarConfigContentTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/carConfig/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsSetTopic::ActionConfigsSetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/+/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsGetTopic::ActionConfigsGetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/+/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsContentTopic::ActionConfigsContentTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/+/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionKillTopic::ActionKillTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/kill", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStartTopic::ActionStartTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/start", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionResetTopic::ActionResetTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/reset", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStopTopic::ActionStopTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/stop", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionRawTopic::ActionRawTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/raw", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionResetLapCounterTopic::ActionResetLapCounterTopic()
	: MqttTopic("<vehicleId>/<deviceId>/action/resetLapcounter", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}


TopicString VehicleIdTopic::get(const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);

	return str;
}

TopicString DeviceIdTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataPrimaryTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataSecondaryTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataInverterTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataGpsTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString DataBrusaTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusInfoTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusErrorTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString StatusCanFrequenciesTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString CommandTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString CommandSendTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString CommandResultTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString FileTransactionAskTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString FileTransactionAckTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString FileTransactionTopic::get(const std::string &transactionId, const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString FileTransactionBeginTopic::get(const std::string &transactionId, const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString FileTransactionEndTopic::get(const std::string &transactionId, const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString FileTransactionChunkTopic::get(const std::string &transactionId, const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);
	str.replace(str.find("<transactionId>"), 15, transactionId);

	return str;
}

TopicString ActionTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigSetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigGetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionTelemetryConfigContentTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigSetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigGetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionSessionConfigContentTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigSetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigGetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionCarConfigContentTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionConfigsSetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionConfigsGetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionConfigsContentTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionKillTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionStartTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionResetTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionStopTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionRawTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionResetLapCounterTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}


