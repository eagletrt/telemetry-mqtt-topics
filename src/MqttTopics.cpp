#include "MqttTopics.h"

const VehicleIdTopic MqttTopics::vehicleIdTopic = VehicleIdTopic();
const VehicleIdDeviceIdTopic MqttTopics::vehicleIdDeviceIdTopic = VehicleIdDeviceIdTopic();
const DataTopic MqttTopics::dataTopic = DataTopic();
const DataPrimaryTopic MqttTopics::dataPrimaryTopic = DataPrimaryTopic();
const DataSecondaryTopic MqttTopics::dataSecondaryTopic = DataSecondaryTopic();
const DataInverterTopic MqttTopics::dataInverterTopic = DataInverterTopic();
const DataGpsTopic MqttTopics::dataGpsTopic = DataGpsTopic();
const DataBrusaTopic MqttTopics::dataBrusaTopic = DataBrusaTopic();
const StatusTopic MqttTopics::statusTopic = StatusTopic();
const StatusInfoTopic MqttTopics::statusInfoTopic = StatusInfoTopic();
const StatusErrorTopic MqttTopics::statusErrorTopic = StatusErrorTopic();
const StatusCanFrequenciesTopic MqttTopics::statusCanFrequenciesTopic = StatusCanFrequenciesTopic();
const CommandTopic MqttTopics::commandTopic = CommandTopic();
const CommandSendTopic MqttTopics::commandSendTopic = CommandSendTopic();
const CommandResultTopic MqttTopics::commandResultTopic = CommandResultTopic();
const FileTransactionAskTopic MqttTopics::fileTransactionAskTopic = FileTransactionAskTopic();
const FileTransactionAckTopic MqttTopics::fileTransactionAckTopic = FileTransactionAckTopic();
const FileTransactionTopic MqttTopics::fileTransactionTopic = FileTransactionTopic();
const FileTransactionBeginTopic MqttTopics::fileTransactionBeginTopic = FileTransactionBeginTopic();
const FileTransactionEndTopic MqttTopics::fileTransactionEndTopic = FileTransactionEndTopic();
const FileTransactionChunkTopic MqttTopics::fileTransactionChunkTopic = FileTransactionChunkTopic();
const ActionTopic MqttTopics::actionTopic = ActionTopic();
const ActionTelemetryConfigTopic MqttTopics::actionTelemetryConfigTopic = ActionTelemetryConfigTopic();
const ActionTelemetryConfigSetTopic MqttTopics::actionTelemetryConfigSetTopic = ActionTelemetryConfigSetTopic();
const ActionTelemetryConfigGetTopic MqttTopics::actionTelemetryConfigGetTopic = ActionTelemetryConfigGetTopic();
const ActionTelemetryConfigContentTopic MqttTopics::actionTelemetryConfigContentTopic = ActionTelemetryConfigContentTopic();
const ActionSessionConfigTopic MqttTopics::actionSessionConfigTopic = ActionSessionConfigTopic();
const ActionSessionConfigSetTopic MqttTopics::actionSessionConfigSetTopic = ActionSessionConfigSetTopic();
const ActionSessionConfigGetTopic MqttTopics::actionSessionConfigGetTopic = ActionSessionConfigGetTopic();
const ActionSessionConfigContentTopic MqttTopics::actionSessionConfigContentTopic = ActionSessionConfigContentTopic();
const ActionCarConfigTopic MqttTopics::actionCarConfigTopic = ActionCarConfigTopic();
const ActionCarConfigSetTopic MqttTopics::actionCarConfigSetTopic = ActionCarConfigSetTopic();
const ActionCarConfigGetTopic MqttTopics::actionCarConfigGetTopic = ActionCarConfigGetTopic();
const ActionCarConfigContentTopic MqttTopics::actionCarConfigContentTopic = ActionCarConfigContentTopic();
const ActionConfigsSetTopic MqttTopics::actionConfigsSetTopic = ActionConfigsSetTopic();
const ActionConfigsGetTopic MqttTopics::actionConfigsGetTopic = ActionConfigsGetTopic();
const ActionConfigsContentTopic MqttTopics::actionConfigsContentTopic = ActionConfigsContentTopic();
const ActionKillTopic MqttTopics::actionKillTopic = ActionKillTopic();
const ActionStartTopic MqttTopics::actionStartTopic = ActionStartTopic();
const ActionResetTopic MqttTopics::actionResetTopic = ActionResetTopic();
const ActionStopTopic MqttTopics::actionStopTopic = ActionStopTopic();
const ActionRawTopic MqttTopics::actionRawTopic = ActionRawTopic();
const ActionResetLapCounterTopic MqttTopics::actionResetLapCounterTopic = ActionResetLapCounterTopic();


std::vector<TopicString> MqttTopics::GetSubscribeTopics(unsigned int role) {
    std::vector<TopicString> ret;

    // IDK

    return ret;
}

std::vector<TopicString> MqttTopics::GetPublishTopics(unsigned int role) {
    std::vector<TopicString> ret;

    // IDK

    return ret;
}
