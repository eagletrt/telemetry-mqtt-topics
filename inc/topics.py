from enum import Enum, auto

class Role(Enum):
    role_0 = 0,
    role_1 = 1,
    role_2 = 2,
    role_3 = 3,
    role_4 = 4,
    role_128 = 5,
    role_129 = 6,
    role_130 = 7,
    role_131 = 8

class Topic(Enum):
    vehicle_id = auto(),
    device_id = auto(),
    device_version = auto(),
    data = auto(),
    data_primary = auto(),
    data_secondary = auto(),
    data_bms = auto(),
    data_inverter = auto(),
    data_simulator = auto(),
    data_gps = auto(),
    data_brusa = auto(),
    data_temporary = auto(),
    data_laps = auto(),
    data_laps_last = auto(),
    data_laps_last_meta_data = auto(),
    data_odometer = auto(),
    data_camera_logger = auto(),
    data_camera_logger_can = auto(),
    data_camera_logger_can_imu_angular_rate = auto(),
    data_camera_logger_can_imu_acceleration = auto(),
    data_camera_logger_can_vehicle_position = auto(),
    data_camera_logger_can_vehicle_speed = auto(),
    data_camera_logger_can_front_angular_velocity = auto(),
    data_camera_logger_can_rear_left_angular_velocity = auto(),
    data_camera_logger_can_rear_right_angular_velocity = auto(),
    data_camera_logger_can_steer_angle = auto(),
    data_camera_logger_gps = auto(),
    data_camera_logger_gps_hpposllh = auto(),
    data_camera_logger_gps_pvt = auto(),
    data_camera_logger_gps_relposned = auto(),
    extra_data_to_log = auto(),
    extra_tlm_data = auto(),
    extra_tlm_data_vehicle_state = auto(),
    extra_tlm_data_baseline = auto(),
    extra_tlm_data_gps_map_origins = auto(),
    extra_tlm_data_lap_times = auto(),
    extra_tlm_data_lap_records = auto(),
    extra_tlm_data_lap_layout = auto(),
    data_last_update = auto(),
    status = auto(),
    status_info = auto(),
    status_error = auto(),
    status_alert = auto(),
    status_can_frequencies = auto(),
    status_lap_counter_status = auto(),
    as_commands = auto(),
    as_commands_set_values = auto(),
    as_commands_set_status = auto(),
    file_transaction_request = auto(),
    file_transaction_response = auto(),
    file_transaction = auto(),
    file_transaction_begin = auto(),
    file_transaction_end = auto(),
    file_transaction_chunk = auto(),
    file_transaction_chunk_ack = auto(),
    info = auto(),
    info_track_config = auto(),
    simulator = auto(),
    simulator_inputs = auto(),
    simulator_outputs = auto(),
    simulator_initial_state = auto()



def GetTopicVehicleId(vehicleId):
    topic = vehicleId
    return topic

