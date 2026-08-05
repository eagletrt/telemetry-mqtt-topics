#ifndef MQTT_TOPICS_TOPICS_H
#define MQTT_TOPICS_TOPICS_H

#include <vector>
#include <string>

namespace MQTTTopics
{
enum class Role 
{
    role_0 = 0,
    role_1 = 1,
    role_2 = 2,
    role_3 = 3,
    role_4 = 4,
    role_128 = 5,
    role_129 = 6,
    role_130 = 7,
    role_131 = 8
};

enum class Topic
{
    vehicle_id = 0,
    device_id = 1,
    device_version = 2,
    data = 3,
    data_primary = 4,
    data_secondary = 5,
    data_bms = 6,
    data_inverter = 7,
    data_simulator = 8,
    data_gps = 9,
    data_brusa = 10,
    data_temporary = 11,
    data_laps = 12,
    data_laps_last = 13,
    data_laps_last_meta_data = 14,
    data_odometer = 15,
    data_camera_logger = 16,
    data_camera_logger_can = 17,
    data_camera_logger_can_imu_angular_rate = 18,
    data_camera_logger_can_imu_acceleration = 19,
    data_camera_logger_can_vehicle_position = 20,
    data_camera_logger_can_vehicle_speed = 21,
    data_camera_logger_can_front_angular_velocity = 22,
    data_camera_logger_can_rear_left_angular_velocity = 23,
    data_camera_logger_can_rear_right_angular_velocity = 24,
    data_camera_logger_can_steer_angle = 25,
    data_camera_logger_gps = 26,
    data_camera_logger_gps_hpposllh = 27,
    data_camera_logger_gps_pvt = 28,
    data_camera_logger_gps_relposned = 29,
    extra_data_to_log = 30,
    extra_tlm_data = 31,
    extra_tlm_data_vehicle_state = 32,
    extra_tlm_data_baseline = 33,
    extra_tlm_data_gps_map_origins = 34,
    extra_tlm_data_lap_times = 35,
    extra_tlm_data_lap_records = 36,
    extra_tlm_data_lap_layout = 37,
    data_last_update = 38,
    status = 39,
    status_info = 40,
    status_error = 41,
    status_alert = 42,
    status_can_frequencies = 43,
    status_lap_counter_status = 44,
    as_commands = 45,
    as_commands_set_values = 46,
    as_commands_set_status = 47,
    file_transaction_request = 48,
    file_transaction_response = 49,
    file_transaction = 50,
    file_transaction_begin = 51,
    file_transaction_end = 52,
    file_transaction_chunk = 53,
    file_transaction_chunk_ack = 54,
    info = 55,
    info_version = 56,
    info_version_libcan = 57,
    info_version_serializers = 58,
    info_version_mqtt_topics = 59,
    info_version_gpslib = 60,
    info_version_libcommunications = 61,
    info_user = 62,
    info_telemetry_replay = 63,
    info_telemetry_replay_ready = 64,
    info_telemetry_replay_start = 65,
    info_session = 66,
    info_session_started = 67,
    info_session_stopped = 68,
    info_session_keepalive = 69,
    info_new_lap = 70,
    action = 71,
    action_telemetry_config = 72,
    action_telemetry_config_set = 73,
    action_telemetry_config_get = 74,
    action_telemetry_config_content = 75,
    action_session_config = 76,
    action_session_config_set = 77,
    action_session_config_get = 78,
    action_session_config_content = 79,
    action_car_config = 80,
    action_car_config_set = 81,
    action_car_config_get = 82,
    action_car_config_content = 83,
    action_baseline_config = 84,
    action_baseline_config_set = 85,
    action_baseline_config_get = 86,
    action_baseline_config_content = 87,
    action_handcart_settings = 88,
    action_handcart_settings_set = 89,
    action_handcart_settings_get = 90,
    action_handcart_settings_content = 91,
    raw_json_config = 92,
    raw_json_config_set = 93,
    raw_json_config_get = 94,
    raw_json_config_content = 95,
    action_lap_counter_config = 96,
    action_lap_counter_config_set = 97,
    action_lap_counter_config_get = 98,
    action_lap_counter_config_content = 99,
    action_lap_counter_track = 100,
    action_lap_counter_track_set = 101,
    action_lap_counter_track_get = 102,
    action_lap_counter_track_content = 103,
    action_kill = 104,
    action_start = 105,
    action_reset = 106,
    action_stop = 107,
    action_start_baseline = 108,
    action_stop_baseline = 109,
    action_precharge = 110,
    action_balance = 111,
    action_stop_balance = 112,
    action_charge = 113,
    action_stop_charge = 114,
    action_raw = 115,
    action_reset_lap_counter = 116,
    query = 117,
    query_lap_counter_layouts = 118,
    query_lap_counter_layouts_get = 119,
    query_lap_counter_layouts_set = 120,
    query_lap_counter_layouts_content = 121,
    query_lap_counter_times = 122,
    query_lap_counter_times_get = 123,
    query_lap_counter_times_set = 124,
    query_lap_counter_times_content = 125,
    query_lap_counter_lap_records = 126,
    query_lap_counter_lap_records_get = 127,
    query_lap_counter_lap_records_set = 128,
    query_lap_counter_lap_records_content = 129,
    query_gps_origins = 130,
    query_gps_origins_get = 131,
    query_gps_origins_set = 132,
    query_gps_origins_content = 133,
    query_baseline = 134,
    query_baseline_get = 135,
    query_baseline_set = 136,
    query_baseline_content = 137,
    query_custom_plots = 138,
    query_custom_plots_get = 139,
    query_custom_plots_set = 140,
    query_custom_plots_content = 141
};

struct TopicMessage
{
    TopicMessage(std::string&& topic, int qos, bool retain);

