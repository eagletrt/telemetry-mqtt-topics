#ifndef MQTT_TOPICS_LIST_H
#define MQTT_TOPICS_LIST_H

#include "MQTTTopic.h"
#include "TopicString.h"


class VehicleIdTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	VehicleIdTopic(const VehicleIdTopic &) = delete;
	VehicleIdTopic &operator=(const VehicleIdTopic &) = delete;
	~VehicleIdTopic() override = default;

private:
	VehicleIdTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo") const;
};


class DeviceIdTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	DeviceIdTopic(const DeviceIdTopic &) = delete;
	DeviceIdTopic &operator=(const DeviceIdTopic &) = delete;
	~DeviceIdTopic() override = default;

private:
	DeviceIdTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class DataTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	DataTopic(const DataTopic &) = delete;
	DataTopic &operator=(const DataTopic &) = delete;
	~DataTopic() override = default;

private:
	DataTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class DataPrimaryTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	DataPrimaryTopic(const DataPrimaryTopic &) = delete;
	DataPrimaryTopic &operator=(const DataPrimaryTopic &) = delete;
	~DataPrimaryTopic() override = default;

private:
	DataPrimaryTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class DataSecondaryTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	DataSecondaryTopic(const DataSecondaryTopic &) = delete;
	DataSecondaryTopic &operator=(const DataSecondaryTopic &) = delete;
	~DataSecondaryTopic() override = default;

private:
	DataSecondaryTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class DataInverterTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	DataInverterTopic(const DataInverterTopic &) = delete;
	DataInverterTopic &operator=(const DataInverterTopic &) = delete;
	~DataInverterTopic() override = default;

private:
	DataInverterTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class DataGpsTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	DataGpsTopic(const DataGpsTopic &) = delete;
	DataGpsTopic &operator=(const DataGpsTopic &) = delete;
	~DataGpsTopic() override = default;

private:
	DataGpsTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class DataBrusaTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	DataBrusaTopic(const DataBrusaTopic &) = delete;
	DataBrusaTopic &operator=(const DataBrusaTopic &) = delete;
	~DataBrusaTopic() override = default;

private:
	DataBrusaTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class StatusTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	StatusTopic(const StatusTopic &) = delete;
	StatusTopic &operator=(const StatusTopic &) = delete;
	~StatusTopic() override = default;

private:
	StatusTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class StatusInfoTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	StatusInfoTopic(const StatusInfoTopic &) = delete;
	StatusInfoTopic &operator=(const StatusInfoTopic &) = delete;
	~StatusInfoTopic() override = default;

private:
	StatusInfoTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class StatusErrorTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	StatusErrorTopic(const StatusErrorTopic &) = delete;
	StatusErrorTopic &operator=(const StatusErrorTopic &) = delete;
	~StatusErrorTopic() override = default;

private:
	StatusErrorTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class StatusCanFrequenciesTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	StatusCanFrequenciesTopic(const StatusCanFrequenciesTopic &) = delete;
	StatusCanFrequenciesTopic &operator=(const StatusCanFrequenciesTopic &) = delete;
	~StatusCanFrequenciesTopic() override = default;

private:
	StatusCanFrequenciesTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class CommandTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	CommandTopic(const CommandTopic &) = delete;
	CommandTopic &operator=(const CommandTopic &) = delete;
	~CommandTopic() override = default;

private:
	CommandTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class CommandSendTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	CommandSendTopic(const CommandSendTopic &) = delete;
	CommandSendTopic &operator=(const CommandSendTopic &) = delete;
	~CommandSendTopic() override = default;

private:
	CommandSendTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class CommandResultTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	CommandResultTopic(const CommandResultTopic &) = delete;
	CommandResultTopic &operator=(const CommandResultTopic &) = delete;
	~CommandResultTopic() override = default;

private:
	CommandResultTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class FileTransactionAskTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	FileTransactionAskTopic(const FileTransactionAskTopic &) = delete;
	FileTransactionAskTopic &operator=(const FileTransactionAskTopic &) = delete;
	~FileTransactionAskTopic() override = default;

