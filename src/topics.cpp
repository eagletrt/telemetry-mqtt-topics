#include "topics.h"

namespace MQTTTopics
{
TopicMessage::TopicMessage(std::string&& topic, int qos, bool retain) :
    topic(topic), qos(qos), retain(retain) {}

std::vector<TopicMessage> GetSubscribeTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<TopicMessage> ret;
    
    switch(role) {
        case Role::role_0:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataPrimary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSecondary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBms(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataInverter(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSimulator(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBrusa(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataTemporary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataOdometer(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmData(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataBaseline(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicInfoTrackConfig(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_1:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataPrimary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSecondary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBms(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataInverter(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSimulator(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBrusa(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataTemporary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataOdometer(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmData(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataBaseline(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicInfoTrackConfig(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_2:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataPrimary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSecondary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBms(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataInverter(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSimulator(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBrusa(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataTemporary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataOdometer(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmData(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataBaseline(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicInfoTrackConfig(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_3:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataPrimary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSecondary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBms(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataInverter(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSimulator(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBrusa(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataTemporary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataOdometer(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmData(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataBaseline(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicInfoTrackConfig(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_4:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataPrimary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSecondary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBms(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataInverter(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSimulator(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBrusa(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataTemporary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataOdometer(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmData(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataBaseline(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicInfoTrackConfig(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_128:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraDataToLog(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        break;
        
        case Role::role_129:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraDataToLog(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        break;
        
        case Role::role_130:
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        break;
        
        case Role::role_131:
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        break;
    }

    return ret;
}

std::vector<TopicMessage> GetPublishTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId) {
    std::vector<TopicMessage> ret;
    
    switch(role) {
        case Role::role_0:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraDataToLog(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_1:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraDataToLog(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_2:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraDataToLog(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_3:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraDataToLog(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_4:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraDataToLog(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicSimulator(vehicleId));
        ret.emplace_back(GetTopicSimulatorInputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorOutputs(vehicleId));
        ret.emplace_back(GetTopicSimulatorInitialState(vehicleId));
        break;
        
        case Role::role_128:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataPrimary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSecondary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBms(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataInverter(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSimulator(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBrusa(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataTemporary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataOdometer(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmData(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataBaseline(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicInfoTrackConfig(vehicleId, deviceId));
        break;
        
        case Role::role_129:
        ret.emplace_back(GetTopicVehicleId(vehicleId));
        ret.emplace_back(GetTopicDeviceId(vehicleId, deviceId));
        ret.emplace_back(GetTopicDeviceVersion(vehicleId, deviceId));
        ret.emplace_back(GetTopicData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataPrimary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSecondary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBms(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataInverter(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataSimulator(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataBrusa(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataTemporary(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLaps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLast(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLapsLastMetaData(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataOdometer(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLogger(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCan(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGps(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmData(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataBaseline(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId));
        ret.emplace_back(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId));
        ret.emplace_back(GetTopicDataLastUpdate(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusError(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusAlert(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusCanFrequencies(vehicleId, deviceId));
        ret.emplace_back(GetTopicStatusLapCounterStatus(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommands(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionRequest(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransactionResponse(vehicleId, deviceId));
        ret.emplace_back(GetTopicFileTransaction(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId));
        ret.emplace_back(GetTopicInfo(vehicleId, deviceId));
        ret.emplace_back(GetTopicInfoTrackConfig(vehicleId, deviceId));
        break;
        
        case Role::role_130:
        ret.emplace_back(GetTopicAsCommandsSetValues(vehicleId, deviceId));
        ret.emplace_back(GetTopicAsCommandsSetStatus(vehicleId, deviceId));
        break;
        
        case Role::role_131:
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::extra_data_to_log:
            default:
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::extra_data_to_log:
            default:
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::extra_data_to_log:
            default:
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::extra_data_to_log:
            default:
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::extra_data_to_log:
            default:
              return false;
        }
        
        case Role::role_128:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::extra_data_to_log:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
            default:
              return false;
        }
        
        case Role::role_129:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::extra_data_to_log:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
            default:
              return false;
        }
        
        case Role::role_130:
        switch(topic) {
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
              return true;
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
            case Topic::data_temporary:
            case Topic::data_odometer:
            case Topic::extra_data_to_log:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
            default:
              return false;
        }
        
        case Role::role_131:
        switch(topic) {
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::status_lap_counter_status:
              return true;
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_data_to_log:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
            default:
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
            case Topic::extra_data_to_log:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::info_track_config:
             
            default: 
              return false;
        }
        
        case Role::role_1:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::extra_data_to_log:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::info_track_config:
             
            default: 
              return false;
        }
        
        case Role::role_2:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::extra_data_to_log:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::info_track_config:
             
            default: 
              return false;
        }
        
        case Role::role_3:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::extra_data_to_log:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::info_track_config:
             
            default: 
              return false;
        }
        
        case Role::role_4:
        switch(topic) {
            case Topic::vehicle_id:
            case Topic::device_id:
            case Topic::device_version:
            case Topic::extra_data_to_log:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
              return true;
            case Topic::data:
            case Topic::data_primary:
            case Topic::data_secondary:
            case Topic::data_bms:
            case Topic::data_inverter:
            case Topic::data_simulator:
            case Topic::data_gps:
            case Topic::data_brusa:
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::info_track_config:
             
            default: 
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
              return true;
            case Topic::extra_data_to_log:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
             
            default: 
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
              return true;
            case Topic::extra_data_to_log:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
             
            default: 
              return false;
        }
        
        case Role::role_130:
        switch(topic) {
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
              return true;
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_data_to_log:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
             
            default: 
              return false;
        }
        
        case Role::role_131:
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
            case Topic::data_temporary:
            case Topic::data_laps:
            case Topic::data_laps_last:
            case Topic::data_laps_last_meta_data:
            case Topic::data_odometer:
            case Topic::data_camera_logger:
            case Topic::data_camera_logger_can:
            case Topic::data_camera_logger_can_imu_angular_rate:
            case Topic::data_camera_logger_can_imu_acceleration:
            case Topic::data_camera_logger_can_vehicle_position:
            case Topic::data_camera_logger_can_vehicle_speed:
            case Topic::data_camera_logger_can_front_angular_velocity:
            case Topic::data_camera_logger_can_rear_left_angular_velocity:
            case Topic::data_camera_logger_can_rear_right_angular_velocity:
            case Topic::data_camera_logger_can_steer_angle:
            case Topic::data_camera_logger_gps:
            case Topic::data_camera_logger_gps_hpposllh:
            case Topic::data_camera_logger_gps_pvt:
            case Topic::data_camera_logger_gps_relposned:
            case Topic::extra_data_to_log:
            case Topic::extra_tlm_data:
            case Topic::extra_tlm_data_vehicle_state:
            case Topic::extra_tlm_data_baseline:
            case Topic::extra_tlm_data_gps_map_origins:
            case Topic::extra_tlm_data_lap_times:
            case Topic::extra_tlm_data_lap_records:
            case Topic::extra_tlm_data_lap_layout:
            case Topic::data_last_update:
            case Topic::status:
            case Topic::status_info:
            case Topic::status_error:
            case Topic::status_alert:
            case Topic::status_can_frequencies:
            case Topic::status_lap_counter_status:
            case Topic::as_commands:
            case Topic::as_commands_set_values:
            case Topic::as_commands_set_status:
            case Topic::file_transaction_request:
            case Topic::file_transaction_response:
            case Topic::file_transaction:
            case Topic::file_transaction_begin:
            case Topic::file_transaction_end:
            case Topic::file_transaction_chunk:
            case Topic::file_transaction_chunk_ack:
            case Topic::info:
            case Topic::info_track_config:
            case Topic::simulator:
            case Topic::simulator_inputs:
            case Topic::simulator_outputs:
            case Topic::simulator_initial_state:
             
            default: 
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
        case Topic::data_temporary: 
            return GetTopicDataTemporary(vehicleId, deviceId);
        case Topic::data_laps: 
            return GetTopicDataLaps(vehicleId, deviceId);
        case Topic::data_laps_last: 
            return GetTopicDataLapsLast(vehicleId, deviceId);
        case Topic::data_laps_last_meta_data: 
            return GetTopicDataLapsLastMetaData(vehicleId, deviceId);
        case Topic::data_odometer: 
            return GetTopicDataOdometer(vehicleId, deviceId);
        case Topic::data_camera_logger: 
            return GetTopicDataCameraLogger(vehicleId, deviceId);
        case Topic::data_camera_logger_can: 
            return GetTopicDataCameraLoggerCan(vehicleId, deviceId);
        case Topic::data_camera_logger_can_imu_angular_rate: 
            return GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId);
        case Topic::data_camera_logger_can_imu_acceleration: 
            return GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId);
        case Topic::data_camera_logger_can_vehicle_position: 
            return GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId);
        case Topic::data_camera_logger_can_vehicle_speed: 
            return GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId);
        case Topic::data_camera_logger_can_front_angular_velocity: 
            return GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId);
        case Topic::data_camera_logger_can_rear_left_angular_velocity: 
            return GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId);
        case Topic::data_camera_logger_can_rear_right_angular_velocity: 
            return GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId);
        case Topic::data_camera_logger_can_steer_angle: 
            return GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId);
        case Topic::data_camera_logger_gps: 
            return GetTopicDataCameraLoggerGps(vehicleId, deviceId);
        case Topic::data_camera_logger_gps_hpposllh: 
            return GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId);
        case Topic::data_camera_logger_gps_pvt: 
            return GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId);
        case Topic::data_camera_logger_gps_relposned: 
            return GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId);
        case Topic::extra_data_to_log: 
            return GetTopicExtraDataToLog(vehicleId, deviceId);
        case Topic::extra_tlm_data: 
            return GetTopicExtraTlmData(vehicleId, deviceId);
        case Topic::extra_tlm_data_vehicle_state: 
            return GetTopicExtraTlmDataVehicleState(vehicleId, deviceId);
        case Topic::extra_tlm_data_baseline: 
            return GetTopicExtraTlmDataBaseline(vehicleId, deviceId);
        case Topic::extra_tlm_data_gps_map_origins: 
            return GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId);
        case Topic::extra_tlm_data_lap_times: 
            return GetTopicExtraTlmDataLapTimes(vehicleId, deviceId);
        case Topic::extra_tlm_data_lap_records: 
            return GetTopicExtraTlmDataLapRecords(vehicleId, deviceId);
        case Topic::extra_tlm_data_lap_layout: 
            return GetTopicExtraTlmDataLapLayout(vehicleId, deviceId);
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
        case Topic::as_commands: 
            return GetTopicAsCommands(vehicleId, deviceId);
        case Topic::as_commands_set_values: 
            return GetTopicAsCommandsSetValues(vehicleId, deviceId);
        case Topic::as_commands_set_status: 
            return GetTopicAsCommandsSetStatus(vehicleId, deviceId);
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
        case Topic::info: 
            return GetTopicInfo(vehicleId, deviceId);
        case Topic::info_track_config: 
            return GetTopicInfoTrackConfig(vehicleId, deviceId);
        case Topic::simulator: 
            return GetTopicSimulator(vehicleId);
        case Topic::simulator_inputs: 
            return GetTopicSimulatorInputs(vehicleId);
        case Topic::simulator_outputs: 
            return GetTopicSimulatorOutputs(vehicleId);
        case Topic::simulator_initial_state: 
            return GetTopicSimulatorInitialState(vehicleId);
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

TopicMessage GetTopicDataTemporary(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/temporary";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataLaps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/laps";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataLapsLast(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/laps/last";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataLapsLastMetaData(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/laps/last/metaData";
    int qos = 1;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataOdometer(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/odometer";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLogger(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCan(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanImuAngularRate(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/imuAngularRate";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanImuAcceleration(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/imuAcceleration";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanVehiclePosition(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/vehiclePosition";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanVehicleSpeed(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/vehicleSpeed";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanFrontAngularVelocity(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/frontAngularVelocity";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanRearLeftAngularVelocity(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/rearLeftAngularVelocity";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanRearRightAngularVelocity(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/rearRightAngularVelocity";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerCanSteerAngle(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/steerAngle";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGps(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGpsHpposllh(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS/hpposllh";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGpsPvt(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS/pvt";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicDataCameraLoggerGpsRelposned(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS/relposned";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicExtraDataToLog(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_data_to_log";
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

TopicMessage GetTopicExtraTlmDataLapTimes(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/lapTimes";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicExtraTlmDataLapRecords(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/lapRecords";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicExtraTlmDataLapLayout(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/lapLayout";
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

TopicMessage GetTopicAsCommands(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "commands";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicAsCommandsSetValues(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "commands/setValues";
    int qos = 2;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicAsCommandsSetStatus(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "commands/setStatus";
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

TopicMessage GetTopicInfo(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "info";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicInfoTrackConfig(const std::string& vehicleId, const std::string& deviceId) {
    std::string topic = vehicleId + "/" + deviceId + "/" + "info/trackConfig";
    int qos = 0;
    bool retain = true;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicSimulator(const std::string& vehicleId) {
    std::string topic = vehicleId + "/" + "simulator";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicSimulatorInputs(const std::string& vehicleId) {
    std::string topic = vehicleId + "/" + "simulator/inputs";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicSimulatorOutputs(const std::string& vehicleId) {
    std::string topic = vehicleId + "/" + "simulator/outputs";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}

TopicMessage GetTopicSimulatorInitialState(const std::string& vehicleId) {
    std::string topic = vehicleId + "/" + "simulator/initialState";
    int qos = 0;
    bool retain = false;

    return TopicMessage(std::move(topic), qos, retain);
}
}