    std::string topic;
    int qos;
    bool retain;
};

std::vector<TopicMessage> GetSubscribeTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
std::vector<TopicMessage> GetPublishTopics(Role role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);

bool CanSubscribe(Role role, Topic topic);
bool CanPublish(Role role, Topic topic);

TopicMessage GetTopic(Topic topic, const std::string& vehicleId = "<vehicleId>", const std::string& deviceId = "<deviceId>", const std::string& transactionId = "<transactionId>");
TopicMessage GetTopicVehicleId(const std::string& vehicleId);
TopicMessage GetTopicDeviceId(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDeviceVersion(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicData(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataPrimary(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataSecondary(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataBms(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataInverter(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataSimulator(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataGps(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataBrusa(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataTemporary(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataLaps(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataLapsLast(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataLapsLastMetaData(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataOdometer(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLogger(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCan(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanImuAngularRate(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanImuAcceleration(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanVehiclePosition(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanVehicleSpeed(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanFrontAngularVelocity(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanRearLeftAngularVelocity(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanRearRightAngularVelocity(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerCanSteerAngle(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerGps(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerGpsHpposllh(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerGpsPvt(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataCameraLoggerGpsRelposned(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraDataToLog(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmData(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmDataVehicleState(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmDataBaseline(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmDataGpsMapOrigins(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmDataLapTimes(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmDataLapRecords(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmDataLapLayout(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataLastUpdate(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatus(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusInfo(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusError(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusAlert(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusCanFrequencies(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusLapCounterStatus(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicAsCommands(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicAsCommandsSetValues(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicAsCommandsSetStatus(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicFileTransactionRequest(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicFileTransactionResponse(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicFileTransaction(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionBegin(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionEnd(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionChunk(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionChunkAck(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicInfo(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoVersion(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoVersionLibcan(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoVersionSerializers(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoVersionMqttTopics(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoVersionGpslib(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoVersionLibcommunications(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoUser(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoTelemetryReplay(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoTelemetryReplayReady(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoTelemetryReplayStart(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoSession(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoSessionStarted(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoSessionStopped(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoSessionKeepalive(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicInfoNewLap(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicAction(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionTelemetryConfig(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionTelemetryConfigSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionTelemetryConfigGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionTelemetryConfigContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionSessionConfig(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionSessionConfigSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionSessionConfigGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionSessionConfigContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionCarConfig(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionCarConfigSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionCarConfigGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionCarConfigContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionBaselineConfig(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionBaselineConfigSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionBaselineConfigGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionBaselineConfigContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionHandcartSettings(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionHandcartSettingsSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionHandcartSettingsGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionHandcartSettingsContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicRawJsonConfig(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicRawJsonConfigSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicRawJsonConfigGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicRawJsonConfigContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterConfig(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterConfigSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterConfigGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterConfigContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterTrack(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterTrackSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterTrackGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionLapCounterTrackContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionKill(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStart(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionReset(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStop(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStartBaseline(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStopBaseline(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionPrecharge(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionBalance(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStopBalance(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionCharge(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStopCharge(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionRaw(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionResetLapCounter(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicQuery(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLayouts(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLayoutsGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLayoutsSet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLayoutsContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterTimes(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterTimesGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterTimesSet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterTimesContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLapRecords(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLapRecordsGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLapRecordsSet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryLapCounterLapRecordsContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryGpsOrigins(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryGpsOriginsGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryGpsOriginsSet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryGpsOriginsContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryBaseline(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryBaselineGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryBaselineSet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryBaselineContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryCustomPlots(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryCustomPlotsGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryCustomPlotsSet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryCustomPlotsContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
}

#endif