#include "topics.h"

namespace MQTTTopics
{
std::vector<TopicMessage> GetSubscribeTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<TopicMessage> ret;
    
    switch(role) {
        case Role::role0:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role1:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role2:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role3:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role4:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role128:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role129:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
    }

    return ret;
}

std::vector<TopicMessage> GetPublishTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<TopicMessage> ret;
    
    switch(role) {
        case Role::role0:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role1:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role2:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role3:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role4:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role128:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role129:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusInfo(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusError(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusAlert(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusCanFrequencies(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterStatus(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicStatusLapCounterLaps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
    }
    
    return ret;
}

bool CanSubscribe(Role role, Topic topic) {
    switch(role) {
        case Role::role0:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role1:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role2:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role3:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role4:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role128:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            return false;
            break;
        }
        break;
        
        case Role::role129:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            return false;
            break;
        }
        break;
    }

    return false;
}

bool CanPublish(Role role, Topic topic) {
    switch(role) {
        case Role::role0:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role1:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role2:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role3:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role4:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role128:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
        
        case Role::role129:
        switch(topic) {
            case Topic::vehicleId:
            case Topic::deviceId:
            case Topic::deviceVersion:
            case Topic::data:
            case Topic::dataPrimary:
            case Topic::dataSecondary:
            case Topic::dataBms:
            case Topic::dataInverter:
            case Topic::dataSimulator:
            case Topic::dataGps:
            case Topic::dataBrusa:
            case Topic::dataLastUpdate:
            case Topic::status:
            case Topic::statusInfo:
            case Topic::statusError:
            case Topic::statusAlert:
            case Topic::statusCanFrequencies:
            case Topic::statusLapCounterStatus:
            case Topic::statusLapCounterLaps:
            case Topic::command:
            case Topic::commandSend:
            case Topic::commandResult:
            case Topic::fileTransactionRequest:
            case Topic::fileTransactionResponse:
            case Topic::fileTransaction:
            case Topic::fileTransactionBegin:
            case Topic::fileTransactionEnd:
            case Topic::fileTransactionChunk:
            case Topic::fileTransactionChunkAck:
            case Topic::action:
            case Topic::actionTelemetryConfig:
            case Topic::actionTelemetryConfigSet:
            case Topic::actionTelemetryConfigGet:
            case Topic::actionTelemetryConfigContent:
            case Topic::actionSessionConfig:
            case Topic::actionSessionConfigSet:
            case Topic::actionSessionConfigGet:
            case Topic::actionSessionConfigContent:
            case Topic::actionCarConfig:
            case Topic::actionCarConfigSet:
            case Topic::actionCarConfigGet:
            case Topic::actionCarConfigContent:
            case Topic::actionHandcartSettings:
            case Topic::actionHandcartSettingsSet:
            case Topic::actionHandcartSettingsGet:
            case Topic::actionHandcartSettingsContent:
            case Topic::actionKill:
            case Topic::actionStart:
            case Topic::actionReset:
            case Topic::actionStop:
            case Topic::actionPrecharge:
            case Topic::actionBalance:
            case Topic::actionStopBalance:
            case Topic::actionCharge:
            case Topic::actionStopCharge:
            case Topic::actionRaw:
            case Topic::actionResetLapCounter:
            case Topic::actionSetLapCounterStatus:
            return true;
            break;
            
        }
        break;
    }

    return false;
}

TopicMessage GetTopic(Topic topic, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    switch(topic) {
        case Topic::vehicleId: 
            return GetTopicVehicleId(vehicleId);
        case Topic::deviceId: 
            return GetTopicDeviceId(vehicleId, deviceId);
        case Topic::deviceVersion: 
            return GetTopicDeviceVersion(vehicleId, deviceId);
        case Topic::data: 
            return GetTopicData(vehicleId, deviceId);
        case Topic::dataPrimary: 
            return GetTopicDataPrimary(vehicleId, deviceId);
        case Topic::dataSecondary: 
            return GetTopicDataSecondary(vehicleId, deviceId);
        case Topic::dataBms: 
            return GetTopicDataBms(vehicleId, deviceId);
        case Topic::dataInverter: 
            return GetTopicDataInverter(vehicleId, deviceId);
        case Topic::dataSimulator: 
            return GetTopicDataSimulator(vehicleId, deviceId);
        case Topic::dataGps: 
            return GetTopicDataGps(vehicleId, deviceId);
        case Topic::dataBrusa: 
            return GetTopicDataBrusa(vehicleId, deviceId);
        case Topic::dataLastUpdate: 
            return GetTopicDataLastUpdate(vehicleId, deviceId);
        case Topic::status: 
            return GetTopicStatus(vehicleId, deviceId);
        case Topic::statusInfo: 
            return GetTopicStatusInfo(vehicleId, deviceId);
        case Topic::statusError: 
            return GetTopicStatusError(vehicleId, deviceId);
        case Topic::statusAlert: 
            return GetTopicStatusAlert(vehicleId, deviceId);
        case Topic::statusCanFrequencies: 
            return GetTopicStatusCanFrequencies(vehicleId, deviceId);
        case Topic::statusLapCounterStatus: 
            return GetTopicStatusLapCounterStatus(vehicleId, deviceId);
        case Topic::statusLapCounterLaps: 
            return GetTopicStatusLapCounterLaps(vehicleId, deviceId);
        case Topic::command: 
            return GetTopicCommand(vehicleId, deviceId);
        case Topic::commandSend: 
            return GetTopicCommandSend(vehicleId, deviceId);
        case Topic::commandResult: 
            return GetTopicCommandResult(vehicleId, deviceId);
        case Topic::fileTransactionRequest: 
            return GetTopicFileTransactionRequest(vehicleId, deviceId);
        case Topic::fileTransactionResponse: 
            return GetTopicFileTransactionResponse(vehicleId, deviceId);
        case Topic::fileTransaction: 
            return GetTopicFileTransaction(vehicleId, deviceId, transactionId);
        case Topic::fileTransactionBegin: 
            return GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId);
        case Topic::fileTransactionEnd: 
            return GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId);
        case Topic::fileTransactionChunk: 
            return GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId);
        case Topic::fileTransactionChunkAck: 
            return GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId);
        case Topic::action: 
            return GetTopicAction(vehicleId, deviceId);
        case Topic::actionTelemetryConfig: 
            return GetTopicActionTelemetryConfig(vehicleId, deviceId);
        case Topic::actionTelemetryConfigSet: 
            return GetTopicActionTelemetryConfigSet(vehicleId, deviceId);
        case Topic::actionTelemetryConfigGet: 
            return GetTopicActionTelemetryConfigGet(vehicleId, deviceId);
        case Topic::actionTelemetryConfigContent: 
            return GetTopicActionTelemetryConfigContent(vehicleId, deviceId);
        case Topic::actionSessionConfig: 
            return GetTopicActionSessionConfig(vehicleId, deviceId);
        case Topic::actionSessionConfigSet: 
            return GetTopicActionSessionConfigSet(vehicleId, deviceId);
        case Topic::actionSessionConfigGet: 
            return GetTopicActionSessionConfigGet(vehicleId, deviceId);
        case Topic::actionSessionConfigContent: 
            return GetTopicActionSessionConfigContent(vehicleId, deviceId);
        case Topic::actionCarConfig: 
            return GetTopicActionCarConfig(vehicleId, deviceId);
        case Topic::actionCarConfigSet: 
            return GetTopicActionCarConfigSet(vehicleId, deviceId);
        case Topic::actionCarConfigGet: 
            return GetTopicActionCarConfigGet(vehicleId, deviceId);
        case Topic::actionCarConfigContent: 
            return GetTopicActionCarConfigContent(vehicleId, deviceId);
        case Topic::actionHandcartSettings: 
            return GetTopicActionHandcartSettings(vehicleId, deviceId);
        case Topic::actionHandcartSettingsSet: 
            return GetTopicActionHandcartSettingsSet(vehicleId, deviceId);
        case Topic::actionHandcartSettingsGet: 
            return GetTopicActionHandcartSettingsGet(vehicleId, deviceId);
        case Topic::actionHandcartSettingsContent: 
            return GetTopicActionHandcartSettingsContent(vehicleId, deviceId);
        case Topic::actionKill: 
            return GetTopicActionKill(vehicleId, deviceId);
        case Topic::actionStart: 
            return GetTopicActionStart(vehicleId, deviceId);
        case Topic::actionReset: 
            return GetTopicActionReset(vehicleId, deviceId);
        case Topic::actionStop: 
            return GetTopicActionStop(vehicleId, deviceId);
        case Topic::actionPrecharge: 
            return GetTopicActionPrecharge(vehicleId, deviceId);
        case Topic::actionBalance: 
            return GetTopicActionBalance(vehicleId, deviceId);
        case Topic::actionStopBalance: 
            return GetTopicActionStopBalance(vehicleId, deviceId);
        case Topic::actionCharge: 
            return GetTopicActionCharge(vehicleId, deviceId);
        case Topic::actionStopCharge: 
            return GetTopicActionStopCharge(vehicleId, deviceId);
        case Topic::actionRaw: 
            return GetTopicActionRaw(vehicleId, deviceId);
        case Topic::actionResetLapCounter: 
            return GetTopicActionResetLapCounter(vehicleId, deviceId);
        case Topic::actionSetLapCounterStatus: 
            return GetTopicActionSetLapCounterStatus(vehicleId, deviceId);
    }
}