private:
	FileTransactionAskTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class FileTransactionAckTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	FileTransactionAckTopic(const FileTransactionAckTopic &) = delete;
	FileTransactionAckTopic &operator=(const FileTransactionAckTopic &) = delete;
	~FileTransactionAckTopic() override = default;

private:
	FileTransactionAckTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class FileTransactionTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	FileTransactionTopic(const FileTransactionTopic &) = delete;
	FileTransactionTopic &operator=(const FileTransactionTopic &) = delete;
	~FileTransactionTopic() override = default;

private:
	FileTransactionTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class FileTransactionBeginTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	FileTransactionBeginTopic(const FileTransactionBeginTopic &) = delete;
	FileTransactionBeginTopic &operator=(const FileTransactionBeginTopic &) = delete;
	~FileTransactionBeginTopic() override = default;

private:
	FileTransactionBeginTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class FileTransactionEndTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	FileTransactionEndTopic(const FileTransactionEndTopic &) = delete;
	FileTransactionEndTopic &operator=(const FileTransactionEndTopic &) = delete;
	~FileTransactionEndTopic() override = default;

private:
	FileTransactionEndTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class FileTransactionChunkTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	FileTransactionChunkTopic(const FileTransactionChunkTopic &) = delete;
	FileTransactionChunkTopic &operator=(const FileTransactionChunkTopic &) = delete;
	~FileTransactionChunkTopic() override = default;

private:
	FileTransactionChunkTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionTopic(const ActionTopic &) = delete;
	ActionTopic &operator=(const ActionTopic &) = delete;
	~ActionTopic() override = default;

private:
	ActionTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionTelemetryConfigTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionTelemetryConfigTopic(const ActionTelemetryConfigTopic &) = delete;
	ActionTelemetryConfigTopic &operator=(const ActionTelemetryConfigTopic &) = delete;
	~ActionTelemetryConfigTopic() override = default;

private:
	ActionTelemetryConfigTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionTelemetryConfigSetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionTelemetryConfigSetTopic(const ActionTelemetryConfigSetTopic &) = delete;
	ActionTelemetryConfigSetTopic &operator=(const ActionTelemetryConfigSetTopic &) = delete;
	~ActionTelemetryConfigSetTopic() override = default;

private:
	ActionTelemetryConfigSetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionTelemetryConfigGetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionTelemetryConfigGetTopic(const ActionTelemetryConfigGetTopic &) = delete;
	ActionTelemetryConfigGetTopic &operator=(const ActionTelemetryConfigGetTopic &) = delete;
	~ActionTelemetryConfigGetTopic() override = default;

private:
	ActionTelemetryConfigGetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionTelemetryConfigContentTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionTelemetryConfigContentTopic(const ActionTelemetryConfigContentTopic &) = delete;
	ActionTelemetryConfigContentTopic &operator=(const ActionTelemetryConfigContentTopic &) = delete;
	~ActionTelemetryConfigContentTopic() override = default;

private:
	ActionTelemetryConfigContentTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionSessionConfigTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionSessionConfigTopic(const ActionSessionConfigTopic &) = delete;
	ActionSessionConfigTopic &operator=(const ActionSessionConfigTopic &) = delete;
	~ActionSessionConfigTopic() override = default;

private:
	ActionSessionConfigTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionSessionConfigSetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionSessionConfigSetTopic(const ActionSessionConfigSetTopic &) = delete;
	ActionSessionConfigSetTopic &operator=(const ActionSessionConfigSetTopic &) = delete;
	~ActionSessionConfigSetTopic() override = default;

private:
	ActionSessionConfigSetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionSessionConfigGetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionSessionConfigGetTopic(const ActionSessionConfigGetTopic &) = delete;
	ActionSessionConfigGetTopic &operator=(const ActionSessionConfigGetTopic &) = delete;
	~ActionSessionConfigGetTopic() override = default;

