#include "mqtt_topics.h"

namespace MQTTTopics
{
std::vector<Topic> GetSubscribeTopics(Roles role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<Topic> ret;
    
    switch(role) {
        case Roles::ROLE_0:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_1:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_2:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_3:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_4:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_128:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_129:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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

std::vector<Topic> GetPublishTopics(Roles role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<Topic> ret;
    
    switch(role) {
        case Roles::ROLE_0:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_1:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_2:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_3:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_4:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_128:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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
        
        case Roles::ROLE_129:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataLastUpdate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
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

bool CanSubscribe(Roles role, Topics topic) {
    switch(role) {
        case Roles::ROLE_0:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_1:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_2:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_3:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_4:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_128:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_129:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
    }

    return false;
}

bool CanPublish(Roles role, Topics topic) {
    switch(role) {
        case Roles::ROLE_0:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_1:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_2:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_3:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_4:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_128:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
        
        case Roles::ROLE_129:
        switch(topic) {
            case Topics::VEHICLE_ID:
            case Topics::DEVICE_ID:
            case Topics::DEVICE_VERSION:
            case Topics::DATA:
            case Topics::DATA_LAST_UPDATE:
            case Topics::DATA_PRIMARY:
            case Topics::DATA_SECONDARY:
            case Topics::DATA_BMS:
            case Topics::DATA_INVERTER:
            case Topics::DATA_SIMULATOR:
            case Topics::DATA_GPS:
            case Topics::DATA_BRUSA:
            case Topics::STATUS:
            case Topics::STATUS_INFO:
            case Topics::STATUS_ERROR:
            case Topics::STATUS_ALERT:
            case Topics::STATUS_CAN_FREQUENCIES:
            case Topics::STATUS_LAP_COUNTER_STATUS:
            case Topics::STATUS_LAP_COUNTER_LAPS:
            case Topics::COMMAND:
            case Topics::COMMAND_SEND:
            case Topics::COMMAND_RESULT:
            case Topics::FILE_TRANSACTION_REQUEST:
            case Topics::FILE_TRANSACTION_RESPONSE:
            case Topics::FILE_TRANSACTION:
            case Topics::FILE_TRANSACTION_BEGIN:
            case Topics::FILE_TRANSACTION_END:
            case Topics::FILE_TRANSACTION_CHUNK:
            case Topics::FILE_TRANSACTION_CHUNK_ACK:
            case Topics::ACTION:
            case Topics::ACTION_TELEMETRY_CONFIG:
            case Topics::ACTION_TELEMETRY_CONFIG_SET:
            case Topics::ACTION_TELEMETRY_CONFIG_GET:
            case Topics::ACTION_TELEMETRY_CONFIG_CONTENT:
            case Topics::ACTION_SESSION_CONFIG:
            case Topics::ACTION_SESSION_CONFIG_SET:
            case Topics::ACTION_SESSION_CONFIG_GET:
            case Topics::ACTION_SESSION_CONFIG_CONTENT:
            case Topics::ACTION_CAR_CONFIG:
            case Topics::ACTION_CAR_CONFIG_SET:
            case Topics::ACTION_CAR_CONFIG_GET:
            case Topics::ACTION_CAR_CONFIG_CONTENT:
            case Topics::ACTION_HANDCART_SETTINGS:
            case Topics::ACTION_HANDCART_SETTINGS_SET:
            case Topics::ACTION_HANDCART_SETTINGS_GET:
            case Topics::ACTION_HANDCART_SETTINGS_CONTENT:
            case Topics::ACTION_KILL:
            case Topics::ACTION_START:
            case Topics::ACTION_RESET:
            case Topics::ACTION_STOP:
            case Topics::ACTION_PRECHARGE:
            case Topics::ACTION_BALANCE:
            case Topics::ACTION_STOP_BALANCE:
            case Topics::ACTION_CHARGE:
            case Topics::ACTION_STOP_CHARGE:
            case Topics::ACTION_RAW:
            case Topics::ACTION_RESET_LAP_COUNTER:
            case Topics::ACTION_SET_LAP_COUNTER_STATUS:
            return true;
            break;
            
        }
        break;
    }

    return false;
}

Topic GetTopicVehicleId(const std::string& vehicleId) {
    std::string topic = vehicleId;
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDeviceId(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId;
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDeviceVersion(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "version";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicData(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataLastUpdate(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/last_update";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataPrimary(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/primary";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataSecondary(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/secondary";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataBms(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/bms";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataInverter(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/inverter";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataSimulator(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/simulator";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataGps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/gps";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicDataBrusa(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/brusa";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicStatusInfo(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/info";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicStatusError(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/error";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicStatusAlert(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/alert";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicStatusCanFrequencies(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/canFrequencies";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicStatusLapCounterStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/lapCounterStatus";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicStatusLapCounterLaps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/lapCounterLaps";
    int qos = 1;
    bool retain = true;

    return Topic{topic, qos, retain};
}

Topic GetTopicCommand(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicCommandSend(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command/send";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicCommandResult(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command/result";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicFileTransactionRequest(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/request";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicFileTransactionResponse(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/response";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicFileTransaction(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId;
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicFileTransactionBegin(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "begin";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicFileTransactionEnd(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "end";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicFileTransactionChunk(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicFileTransactionChunkAck(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk_ack";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicAction(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionTelemetryConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionTelemetryConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/set";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionTelemetryConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/get";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionTelemetryConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/content";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionSessionConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionSessionConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/set";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionSessionConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/get";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionSessionConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/content";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionCarConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionCarConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/set";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionCarConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/get";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionCarConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/content";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionHandcartSettings(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionHandcartSettingsSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/set";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionHandcartSettingsGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/get";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionHandcartSettingsContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/content";
    int qos = 0;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionKill(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/kill";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionStart(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/start";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionReset(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/reset";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionStop(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stop";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionPrecharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/precharge";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionBalance(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/balance";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionStopBalance(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stopBalance";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionCharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/charge";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionStopCharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stopCharge";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionRaw(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/raw";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionResetLapCounter(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/resetLapcounter";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}

Topic GetTopicActionSetLapCounterStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/setLapcounterStatus";
    int qos = 2;
    bool retain = false;

    return Topic{topic, qos, retain};
}
}