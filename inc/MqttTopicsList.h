#ifndef MQTT_TOPICS_LIST_H
#define MQTT_TOPICS_LIST_H

#include "MqttTopic.h"
#include "TopicString.h"


class VehicleIdTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	VehicleIdTopic(const VehicleIdTopic &) = delete;
	VehicleIdTopic &operator=(const VehicleIdTopic &) = delete;
	~VehicleIdTopic() override = default;

private:
	VehicleIdTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo") const;
};


class VehicleIdDeviceIdTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	VehicleIdDeviceIdTopic(const VehicleIdDeviceIdTopic &) = delete;
	VehicleIdDeviceIdTopic &operator=(const VehicleIdDeviceIdTopic &) = delete;
	~VehicleIdDeviceIdTopic() override = default;

private:
	VehicleIdDeviceIdTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class DataTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	DataTopic(const DataTopic &) = delete;
	DataTopic &operator=(const DataTopic &) = delete;
	~DataTopic() override = default;

private:
	DataTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class DataPrimaryTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	DataPrimaryTopic(const DataPrimaryTopic &) = delete;
	DataPrimaryTopic &operator=(const DataPrimaryTopic &) = delete;
	~DataPrimaryTopic() override = default;

private:
	DataPrimaryTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class DataSecondaryTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	DataSecondaryTopic(const DataSecondaryTopic &) = delete;
	DataSecondaryTopic &operator=(const DataSecondaryTopic &) = delete;
	~DataSecondaryTopic() override = default;

private:
	DataSecondaryTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class DataInverterTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	DataInverterTopic(const DataInverterTopic &) = delete;
	DataInverterTopic &operator=(const DataInverterTopic &) = delete;
	~DataInverterTopic() override = default;

private:
	DataInverterTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class DataGpsTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	DataGpsTopic(const DataGpsTopic &) = delete;
	DataGpsTopic &operator=(const DataGpsTopic &) = delete;
	~DataGpsTopic() override = default;

private:
	DataGpsTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class DataBrusaTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	DataBrusaTopic(const DataBrusaTopic &) = delete;
	DataBrusaTopic &operator=(const DataBrusaTopic &) = delete;
	~DataBrusaTopic() override = default;

private:
	DataBrusaTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class StatusTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	StatusTopic(const StatusTopic &) = delete;
	StatusTopic &operator=(const StatusTopic &) = delete;
	~StatusTopic() override = default;

private:
	StatusTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class StatusInfoTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	StatusInfoTopic(const StatusInfoTopic &) = delete;
	StatusInfoTopic &operator=(const StatusInfoTopic &) = delete;
	~StatusInfoTopic() override = default;

private:
	StatusInfoTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class StatusErrorTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	StatusErrorTopic(const StatusErrorTopic &) = delete;
	StatusErrorTopic &operator=(const StatusErrorTopic &) = delete;
	~StatusErrorTopic() override = default;

private:
	StatusErrorTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class StatusCanFrequenciesTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	StatusCanFrequenciesTopic(const StatusCanFrequenciesTopic &) = delete;
	StatusCanFrequenciesTopic &operator=(const StatusCanFrequenciesTopic &) = delete;
	~StatusCanFrequenciesTopic() override = default;

private:
	StatusCanFrequenciesTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class CommandTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	CommandTopic(const CommandTopic &) = delete;
	CommandTopic &operator=(const CommandTopic &) = delete;
	~CommandTopic() override = default;

private:
	CommandTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class CommandSendTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	CommandSendTopic(const CommandSendTopic &) = delete;
	CommandSendTopic &operator=(const CommandSendTopic &) = delete;
	~CommandSendTopic() override = default;

private:
	CommandSendTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class CommandResultTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	CommandResultTopic(const CommandResultTopic &) = delete;
	CommandResultTopic &operator=(const CommandResultTopic &) = delete;
	~CommandResultTopic() override = default;

private:
	CommandResultTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class FileTransactionAskTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	FileTransactionAskTopic(const FileTransactionAskTopic &) = delete;
	FileTransactionAskTopic &operator=(const FileTransactionAskTopic &) = delete;
	~FileTransactionAskTopic() override = default;