private:
	ActionSessionConfigGetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionSessionConfigContentTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionSessionConfigContentTopic(const ActionSessionConfigContentTopic &) = delete;
	ActionSessionConfigContentTopic &operator=(const ActionSessionConfigContentTopic &) = delete;
	~ActionSessionConfigContentTopic() override = default;

private:
	ActionSessionConfigContentTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionCarConfigTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionCarConfigTopic(const ActionCarConfigTopic &) = delete;
	ActionCarConfigTopic &operator=(const ActionCarConfigTopic &) = delete;
	~ActionCarConfigTopic() override = default;

private:
	ActionCarConfigTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionCarConfigSetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionCarConfigSetTopic(const ActionCarConfigSetTopic &) = delete;
	ActionCarConfigSetTopic &operator=(const ActionCarConfigSetTopic &) = delete;
	~ActionCarConfigSetTopic() override = default;

private:
	ActionCarConfigSetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionCarConfigGetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionCarConfigGetTopic(const ActionCarConfigGetTopic &) = delete;
	ActionCarConfigGetTopic &operator=(const ActionCarConfigGetTopic &) = delete;
	~ActionCarConfigGetTopic() override = default;

private:
	ActionCarConfigGetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionCarConfigContentTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionCarConfigContentTopic(const ActionCarConfigContentTopic &) = delete;
	ActionCarConfigContentTopic &operator=(const ActionCarConfigContentTopic &) = delete;
	~ActionCarConfigContentTopic() override = default;

private:
	ActionCarConfigContentTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionConfigsSetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionConfigsSetTopic(const ActionConfigsSetTopic &) = delete;
	ActionConfigsSetTopic &operator=(const ActionConfigsSetTopic &) = delete;
	~ActionConfigsSetTopic() override = default;

private:
	ActionConfigsSetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionConfigsGetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionConfigsGetTopic(const ActionConfigsGetTopic &) = delete;
	ActionConfigsGetTopic &operator=(const ActionConfigsGetTopic &) = delete;
	~ActionConfigsGetTopic() override = default;

private:
	ActionConfigsGetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionConfigsContentTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionConfigsContentTopic(const ActionConfigsContentTopic &) = delete;
	ActionConfigsContentTopic &operator=(const ActionConfigsContentTopic &) = delete;
	~ActionConfigsContentTopic() override = default;

private:
	ActionConfigsContentTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionKillTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionKillTopic(const ActionKillTopic &) = delete;
	ActionKillTopic &operator=(const ActionKillTopic &) = delete;
	~ActionKillTopic() override = default;

private:
	ActionKillTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionStartTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionStartTopic(const ActionStartTopic &) = delete;
	ActionStartTopic &operator=(const ActionStartTopic &) = delete;
	~ActionStartTopic() override = default;

private:
	ActionStartTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionResetTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionResetTopic(const ActionResetTopic &) = delete;
	ActionResetTopic &operator=(const ActionResetTopic &) = delete;
	~ActionResetTopic() override = default;

private:
	ActionResetTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionStopTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionStopTopic(const ActionStopTopic &) = delete;
	ActionStopTopic &operator=(const ActionStopTopic &) = delete;
	~ActionStopTopic() override = default;

private:
	ActionStopTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionRawTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionRawTopic(const ActionRawTopic &) = delete;
	ActionRawTopic &operator=(const ActionRawTopic &) = delete;
	~ActionRawTopic() override = default;

private:
	ActionRawTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};


class ActionResetLapCounterTopic : public MQTTTopic
{
	friend class MQTTTopics;

public:
	ActionResetLapCounterTopic(const ActionResetLapCounterTopic &) = delete;
	ActionResetLapCounterTopic &operator=(const ActionResetLapCounterTopic &) = delete;
	~ActionResetLapCounterTopic() override = default;

private:
	ActionResetLapCounterTopic();

public:
	TopicString get(const std::string &deviceId = "telemetry", const std::string &vehicleId = "feniceEvo") const;
};



#endif
