#include "topics.h"

namespace MQTTTopics
{
TopicMessage::TopicMessage(std::string&& topic, int qos, bool retain) :
    topic(topic), qos(qos), retain(retain) {}

std::vector<TopicMessage> GetSubscribeTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<TopicMessage> ret;
    
    switch(role) {
        case Role::role_0:
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
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        break;
        
        case Role::role_1:
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
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        break;
        
        case Role::role_2:
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
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        break;
        
        case Role::role_3:
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
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        break;
        
        case Role::role_4:
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
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        break;
        
        case Role::role_128:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role_129:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDeviceVersion(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSend(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandResult(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role_130:
        ret.emplace_back(std::move(GetTopicVehicleId(vehicleId)));
        ret.emplace_back(std::move(GetTopicDeviceId(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataPrimary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSecondary(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBms(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataInverter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataSimulator(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataBrusa(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicCommand(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        break;
    }

    return ret;
}

std::vector<TopicMessage> GetPublishTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<TopicMessage> ret;
    
    switch(role) {
        case Role::role_0:
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
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role_1:
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
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role_2:
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
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role_3:
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
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role_4:
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
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackSet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackGet(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionKill(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStart(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionReset(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStop(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStartBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionPrecharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopBalance(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionStopCharge(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionResetLapCounter(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSetLapCounterStatus(vehicleId, deviceId)));
        break;
        
        case Role::role_128:
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
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicCommandSteer(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionRequest(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransactionResponse(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicFileTransaction(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId)));
        ret.emplace_back(std::move(GetTopicAction(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        break;
        
        case Role::role_129:
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
        ret.emplace_back(std::move(GetTopicDataCameraLogger(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerCan(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGps(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmData(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataBaseline(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId)));
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
        ret.emplace_back(std::move(GetTopicActionTelemetryConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionSessionConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionCarConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettings(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionHandcartSettingsContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfig(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterConfigContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrack(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionLapCounterTrackContent(vehicleId, deviceId)));
        ret.emplace_back(std::move(GetTopicActionRaw(vehicleId, deviceId)));
        break;
        
        case Role::role_130:
        break;
    }
    
    return ret;
}

bool CanSubscribe(Role role, Topic topic) {
    switch(role) {
        case Role::role_0:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_content:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
              return true;
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_set_lap_counter_status:
              return false;
        }
        
        case Role::role_1:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_content:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
              return true;
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_set_lap_counter_status:
              return false;
        }
        
        case Role::role_2:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_content:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
              return true;
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_set_lap_counter_status:
              return false;
        }
        
        case Role::role_3:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_content:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
              return true;
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_set_lap_counter_status:
              return false;
        }
        
        case Role::role_4:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_content:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
              return true;
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_set_lap_counter_status:
              return false;
        }
        
        case Role::role_128:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_content:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_content:
              return false;
        }
        
        case Role::role_129:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_content:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_content:
              return false;
        }
        
        case Role::role_130:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::command:
            case Topic::action:
            case Topic::action_session_config:
            case Topic::action_car_config:
            case Topic::action_handcart_settings:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_track:
              return true;
            case Topic::device_version:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_session_config_content:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_lap_counter_track_content:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return false;
        }
    }

    return false;
}

bool CanPublish(Role role, Topic topic) {
    switch(role) {
        case Role::role_0:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_content:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_content:
              return false;
        }
        
        case Role::role_1:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::command_steer:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_content:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_content:
              return false;
        }
        
        case Role::role_2:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::command_steer:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_content:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_content:
              return false;
        }
        
        case Role::role_3:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::command_steer:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_content:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_content:
              return false;
        }
        
        case Role::role_4:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::command_steer:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config_content:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track_content:
              return false;
        }
        
        case Role::role_128:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_content:
            case Topic::action_raw:
              return true;
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return false;
        }
        
        case Role::role_129:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_content:
            case Topic::action_raw:
              return true;
            case Topic::command_steer:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return false;
        }
        
        case Role::role_130:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_imu_angular_rate:
            case Topic::data_camera_logger_imu_acceleration:
            case Topic::data_camera_logger_vehicle_position:
            case Topic::data_camera_logger_vehicle_speed:
            case Topic::data_camera_logger_front_angular_velocity:
            case Topic::data_camera_logger_rear_left_angular_velocity:
            case Topic::data_camera_logger_rear_right_angular_velocity:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h:
            case Topic::data_camera_logger_gps_p_v_t:
            case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::status_lap_counter_laps:
            case Topic::command:
            case Topic::command_send:
            case Topic::command_result:
            case Topic::command_steer:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::action:
            case Topic::action_telemetry_config:
            case Topic::action_telemetry_config_set:
            case Topic::action_telemetry_config_get:
            case Topic::action_telemetry_config_content:
            case Topic::action_session_config:
            case Topic::action_session_config_set:
            case Topic::action_session_config_get:
            case Topic::action_session_config_content:
            case Topic::action_car_config:
            case Topic::action_car_config_set:
            case Topic::action_car_config_get:
            case Topic::action_car_config_content:
            case Topic::action_handcart_settings:
            case Topic::action_handcart_settings_set:
            case Topic::action_handcart_settings_get:
            case Topic::action_handcart_settings_content:
            case Topic::action_lap_counter_config:
            case Topic::action_lap_counter_config_set:
            case Topic::action_lap_counter_config_get:
            case Topic::action_lap_counter_config_content:
            case Topic::action_lap_counter_track:
            case Topic::action_lap_counter_track_set:
            case Topic::action_lap_counter_track_get:
            case Topic::action_lap_counter_track_content:
            case Topic::action_kill:
            case Topic::action_start:
            case Topic::action_reset:
            case Topic::action_stop:
            case Topic::action_start_baseline:
            case Topic::action_stop_baseline:
            case Topic::action_precharge:
            case Topic::action_balance:
            case Topic::action_stop_balance:
            case Topic::action_charge:
            case Topic::action_stop_charge:
            case Topic::action_raw:
            case Topic::action_reset_lap_counter:
            case Topic::action_set_lap_counter_status:
              return false;
        }
    }

    return false;
}

TopicMessage GetTopic(Topic topic, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    switch(topic) {
        case Topic::vehicle_id: 
            return GetTopicVehicleId(vehicleId);
        case Topic::device_id: 
            return GetTopicDeviceId(vehicleId, deviceId);
        case Topic::device_version: 
            return GetTopicDeviceVersion(vehicleId, deviceId);
        case Topic::data: 
            return GetTopicData(vehicleId, deviceId);
        case Topic::data_primary: 
            return GetTopicDataPrimary(vehicleId, deviceId);
        case Topic::data_secondary: 
            return GetTopicDataSecondary(vehicleId, deviceId);
        case Topic::data_bms: 
            return GetTopicDataBms(vehicleId, deviceId);
        case Topic::data_inverter: 
            return GetTopicDataInverter(vehicleId, deviceId);
        case Topic::data_simulator: 
            return GetTopicDataSimulator(vehicleId, deviceId);
        case Topic::data_gps: 
            return GetTopicDataGps(vehicleId, deviceId);
        case Topic::data_brusa: 
            return GetTopicDataBrusa(vehicleId, deviceId);
        case Topic::data_camera_logger: 
            return GetTopicDataCameraLogger(vehicleId, deviceId);
        case Topic::data_camera_logger_can: 
            return GetTopicDataCameraLoggerCan(vehicleId, deviceId);
        case Topic::data_camera_logger_imu_angular_rate: 
            return GetTopicDataCameraLoggerImuAngularRate(vehicleId, deviceId);
        case Topic::data_camera_logger_imu_acceleration: 
            return GetTopicDataCameraLoggerImuAcceleration(vehicleId, deviceId);
        case Topic::data_camera_logger_vehicle_position: 
            return GetTopicDataCameraLoggerVehiclePosition(vehicleId, deviceId);
        case Topic::data_camera_logger_vehicle_speed: 
            return GetTopicDataCameraLoggerVehicleSpeed(vehicleId, deviceId);
        case Topic::data_camera_logger_front_angular_velocity: 
            return GetTopicDataCameraLoggerFrontAngularVelocity(vehicleId, deviceId);
        case Topic::data_camera_logger_rear_left_angular_velocity: 
            return GetTopicDataCameraLoggerRearLeftAngularVelocity(vehicleId, deviceId);
        case Topic::data_camera_logger_rear_right_angular_velocity: 
            return GetTopicDataCameraLoggerRearRightAngularVelocity(vehicleId, deviceId);
        case Topic::data_camera_logger_gps: 
            return GetTopicDataCameraLoggerGps(vehicleId, deviceId);
        case Topic::data_camera_logger_gps_h_p_p_o_s_l_l_h: 
            return GetTopicDataCameraLoggerGpsHPPOSLLH(vehicleId, deviceId);
        case Topic::data_camera_logger_gps_p_v_t: 
            return GetTopicDataCameraLoggerGpsPVT(vehicleId, deviceId);
        case Topic::data_camera_logger_gps_r_e_l_p_o_s_n_e_d: 
            return GetTopicDataCameraLoggerGpsRELPOSNED(vehicleId, deviceId);
        case Topic::extra_tlm_data: 
            return GetTopicExtraTlmData(vehicleId, deviceId);
        case Topic::extra_tlm_data_vehicle_state: 
            return GetTopicExtraTlmDataVehicleState(vehicleId, deviceId);
        case Topic::extra_tlm_data_baseline: 
            return GetTopicExtraTlmDataBaseline(vehicleId, deviceId);
        case Topic::extra_tlm_data_gps_map_origins: 
            return GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId);
        case Topic::data_last_update: 
            return GetTopicDataLastUpdate(vehicleId, deviceId);
        case Topic::status: 
            return GetTopicStatus(vehicleId, deviceId);
        case Topic::status_info: 
            return GetTopicStatusInfo(vehicleId, deviceId);
        case Topic::status_error: 
            return GetTopicStatusError(vehicleId, deviceId);
        case Topic::status_alert: 
            return GetTopicStatusAlert(vehicleId, deviceId);
        case Topic::status_can_frequencies: 
            return GetTopicStatusCanFrequencies(vehicleId, deviceId);
        case Topic::status_lap_counter_status: 
            return GetTopicStatusLapCounterStatus(vehicleId, deviceId);
        case Topic::status_lap_counter_laps: 
            return GetTopicStatusLapCounterLaps(vehicleId, deviceId);
        case Topic::command: 
            return GetTopicCommand(vehicleId, deviceId);
        case Topic::command_send: 
            return GetTopicCommandSend(vehicleId, deviceId);
        case Topic::command_result: 
            return GetTopicCommandResult(vehicleId, deviceId);
        case Topic::command_steer: 
            return GetTopicCommandSteer(vehicleId, deviceId);
        case Topic::file_transaction_request: 
            return GetTopicFileTransactionRequest(vehicleId, deviceId);
        case Topic::file_transaction_response: 
            return GetTopicFileTransactionResponse(vehicleId, deviceId);
        case Topic::file_transaction: 
            return GetTopicFileTransaction(vehicleId, deviceId, transactionId);
        case Topic::file_transaction_begin: 
            return GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId);
        case Topic::file_transaction_end: 
            return GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId);
        case Topic::file_transaction_chunk: 
            return GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId);
        case Topic::file_transaction_chunk_ack: 
            return GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId);
        case Topic::action: 
            return GetTopicAction(vehicleId, deviceId);
        case Topic::action_telemetry_config: 
            return GetTopicActionTelemetryConfig(vehicleId, deviceId);
        case Topic::action_telemetry_config_set: 
            return GetTopicActionTelemetryConfigSet(vehicleId, deviceId);
        case Topic::action_telemetry_config_get: 
            return GetTopicActionTelemetryConfigGet(vehicleId, deviceId);
        case Topic::action_telemetry_config_content: 
            return GetTopicActionTelemetryConfigContent(vehicleId, deviceId);
        case Topic::action_session_config: 
            return GetTopicActionSessionConfig(vehicleId, deviceId);
        case Topic::action_session_config_set: 
            return GetTopicActionSessionConfigSet(vehicleId, deviceId);
        case Topic::action_session_config_get: 
            return GetTopicActionSessionConfigGet(vehicleId, deviceId);
        case Topic::action_session_config_content: 
            return GetTopicActionSessionConfigContent(vehicleId, deviceId);
        case Topic::action_car_config: 
            return GetTopicActionCarConfig(vehicleId, deviceId);
        case Topic::action_car_config_set: 
            return GetTopicActionCarConfigSet(vehicleId, deviceId);
        case Topic::action_car_config_get: 
            return GetTopicActionCarConfigGet(vehicleId, deviceId);
        case Topic::action_car_config_content: 
            return GetTopicActionCarConfigContent(vehicleId, deviceId);
        case Topic::action_handcart_settings: 
            return GetTopicActionHandcartSettings(vehicleId, deviceId);
        case Topic::action_handcart_settings_set: 
            return GetTopicActionHandcartSettingsSet(vehicleId, deviceId);
        case Topic::action_handcart_settings_get: 
            return GetTopicActionHandcartSettingsGet(vehicleId, deviceId);
        case Topic::action_handcart_settings_content: 
            return GetTopicActionHandcartSettingsContent(vehicleId, deviceId);
        case Topic::action_lap_counter_config: 
            return GetTopicActionLapCounterConfig(vehicleId, deviceId);
        case Topic::action_lap_counter_config_set: 
            return GetTopicActionLapCounterConfigSet(vehicleId, deviceId);
        case Topic::action_lap_counter_config_get: 
            return GetTopicActionLapCounterConfigGet(vehicleId, deviceId);
        case Topic::action_lap_counter_config_content: 
            return GetTopicActionLapCounterConfigContent(vehicleId, deviceId);
        case Topic::action_lap_counter_track: 
            return GetTopicActionLapCounterTrack(vehicleId, deviceId);
        case Topic::action_lap_counter_track_set: 
            return GetTopicActionLapCounterTrackSet(vehicleId, deviceId);
        case Topic::action_lap_counter_track_get: 
            return GetTopicActionLapCounterTrackGet(vehicleId, deviceId);
        case Topic::action_lap_counter_track_content: 
            return GetTopicActionLapCounterTrackContent(vehicleId, deviceId);
        case Topic::action_kill: 
            return GetTopicActionKill(vehicleId, deviceId);
        case Topic::action_start: 
            return GetTopicActionStart(vehicleId, deviceId);
        case Topic::action_reset: 
            return GetTopicActionReset(vehicleId, deviceId);
        case Topic::action_stop: 
            return GetTopicActionStop(vehicleId, deviceId);
        case Topic::action_start_baseline: 
            return GetTopicActionStartBaseline(vehicleId, deviceId);
        case Topic::action_stop_baseline: 
            return GetTopicActionStopBaseline(vehicleId, deviceId);
        case Topic::action_precharge: 
            return GetTopicActionPrecharge(vehicleId, deviceId);
        case Topic::action_balance: 
            return GetTopicActionBalance(vehicleId, deviceId);
        case Topic::action_stop_balance: 
            return GetTopicActionStopBalance(vehicleId, deviceId);
        case Topic::action_charge: 
            return GetTopicActionCharge(vehicleId, deviceId);
        case Topic::action_stop_charge: 
            return GetTopicActionStopCharge(vehicleId, deviceId);
        case Topic::action_raw: 
            return GetTopicActionRaw(vehicleId, deviceId);
        case Topic::action_reset_lap_counter: 
            return GetTopicActionResetLapCounter(vehicleId, deviceId);
        case Topic::action_set_lap_counter_status: 
            return GetTopicActionSetLapCounterStatus(vehicleId, deviceId);
    }

    return TopicMessage("", 0, false);
}

TopicMessage GetTopicVehicleId(const std::string& vehicleId) {
    std::string topic = vehicleId;
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDeviceId(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId;
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDeviceVersion(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "version";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicData(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataPrimary(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/primary";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataSecondary(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/secondary";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataBms(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/bms";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataInverter(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/inverters";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataSimulator(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/simulator";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataGps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/gps";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataBrusa(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/brusa";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLogger(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCan(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerImuAngularRate(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can/imuAngularRate";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerImuAcceleration(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can/imuAcceleration";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerVehiclePosition(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can/vehiclePosition";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerVehicleSpeed(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can/vehicleSpeed";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerFrontAngularVelocity(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can/frontAngularVelocity";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerRearLeftAngularVelocity(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can/rearLeftAngularVelocity";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerRearRightAngularVelocity(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/can/rearRightAngularVelocity";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/gps";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGpsHPPOSLLH(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/gps/HPPOSLLH";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGpsPVT(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/gps/PVT";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGpsRELPOSNED(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/camera-logger/gps/RELPOSNED";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicExtraTlmData(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicExtraTlmDataVehicleState(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/vehicleState";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicExtraTlmDataBaseline(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/baseline";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicExtraTlmDataGpsMapOrigins(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/gpsMapOrigins";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataLastUpdate(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "last_update";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicStatusInfo(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/info";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicStatusError(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/error";
    int qos = 1;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicStatusAlert(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/alert";
    int qos = 1;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicStatusCanFrequencies(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/canFrequencies";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicStatusLapCounterStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/lapCounterStatus";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicStatusLapCounterLaps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "status/lapCounterLaps";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicCommand(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicCommandSend(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command/send";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicCommandResult(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command/result";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicCommandSteer(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "command/steer";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicFileTransactionRequest(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/request";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicFileTransactionResponse(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/response";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicFileTransaction(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId;
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicFileTransactionBegin(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "begin";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicFileTransactionEnd(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "end";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicFileTransactionChunk(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicFileTransactionChunkAck(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk_ack";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicAction(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionTelemetryConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionTelemetryConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionTelemetryConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionTelemetryConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/telemetryConfig/content";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionSessionConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionSessionConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionSessionConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionSessionConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/sessionConfig/content";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionCarConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionCarConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionCarConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionCarConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/carConfig/content";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionHandcartSettings(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionHandcartSettingsSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionHandcartSettingsGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionHandcartSettingsContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/handcartSettings/content";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterConfig";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterConfigSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterConfig/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterConfigGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterConfig/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterConfigContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterConfig/content";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterTrack(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterTrack";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterTrackSet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterTrack/set";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterTrackGet(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterTrack/get";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionLapCounterTrackContent(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/lapCounterTrack/content";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionKill(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/kill";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionStart(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/start";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionReset(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/reset";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionStop(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stop";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionStartBaseline(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/startBaseline";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionStopBaseline(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stopBaseline";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionPrecharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/precharge";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionBalance(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/balance";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionStopBalance(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stopBalance";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionCharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/charge";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionStopCharge(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/stopCharge";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionRaw(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/raw";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionResetLapCounter(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/resetLapcounter";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicActionSetLapCounterStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "action/setLapcounterStatus";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}
}