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
    data_rtcm = 10,
    data_rtcm_ref = 11,
    data_brusa = 12,
    data_temporary = 13,
    data_laps = 14,
    data_laps_last = 15,
    data_laps_last_meta_data = 16,
    data_odometer = 17,
    data_camera_logger = 18,
    data_camera_logger_can = 19,
    data_camera_logger_can_imu_angular_rate = 20,
    data_camera_logger_can_imu_acceleration = 21,
    data_camera_logger_can_vehicle_position = 22,
    data_camera_logger_can_vehicle_speed = 23,
    data_camera_logger_can_front_angular_velocity = 24,
    data_camera_logger_can_rear_left_angular_velocity = 25,
    data_camera_logger_can_rear_right_angular_velocity = 26,
    data_camera_logger_can_steer_angle = 27,
    data_camera_logger_gps = 28,
    data_camera_logger_gps_hpposllh = 29,
    data_camera_logger_gps_pvt = 30,
    data_camera_logger_gps_relposned = 31,
    extra_data_to_log = 32,
    extra_tlm_data = 33,
    extra_tlm_data_vehicle_state = 34,
    extra_tlm_data_baseline = 35,
    extra_tlm_data_gps_map_origins = 36,
    extra_tlm_data_lap_times = 37,
    extra_tlm_data_lap_records = 38,
    extra_tlm_data_lap_layout = 39,
    data_last_update = 40,
    status = 41,
    status_info = 42,
    status_error = 43,
    status_alert = 44,
    status_can_frequencies = 45,
    status_ntrip_base = 46,
    status_rtcm_source = 47,
    status_lap_counter_status = 48,
    status_mongo_manager_status = 49,
    as_commands = 50,
    as_commands_set_values = 51,
    as_commands_set_status = 52,
    file_transaction_request = 53,
    file_transaction_response = 54,
    file_transaction = 55,
    file_transaction_begin = 56,
    file_transaction_end = 57,
    file_transaction_chunk = 58,
    file_transaction_chunk_ack = 59,
    info = 60,
    info_track_config = 61,
    info_version = 62,
    info_version_libcan = 63,
    info_version_serializers = 64,
    info_version_mqtt_topics = 65,
    info_version_gpslib = 66,
    info_version_libcommunications = 67,
    info_user = 68,
    info_telemetry_replay = 69,
    info_telemetry_replay_ready = 70,
    info_telemetry_replay_start = 71,
    info_session = 72,
    info_session_started = 73,
    info_session_stopped = 74,
    info_session_keepalive = 75,
    info_new_lap = 76,
    action = 77,
    action_telemetry_config = 78,
    action_telemetry_config_set = 79,
    action_telemetry_config_get = 80,
    action_telemetry_config_content = 81,
    action_session_config = 82,
    action_session_config_set = 83,
    action_session_config_get = 84,
    action_session_config_content = 85,
    action_car_config = 86,
    action_car_config_set = 87,
    action_car_config_get = 88,
    action_car_config_content = 89,
    action_baseline_config = 90,
    action_baseline_config_set = 91,
    action_baseline_config_get = 92,
    action_baseline_config_content = 93,
    action_handcart_settings = 94,
    action_handcart_settings_set = 95,
    action_handcart_settings_get = 96,
    action_handcart_settings_content = 97,
    raw_json_config = 98,
    raw_json_config_set = 99,
    raw_json_config_get = 100,
    raw_json_config_content = 101,
    action_lap_counter_config = 102,
    action_lap_counter_config_set = 103,
    action_lap_counter_config_get = 104,
    action_lap_counter_config_content = 105,
    action_ntrip_base_config = 106,
    action_ntrip_base_config_set = 107,
    action_ntrip_base_config_get = 108,
    action_ntrip_base_config_content = 109,
    action_rtcm_source = 110,
    action_rtcm_source_set = 111,
    action_lap_counter_track = 112,
    action_lap_counter_track_set = 113,
    action_lap_counter_track_get = 114,
    action_lap_counter_track_content = 115,
    action_kill = 116,
    action_start = 117,
    action_reset = 118,
    action_stop = 119,
    action_start_baseline = 120,
    action_stop_baseline = 121,
    action_precharge = 122,
    action_balance = 123,
    action_stop_balance = 124,
    action_charge = 125,
    action_stop_charge = 126,
    action_raw = 127,
    action_reset_lap_counter = 128,
    action_can_send = 129,
    action_can_send_content = 130,
    query_plain = 131,
    query = 132,
    query_influx_status = 133,
    query_influx_data = 134,
    query_influx_data_get = 135,
    query_influx_data_set = 136,
    query_influx_data_content = 137,
    query_session_by_year_month = 138,
    query_session_by_year_month_get = 139,
    query_session_by_year_month_content = 140,
    query_session_by_day_range = 141,
    query_session_by_day_range_get = 142,
    query_session_by_day_range_content = 143,
    query_track_by_session = 144,
    query_track_by_session_get = 145,
    query_track_by_session_content = 146,
    query_lap_counter_layouts = 147,
    query_lap_counter_layouts_get = 148,
    query_lap_counter_layouts_set = 149,
    query_lap_counter_layouts_content = 150,
    query_lap_counter_times = 151,
    query_lap_counter_times_get = 152,
    query_lap_counter_times_set = 153,
    query_lap_counter_times_content = 154,
    query_lap_counter_lap_records = 155,
    query_lap_counter_lap_records_get = 156,
    query_lap_counter_lap_records_set = 157,
    query_lap_counter_lap_records_content = 158,
    query_gps_origins = 159,
    query_gps_origins_get = 160,
    query_gps_origins_set = 161,
    query_gps_origins_content = 162,
    query_baseline = 163,
    query_baseline_get = 164,
    query_baseline_set = 165,
    query_baseline_content = 166,
    query_custom_plots = 167,
    query_custom_plots_get = 168,
    query_custom_plots_set = 169,
    query_custom_plots_content = 170
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
TopicMessage GetTopicDataRtcm(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataRtcmRef(const std::string& vehicleId, const std::string& deviceId);
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
TopicMessage GetTopicStatusNtripBase(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusRtcmSource(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusLapCounterStatus(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusMongoManagerStatus(const std::string& vehicleId, const std::string& deviceId);
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
TopicMessage GetTopicInfoTrackConfig(const std::string& vehicleId, const std::string& deviceId);
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
TopicMessage GetTopicActionNtripBaseConfig(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionNtripBaseConfigSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionNtripBaseConfigGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionNtripBaseConfigContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionRtcmSource(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionRtcmSourceSet(const std::string& vehicleId, const std::string& deviceId);
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
TopicMessage GetTopicActionCanSend(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionCanSendContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicQueryPlain(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicQuery(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryInfluxStatus(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryInfluxData(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryInfluxDataGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryInfluxDataSet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryInfluxDataContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQuerySessionByYearMonth(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQuerySessionByYearMonthGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQuerySessionByYearMonthContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQuerySessionByDayRange(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQuerySessionByDayRangeGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQuerySessionByDayRangeContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryTrackBySession(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryTrackBySessionGet(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicQueryTrackBySessionContent(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
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