def GetTopicDeviceId(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId
    return topic

def GetTopicDeviceVersion(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "version"
    return topic

def GetTopicData(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data"
    return topic

def GetTopicDataPrimary(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/primary"
    return topic

def GetTopicDataSecondary(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/secondary"
    return topic

def GetTopicDataBms(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/bms"
    return topic

def GetTopicDataInverter(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/inverters"
    return topic

def GetTopicDataSimulator(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/simulator"
    return topic

def GetTopicDataGps(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/gps"
    return topic

def GetTopicDataBrusa(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/brusa"
    return topic

def GetTopicDataTemporary(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/temporary"
    return topic

def GetTopicDataLaps(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/laps"
    return topic

def GetTopicDataLapsLast(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/laps/last"
    return topic

def GetTopicDataLapsLastMetaData(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/laps/last/metaData"
    return topic

def GetTopicDataOdometer(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/odometer"
    return topic

def GetTopicDataCameraLogger(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger"
    return topic

def GetTopicDataCameraLoggerCan(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can"
    return topic

def GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/imuAngularRate"
    return topic

def GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/imuAcceleration"
    return topic

def GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/vehiclePosition"
    return topic

def GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/vehicleSpeed"
    return topic

def GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/frontAngularVelocity"
    return topic

def GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/rearLeftAngularVelocity"
    return topic

def GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/rearRightAngularVelocity"
    return topic

def GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/can/steerAngle"
    return topic

def GetTopicDataCameraLoggerGps(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS"
    return topic

def GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS/hpposllh"
    return topic

def GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS/pvt"
    return topic

def GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "data/cameraLogger/GPS/relposned"
    return topic

def GetTopicExtraDataToLog(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_data_to_log"
    return topic

def GetTopicExtraTlmData(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data"
    return topic

def GetTopicExtraTlmDataVehicleState(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/vehicleState"
    return topic

def GetTopicExtraTlmDataBaseline(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/baseline"
    return topic

def GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/gpsMapOrigins"
    return topic

def GetTopicExtraTlmDataLapTimes(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/lapTimes"
    return topic

def GetTopicExtraTlmDataLapRecords(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/lapRecords"
    return topic

def GetTopicExtraTlmDataLapLayout(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "extra_tlm_data/lapLayout"
    return topic

def GetTopicDataLastUpdate(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "last_update"
    return topic

def GetTopicStatus(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "status"
    return topic

def GetTopicStatusInfo(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "status/info"
    return topic

def GetTopicStatusError(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "status/error"
    return topic

def GetTopicStatusAlert(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "status/alert"
    return topic

def GetTopicStatusCanFrequencies(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "status/canFrequencies"
    return topic

def GetTopicStatusLapCounterStatus(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "status/lapCounterStatus"
    return topic

def GetTopicAsCommands(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "commands"
    return topic

def GetTopicAsCommandsSetValues(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "commands/setValues"
    return topic

def GetTopicAsCommandsSetStatus(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "commands/setStatus"
    return topic

def GetTopicFileTransactionRequest(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/request"
    return topic

def GetTopicFileTransactionResponse(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "fileTransaction/response"
    return topic

def GetTopicFileTransaction(vehicleId, deviceId, transactionId):
    topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId
    return topic

def GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId):
    topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "begin"
    return topic

def GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId):
    topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "end"
    return topic

def GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId):
    topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk"
    return topic

def GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId):
    topic = vehicleId + "/" + deviceId + "/" + "fileTransaction" + "/" + transactionId + "/" + "chunk_ack"
    return topic

def GetTopicInfo(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "info"
    return topic

def GetTopicInfoTrackConfig(vehicleId, deviceId):
    topic = vehicleId + "/" + deviceId + "/" + "info/trackConfig"
    return topic

def GetTopicSimulator(vehicleId):
    topic = vehicleId + "/" + "simulator"
    return topic

def GetTopicSimulatorInputs(vehicleId):
    topic = vehicleId + "/" + "simulator/inputs"
    return topic

def GetTopicSimulatorOutputs(vehicleId):
    topic = vehicleId + "/" + "simulator/outputs"
    return topic

def GetTopicSimulatorInitialState(vehicleId):
    topic = vehicleId + "/" + "simulator/initialState"
    return topic
def GetSubscribeTopics(role, vehicleId, deviceId, transactionId):
    ret = []

    match role:
        case Role.role_0:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicData(vehicleId, deviceId))
            ret.append(GetTopicDataPrimary(vehicleId, deviceId))
            ret.append(GetTopicDataSecondary(vehicleId, deviceId))
            ret.append(GetTopicDataBms(vehicleId, deviceId))
            ret.append(GetTopicDataInverter(vehicleId, deviceId))
            ret.append(GetTopicDataSimulator(vehicleId, deviceId))
            ret.append(GetTopicDataGps(vehicleId, deviceId))
            ret.append(GetTopicDataBrusa(vehicleId, deviceId))
            ret.append(GetTopicDataTemporary(vehicleId, deviceId))
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataOdometer(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmData(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataBaseline(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicInfoTrackConfig(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_1:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicData(vehicleId, deviceId))
            ret.append(GetTopicDataPrimary(vehicleId, deviceId))
            ret.append(GetTopicDataSecondary(vehicleId, deviceId))
            ret.append(GetTopicDataBms(vehicleId, deviceId))
            ret.append(GetTopicDataInverter(vehicleId, deviceId))
            ret.append(GetTopicDataSimulator(vehicleId, deviceId))
            ret.append(GetTopicDataGps(vehicleId, deviceId))
            ret.append(GetTopicDataBrusa(vehicleId, deviceId))
            ret.append(GetTopicDataTemporary(vehicleId, deviceId))
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataOdometer(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmData(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataBaseline(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicInfoTrackConfig(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_2:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicData(vehicleId, deviceId))
            ret.append(GetTopicDataPrimary(vehicleId, deviceId))
            ret.append(GetTopicDataSecondary(vehicleId, deviceId))
            ret.append(GetTopicDataBms(vehicleId, deviceId))
            ret.append(GetTopicDataInverter(vehicleId, deviceId))
            ret.append(GetTopicDataSimulator(vehicleId, deviceId))
            ret.append(GetTopicDataGps(vehicleId, deviceId))
            ret.append(GetTopicDataBrusa(vehicleId, deviceId))
            ret.append(GetTopicDataTemporary(vehicleId, deviceId))
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataOdometer(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmData(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataBaseline(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicInfoTrackConfig(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_3:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicData(vehicleId, deviceId))
            ret.append(GetTopicDataPrimary(vehicleId, deviceId))
            ret.append(GetTopicDataSecondary(vehicleId, deviceId))
            ret.append(GetTopicDataBms(vehicleId, deviceId))
            ret.append(GetTopicDataInverter(vehicleId, deviceId))
            ret.append(GetTopicDataSimulator(vehicleId, deviceId))
            ret.append(GetTopicDataGps(vehicleId, deviceId))
            ret.append(GetTopicDataBrusa(vehicleId, deviceId))
            ret.append(GetTopicDataTemporary(vehicleId, deviceId))
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataOdometer(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmData(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataBaseline(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicInfoTrackConfig(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_4:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicData(vehicleId, deviceId))
            ret.append(GetTopicDataPrimary(vehicleId, deviceId))
            ret.append(GetTopicDataSecondary(vehicleId, deviceId))
            ret.append(GetTopicDataBms(vehicleId, deviceId))
            ret.append(GetTopicDataInverter(vehicleId, deviceId))
            ret.append(GetTopicDataSimulator(vehicleId, deviceId))
            ret.append(GetTopicDataGps(vehicleId, deviceId))
            ret.append(GetTopicDataBrusa(vehicleId, deviceId))
            ret.append(GetTopicDataTemporary(vehicleId, deviceId))
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataOdometer(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmData(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataBaseline(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicInfoTrackConfig(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_128:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicExtraDataToLog(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            return ret
            
        case Role.role_129:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicExtraDataToLog(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            return ret
            
        case Role.role_130:
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            return ret
            
        case Role.role_131:
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            return ret

def GetPublishTopics(role, vehicleId, deviceId, transactionId):
    ret = []

    match role:
        case Role.role_0:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicExtraDataToLog(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_1:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicExtraDataToLog(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_2:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicExtraDataToLog(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_3:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicExtraDataToLog(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_4:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicExtraDataToLog(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicSimulator(vehicleId))
            ret.append(GetTopicSimulatorInputs(vehicleId))
            ret.append(GetTopicSimulatorOutputs(vehicleId))
            ret.append(GetTopicSimulatorInitialState(vehicleId))
            return ret
            
        case Role.role_128:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicData(vehicleId, deviceId))
            ret.append(GetTopicDataPrimary(vehicleId, deviceId))
            ret.append(GetTopicDataSecondary(vehicleId, deviceId))
            ret.append(GetTopicDataBms(vehicleId, deviceId))
            ret.append(GetTopicDataInverter(vehicleId, deviceId))
            ret.append(GetTopicDataSimulator(vehicleId, deviceId))
            ret.append(GetTopicDataGps(vehicleId, deviceId))
            ret.append(GetTopicDataBrusa(vehicleId, deviceId))
            ret.append(GetTopicDataTemporary(vehicleId, deviceId))
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataOdometer(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmData(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataBaseline(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicInfoTrackConfig(vehicleId, deviceId))
            return ret
            
        case Role.role_129:
            ret.append(GetTopicVehicleId(vehicleId))
            ret.append(GetTopicDeviceId(vehicleId, deviceId))
            ret.append(GetTopicDeviceVersion(vehicleId, deviceId))
            ret.append(GetTopicData(vehicleId, deviceId))
            ret.append(GetTopicDataPrimary(vehicleId, deviceId))
            ret.append(GetTopicDataSecondary(vehicleId, deviceId))
            ret.append(GetTopicDataBms(vehicleId, deviceId))
            ret.append(GetTopicDataInverter(vehicleId, deviceId))
            ret.append(GetTopicDataSimulator(vehicleId, deviceId))
            ret.append(GetTopicDataGps(vehicleId, deviceId))
            ret.append(GetTopicDataBrusa(vehicleId, deviceId))
            ret.append(GetTopicDataTemporary(vehicleId, deviceId))
            ret.append(GetTopicDataLaps(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLast(vehicleId, deviceId))
            ret.append(GetTopicDataLapsLastMetaData(vehicleId, deviceId))
            ret.append(GetTopicDataOdometer(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLogger(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCan(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAngularRate(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanImuAcceleration(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehiclePosition(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanVehicleSpeed(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanFrontAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearLeftAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanRearRightAngularVelocity(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerCanSteerAngle(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGps(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsHpposllh(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsPvt(vehicleId, deviceId))
            ret.append(GetTopicDataCameraLoggerGpsRelposned(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmData(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataVehicleState(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataBaseline(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataGpsMapOrigins(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapTimes(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapRecords(vehicleId, deviceId))
            ret.append(GetTopicExtraTlmDataLapLayout(vehicleId, deviceId))
            ret.append(GetTopicDataLastUpdate(vehicleId, deviceId))
            ret.append(GetTopicStatus(vehicleId, deviceId))
            ret.append(GetTopicStatusInfo(vehicleId, deviceId))
            ret.append(GetTopicStatusError(vehicleId, deviceId))
            ret.append(GetTopicStatusAlert(vehicleId, deviceId))
            ret.append(GetTopicStatusCanFrequencies(vehicleId, deviceId))
            ret.append(GetTopicStatusLapCounterStatus(vehicleId, deviceId))
            ret.append(GetTopicAsCommands(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionRequest(vehicleId, deviceId))
            ret.append(GetTopicFileTransactionResponse(vehicleId, deviceId))
            ret.append(GetTopicFileTransaction(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionBegin(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionEnd(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunk(vehicleId, deviceId, transactionId))
            ret.append(GetTopicFileTransactionChunkAck(vehicleId, deviceId, transactionId))
            ret.append(GetTopicInfo(vehicleId, deviceId))
            ret.append(GetTopicInfoTrackConfig(vehicleId, deviceId))
            return ret
            
        case Role.role_130:
            ret.append(GetTopicAsCommandsSetValues(vehicleId, deviceId))
            ret.append(GetTopicAsCommandsSetStatus(vehicleId, deviceId))
            return ret
            
        case Role.role_131:
            return ret