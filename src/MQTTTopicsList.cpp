#include "MQTTTopicsList.h"


VehicleIdTopic::VehicleIdTopic()
	: MQTTTopic("<vehicleId>", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DeviceIdTopic::DeviceIdTopic()
	: MQTTTopic("<vehicleId>/<deviceId>", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataTopic::DataTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/data", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataPrimaryTopic::DataPrimaryTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/data/primary", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataSecondaryTopic::DataSecondaryTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/data/secondary", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataInverterTopic::DataInverterTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/data/inverter", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataGpsTopic::DataGpsTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/data/gps", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

DataBrusaTopic::DataBrusaTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/data/brusa", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

StatusTopic::StatusTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/status", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusInfoTopic::StatusInfoTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/status/info", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusErrorTopic::StatusErrorTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/status/error", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

StatusCanFrequenciesTopic::StatusCanFrequenciesTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/status/canFrequencies", 1, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, true) {}

CommandTopic::CommandTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/command", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

CommandSendTopic::CommandSendTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/command/send", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

CommandResultTopic::CommandResultTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/command/result", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionAskTopic::FileTransactionAskTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/fileTransaction/ask", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionAckTopic::FileTransactionAckTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/fileTransaction/ack", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionTopic::FileTransactionTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionBeginTopic::FileTransactionBeginTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionEndTopic::FileTransactionEndTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/end", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

FileTransactionChunkTopic::FileTransactionChunkTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTopic::ActionTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigTopic::ActionTelemetryConfigTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/telemetryConfig", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigSetTopic::ActionTelemetryConfigSetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/telemetryConfig/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigGetTopic::ActionTelemetryConfigGetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/telemetryConfig/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionTelemetryConfigContentTopic::ActionTelemetryConfigContentTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/telemetryConfig/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigTopic::ActionSessionConfigTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/sessionConfig", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigSetTopic::ActionSessionConfigSetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/sessionConfig/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigGetTopic::ActionSessionConfigGetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/sessionConfig/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionSessionConfigContentTopic::ActionSessionConfigContentTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/sessionConfig/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigTopic::ActionCarConfigTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/carConfig", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigSetTopic::ActionCarConfigSetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/carConfig/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigGetTopic::ActionCarConfigGetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/carConfig/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionCarConfigContentTopic::ActionCarConfigContentTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/carConfig/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsSetTopic::ActionConfigsSetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/+/set", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsGetTopic::ActionConfigsGetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/+/get", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionConfigsContentTopic::ActionConfigsContentTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/+/content", 0, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionKillTopic::ActionKillTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/kill", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStartTopic::ActionStartTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/start", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionResetTopic::ActionResetTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/reset", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStopTopic::ActionStopTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/stop", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionPrechargeTopic::ActionPrechargeTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/precharge", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionBalanceTopic::ActionBalanceTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/balance", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStopBalance::ActionStopBalance()
	: MQTTTopic("<vehicleId>/<deviceId>/action/stopBalance", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionChargeTopic::ActionChargeTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/charge", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionStopCharge::ActionStopCharge()
	: MQTTTopic("<vehicleId>/<deviceId>/action/stopCharge", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionRawTopic::ActionRawTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/raw", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}

ActionResetLapCounterTopic::ActionResetLapCounterTopic()
	: MQTTTopic("<vehicleId>/<deviceId>/action/resetLapcounter", 2, {0, 1, 2, 3, 4, 128, 129}, {0, 1, 2, 3, 4, 128, 129}, false) {}


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

TopicString ActionPrechargeTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionBalanceTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionStopBalance::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionChargeTopic::get(const std::string &deviceId, const std::string &vehicleId) const {
	std::string str(topic);

	str.replace(str.find("<vehicleId>"), 11, vehicleId);
	str.replace(str.find("<deviceId>"), 10, deviceId);

	return str;
}

TopicString ActionStopCharge::get(const std::string &deviceId, const std::string &vehicleId) const {
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