private:
	FileTransactionAskTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class FileTransactionAckTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	FileTransactionAckTopic(const FileTransactionAckTopic &) = delete;
	FileTransactionAckTopic &operator=(const FileTransactionAckTopic &) = delete;
	~FileTransactionAckTopic() override = default;

private:
	FileTransactionAckTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class FileTransactionTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	FileTransactionTopic(const FileTransactionTopic &) = delete;
	FileTransactionTopic &operator=(const FileTransactionTopic &) = delete;
	~FileTransactionTopic() override = default;

private:
	FileTransactionTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class FileTransactionBeginTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	FileTransactionBeginTopic(const FileTransactionBeginTopic &) = delete;
	FileTransactionBeginTopic &operator=(const FileTransactionBeginTopic &) = delete;
	~FileTransactionBeginTopic() override = default;

private:
	FileTransactionBeginTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class FileTransactionEndTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	FileTransactionEndTopic(const FileTransactionEndTopic &) = delete;
	FileTransactionEndTopic &operator=(const FileTransactionEndTopic &) = delete;
	~FileTransactionEndTopic() override = default;

private:
	FileTransactionEndTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class FileTransactionChunkTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	FileTransactionChunkTopic(const FileTransactionChunkTopic &) = delete;
	FileTransactionChunkTopic &operator=(const FileTransactionChunkTopic &) = delete;
	~FileTransactionChunkTopic() override = default;

private:
	FileTransactionChunkTopic();