TopicMessage GetTopicVehicleId(const std::string& vehicleId) {
    std::string topic = vehicleId;
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDeviceId(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId;
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDeviceVersion(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "version";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicData(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataPrimary(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/primary";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataSecondary(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/secondary";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataBms(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/bms";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataInverter(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/inverters";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataSimulator(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/simulator";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataGps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/gps";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataBrusa(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/brusa";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicDataLastUpdate(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "last_update";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicStatusInfo(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/info";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicStatusError(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/error";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicStatusAlert(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/alert";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicStatusCanFrequencies(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/canFrequencies";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicStatusLapCounterStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/lapCounterStatus";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicStatusLapCounterLaps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/lapCounterLaps";
    int qos = 1;
    bool retain = true;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicCommand(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicCommandSend(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command/send";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicCommandResult(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command/result";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicFileTransactionRequest(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/request";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicFileTransactionResponse(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/response";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicFileTransaction(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId;
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicFileTransactionBegin(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "begin";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicFileTransactionEnd(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "end";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicFileTransactionChunk(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicFileTransactionChunkAck(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk_ack";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicAction(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionTelemetryConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionTelemetryConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionTelemetryConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionTelemetryConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/content";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionSessionConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionSessionConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionSessionConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionSessionConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/content";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionCarConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionCarConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionCarConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionCarConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/content";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionHandcartSettings(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionHandcartSettingsSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionHandcartSettingsGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionHandcartSettingsContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/content";
    int qos = 0;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionKill(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/kill";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionStart(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/start";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionReset(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/reset";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionStop(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stop";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionPrecharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/precharge";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionBalance(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/balance";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionStopBalance(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stopBalance";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionCharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/charge";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionStopCharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stopCharge";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionRaw(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/raw";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionResetLapCounter(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/resetLapcounter";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}

TopicMessage GetTopicActionSetLapCounterStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/setLapcounterStatus";
    int qos = 2;
    bool retain = false;

    return TopicMessage{topic, qos, retain};
}
}