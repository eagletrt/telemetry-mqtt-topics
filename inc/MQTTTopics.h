#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include "MQTTTopicsList.h"

#include <vector>

class MQTTTopics
{
public:
    MQTTTopics() = delete;
    MQTTTopics(const MQTTTopics &) = delete;
    MQTTTopics &operator=(const MQTTTopics &) = delete;
    ~MQTTTopics() = delete;

public:

	static const VehicleIdTopic vehicleIdTopic;
	static const DeviceIdTopic deviceIdTopic;
	static const DataTopic dataTopic;
	static const DataPrimaryTopic dataPrimaryTopic;
	static const DataSecondaryTopic dataSecondaryTopic;
	static const DataInverterTopic dataInverterTopic;
	static const DataGpsTopic dataGpsTopic;
	static const DataBrusaTopic dataBrusaTopic;
	static const StatusTopic statusTopic;
	static const StatusInfoTopic statusInfoTopic;
	static const StatusErrorTopic statusErrorTopic;
	static const StatusCanFrequenciesTopic statusCanFrequenciesTopic;
	static const CommandTopic commandTopic;
	static const CommandSendTopic commandSendTopic;
	static const CommandResultTopic commandResultTopic;
	static const FileTransactionAskTopic fileTransactionAskTopic;
	static const FileTransactionAckTopic fileTransactionAckTopic;
	static const FileTransactionTopic fileTransactionTopic;
	static const FileTransactionBeginTopic fileTransactionBeginTopic;
	static const FileTransactionEndTopic fileTransactionEndTopic;
	static const FileTransactionChunkTopic fileTransactionChunkTopic;
	static const ActionTopic actionTopic;
	static const ActionTelemetryConfigTopic actionTelemetryConfigTopic;
	static const ActionTelemetryConfigSetTopic actionTelemetryConfigSetTopic;
	static const ActionTelemetryConfigGetTopic actionTelemetryConfigGetTopic;
	static const ActionTelemetryConfigContentTopic actionTelemetryConfigContentTopic;
	static const ActionSessionConfigTopic actionSessionConfigTopic;
	static const ActionSessionConfigSetTopic actionSessionConfigSetTopic;
	static const ActionSessionConfigGetTopic actionSessionConfigGetTopic;
	static const ActionSessionConfigContentTopic actionSessionConfigContentTopic;
	static const ActionCarConfigTopic actionCarConfigTopic;
	static const ActionCarConfigSetTopic actionCarConfigSetTopic;
	static const ActionCarConfigGetTopic actionCarConfigGetTopic;
	static const ActionCarConfigContentTopic actionCarConfigContentTopic;
	static const ActionConfigsSetTopic actionConfigsSetTopic;
	static const ActionConfigsGetTopic actionConfigsGetTopic;
	static const ActionConfigsContentTopic actionConfigsContentTopic;
	static const ActionKillTopic actionKillTopic;
	static const ActionStartTopic actionStartTopic;
	static const ActionResetTopic actionResetTopic;
	static const ActionStopTopic actionStopTopic;
	static const ActionPrechargeTopic actionPrechargeTopic;
	static const ActionBalanceTopic actionBalanceTopic;
	static const ActionStopBalance actionStopBalance;
	static const ActionChargeTopic actionChargeTopic;
	static const ActionStopCharge actionStopCharge;
	static const ActionRawTopic actionRawTopic;
	static const ActionResetLapCounterTopic actionResetLapCounterTopic;


public:
    static std::vector<TopicString> GetSubscribeTopics(unsigned int role);
    static std::vector<TopicString> GetPublishTopics(unsigned int role);
};

#endif
