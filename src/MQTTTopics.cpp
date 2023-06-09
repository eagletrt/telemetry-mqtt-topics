#include "MQTTTopics.h"

const VehicleIdTopic MQTTTopics::vehicleIdTopic = VehicleIdTopic();
const DeviceIdTopic MQTTTopics::deviceIdTopic = DeviceIdTopic();
const DataTopic MQTTTopics::dataTopic = DataTopic();
const DataPrimaryTopic MQTTTopics::dataPrimaryTopic = DataPrimaryTopic();
const DataSecondaryTopic MQTTTopics::dataSecondaryTopic = DataSecondaryTopic();
const DataInverterTopic MQTTTopics::dataInverterTopic = DataInverterTopic();
const DataGpsTopic MQTTTopics::dataGpsTopic = DataGpsTopic();
const DataBrusaTopic MQTTTopics::dataBrusaTopic = DataBrusaTopic();
const StatusTopic MQTTTopics::statusTopic = StatusTopic();
const StatusInfoTopic MQTTTopics::statusInfoTopic = StatusInfoTopic();
const StatusErrorTopic MQTTTopics::statusErrorTopic = StatusErrorTopic();
const StatusCanFrequenciesTopic MQTTTopics::statusCanFrequenciesTopic = StatusCanFrequenciesTopic();
const CommandTopic MQTTTopics::commandTopic = CommandTopic();
const CommandSendTopic MQTTTopics::commandSendTopic = CommandSendTopic();
const CommandResultTopic MQTTTopics::commandResultTopic = CommandResultTopic();
const FileTransactionAskTopic MQTTTopics::fileTransactionAskTopic = FileTransactionAskTopic();
const FileTransactionAckTopic MQTTTopics::fileTransactionAckTopic = FileTransactionAckTopic();
const FileTransactionTopic MQTTTopics::fileTransactionTopic = FileTransactionTopic();
const FileTransactionBeginTopic MQTTTopics::fileTransactionBeginTopic = FileTransactionBeginTopic();
const FileTransactionEndTopic MQTTTopics::fileTransactionEndTopic = FileTransactionEndTopic();
const FileTransactionChunkTopic MQTTTopics::fileTransactionChunkTopic = FileTransactionChunkTopic();
const ActionTopic MQTTTopics::actionTopic = ActionTopic();
const ActionTelemetryConfigTopic MQTTTopics::actionTelemetryConfigTopic = ActionTelemetryConfigTopic();
const ActionTelemetryConfigSetTopic MQTTTopics::actionTelemetryConfigSetTopic = ActionTelemetryConfigSetTopic();
const ActionTelemetryConfigGetTopic MQTTTopics::actionTelemetryConfigGetTopic = ActionTelemetryConfigGetTopic();
const ActionTelemetryConfigContentTopic MQTTTopics::actionTelemetryConfigContentTopic = ActionTelemetryConfigContentTopic();
const ActionSessionConfigTopic MQTTTopics::actionSessionConfigTopic = ActionSessionConfigTopic();
const ActionSessionConfigSetTopic MQTTTopics::actionSessionConfigSetTopic = ActionSessionConfigSetTopic();
const ActionSessionConfigGetTopic MQTTTopics::actionSessionConfigGetTopic = ActionSessionConfigGetTopic();
const ActionSessionConfigContentTopic MQTTTopics::actionSessionConfigContentTopic = ActionSessionConfigContentTopic();
const ActionCarConfigTopic MQTTTopics::actionCarConfigTopic = ActionCarConfigTopic();
const ActionCarConfigSetTopic MQTTTopics::actionCarConfigSetTopic = ActionCarConfigSetTopic();
const ActionCarConfigGetTopic MQTTTopics::actionCarConfigGetTopic = ActionCarConfigGetTopic();
const ActionCarConfigContentTopic MQTTTopics::actionCarConfigContentTopic = ActionCarConfigContentTopic();
const ActionConfigsSetTopic MQTTTopics::actionConfigsSetTopic = ActionConfigsSetTopic();
const ActionConfigsGetTopic MQTTTopics::actionConfigsGetTopic = ActionConfigsGetTopic();
const ActionConfigsContentTopic MQTTTopics::actionConfigsContentTopic = ActionConfigsContentTopic();
const ActionKillTopic MQTTTopics::actionKillTopic = ActionKillTopic();
const ActionStartTopic MQTTTopics::actionStartTopic = ActionStartTopic();
const ActionResetTopic MQTTTopics::actionResetTopic = ActionResetTopic();
const ActionStopTopic MQTTTopics::actionStopTopic = ActionStopTopic();
const ActionRawTopic MQTTTopics::actionRawTopic = ActionRawTopic();
const ActionResetLapCounterTopic MQTTTopics::actionResetLapCounterTopic = ActionResetLapCounterTopic();


std::vector<TopicString> MQTTTopics::GetSubscribeTopics(unsigned int role) {
    std::vector<TopicString> ret;

    // IDK

    return ret;
}

std::vector<TopicString> MQTTTopics::GetPublishTopics(unsigned int role) {
    std::vector<TopicString> ret;

    // IDK

    return ret;
}