public:
	TopicString get(const std::string &transactionId, const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionTopic(const ActionTopic &) = delete;
	ActionTopic &operator=(const ActionTopic &) = delete;
	~ActionTopic() override = default;

private:
	ActionTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionTelemetryConfigTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionTelemetryConfigTopic(const ActionTelemetryConfigTopic &) = delete;
	ActionTelemetryConfigTopic &operator=(const ActionTelemetryConfigTopic &) = delete;
	~ActionTelemetryConfigTopic() override = default;

private:
	ActionTelemetryConfigTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionTelemetryConfigSetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionTelemetryConfigSetTopic(const ActionTelemetryConfigSetTopic &) = delete;
	ActionTelemetryConfigSetTopic &operator=(const ActionTelemetryConfigSetTopic &) = delete;
	~ActionTelemetryConfigSetTopic() override = default;

private:
	ActionTelemetryConfigSetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionTelemetryConfigGetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionTelemetryConfigGetTopic(const ActionTelemetryConfigGetTopic &) = delete;
	ActionTelemetryConfigGetTopic &operator=(const ActionTelemetryConfigGetTopic &) = delete;
	~ActionTelemetryConfigGetTopic() override = default;

private:
	ActionTelemetryConfigGetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionTelemetryConfigContentTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionTelemetryConfigContentTopic(const ActionTelemetryConfigContentTopic &) = delete;
	ActionTelemetryConfigContentTopic &operator=(const ActionTelemetryConfigContentTopic &) = delete;
	~ActionTelemetryConfigContentTopic() override = default;

private:
	ActionTelemetryConfigContentTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionSessionConfigTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionSessionConfigTopic(const ActionSessionConfigTopic &) = delete;
	ActionSessionConfigTopic &operator=(const ActionSessionConfigTopic &) = delete;
	~ActionSessionConfigTopic() override = default;

private:
	ActionSessionConfigTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionSessionConfigSetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionSessionConfigSetTopic(const ActionSessionConfigSetTopic &) = delete;
	ActionSessionConfigSetTopic &operator=(const ActionSessionConfigSetTopic &) = delete;
	~ActionSessionConfigSetTopic() override = default;

private:
	ActionSessionConfigSetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionSessionConfigGetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionSessionConfigGetTopic(const ActionSessionConfigGetTopic &) = delete;
	ActionSessionConfigGetTopic &operator=(const ActionSessionConfigGetTopic &) = delete;
	~ActionSessionConfigGetTopic() override = default;

private:
	ActionSessionConfigGetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionSessionConfigContentTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionSessionConfigContentTopic(const ActionSessionConfigContentTopic &) = delete;
	ActionSessionConfigContentTopic &operator=(const ActionSessionConfigContentTopic &) = delete;
	~ActionSessionConfigContentTopic() override = default;

private:
	ActionSessionConfigContentTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionCarConfigTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionCarConfigTopic(const ActionCarConfigTopic &) = delete;
	ActionCarConfigTopic &operator=(const ActionCarConfigTopic &) = delete;
	~ActionCarConfigTopic() override = default;

private:
	ActionCarConfigTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionCarConfigSetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionCarConfigSetTopic(const ActionCarConfigSetTopic &) = delete;
	ActionCarConfigSetTopic &operator=(const ActionCarConfigSetTopic &) = delete;
	~ActionCarConfigSetTopic() override = default;

private:
	ActionCarConfigSetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionCarConfigGetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionCarConfigGetTopic(const ActionCarConfigGetTopic &) = delete;
	ActionCarConfigGetTopic &operator=(const ActionCarConfigGetTopic &) = delete;
	~ActionCarConfigGetTopic() override = default;

private:
	ActionCarConfigGetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionCarConfigContentTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionCarConfigContentTopic(const ActionCarConfigContentTopic &) = delete;
	ActionCarConfigContentTopic &operator=(const ActionCarConfigContentTopic &) = delete;
	~ActionCarConfigContentTopic() override = default;

private:
	ActionCarConfigContentTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionConfigsSetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionConfigsSetTopic(const ActionConfigsSetTopic &) = delete;
	ActionConfigsSetTopic &operator=(const ActionConfigsSetTopic &) = delete;
	~ActionConfigsSetTopic() override = default;

private:
	ActionConfigsSetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionConfigsGetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionConfigsGetTopic(const ActionConfigsGetTopic &) = delete;
	ActionConfigsGetTopic &operator=(const ActionConfigsGetTopic &) = delete;
	~ActionConfigsGetTopic() override = default;

private:
	ActionConfigsGetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionConfigsContentTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionConfigsContentTopic(const ActionConfigsContentTopic &) = delete;
	ActionConfigsContentTopic &operator=(const ActionConfigsContentTopic &) = delete;
	~ActionConfigsContentTopic() override = default;

private:
	ActionConfigsContentTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionKillTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionKillTopic(const ActionKillTopic &) = delete;
	ActionKillTopic &operator=(const ActionKillTopic &) = delete;
	~ActionKillTopic() override = default;

private:
	ActionKillTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionStartTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionStartTopic(const ActionStartTopic &) = delete;
	ActionStartTopic &operator=(const ActionStartTopic &) = delete;
	~ActionStartTopic() override = default;

private:
	ActionStartTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionResetTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionResetTopic(const ActionResetTopic &) = delete;
	ActionResetTopic &operator=(const ActionResetTopic &) = delete;
	~ActionResetTopic() override = default;

private:
	ActionResetTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionStopTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionStopTopic(const ActionStopTopic &) = delete;
	ActionStopTopic &operator=(const ActionStopTopic &) = delete;
	~ActionStopTopic() override = default;

private:
	ActionStopTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionRawTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionRawTopic(const ActionRawTopic &) = delete;
	ActionRawTopic &operator=(const ActionRawTopic &) = delete;
	~ActionRawTopic() override = default;

private:
	ActionRawTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};


class ActionResetLapCounterTopic : public MqttTopic
{
	friend class MqttTopics;

public:
	ActionResetLapCounterTopic(const ActionResetLapCounterTopic &) = delete;
	ActionResetLapCounterTopic &operator=(const ActionResetLapCounterTopic &) = delete;
	~ActionResetLapCounterTopic() override = default;

private:
	ActionResetLapCounterTopic();

public:
	TopicString get(const std::string &vehicleId = "feniceEvo", const std::string &deviceId = "telemetry") const;
};



#endif
