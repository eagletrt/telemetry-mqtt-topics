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
    role_129 = 6
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
    extra_tlm_data = 11,
    extra_tlm_data_vehicle_state = 12,
    data_last_update = 13,
    status = 14,
    status_info = 15,
    status_error = 16,
    status_alert = 17,
    status_can_frequencies = 18,
    status_lap_counter_status = 19,
    status_lap_counter_laps = 20,
    command = 21,
    command_send = 22,
    command_result = 23,
    command_steer = 24,
    file_transaction_request = 25,
    file_transaction_response = 26,
    file_transaction = 27,
    file_transaction_begin = 28,
    file_transaction_end = 29,
    file_transaction_chunk = 30,
    file_transaction_chunk_ack = 31,
    action = 32,
    action_telemetry_config = 33,
    action_telemetry_config_set = 34,
    action_telemetry_config_get = 35,
    action_telemetry_config_content = 36,
    action_session_config = 37,
    action_session_config_set = 38,
    action_session_config_get = 39,
    action_session_config_content = 40,
    action_car_config = 41,
    action_car_config_set = 42,
    action_car_config_get = 43,
    action_car_config_content = 44,
    action_handcart_settings = 45,
    action_handcart_settings_set = 46,
    action_handcart_settings_get = 47,
    action_handcart_settings_content = 48,
    action_kill = 49,
    action_start = 50,
    action_reset = 51,
    action_stop = 52,
    action_precharge = 53,
    action_balance = 54,
    action_stop_balance = 55,
    action_charge = 56,
    action_stop_charge = 57,
    action_raw = 58,
    action_reset_lap_counter = 59,
    action_set_lap_counter_status = 60
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
TopicMessage GetTopicExtraTlmData(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicExtraTlmDataVehicleState(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicDataLastUpdate(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatus(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusInfo(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusError(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusAlert(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusCanFrequencies(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusLapCounterStatus(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicStatusLapCounterLaps(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicCommand(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicCommandSend(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicCommandResult(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicCommandSteer(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicFileTransactionRequest(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicFileTransactionResponse(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicFileTransaction(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionBegin(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionEnd(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionChunk(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
TopicMessage GetTopicFileTransactionChunkAck(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
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
TopicMessage GetTopicActionHandcartSettings(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionHandcartSettingsSet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionHandcartSettingsGet(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionHandcartSettingsContent(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionKill(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStart(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionReset(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStop(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionPrecharge(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionBalance(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStopBalance(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionCharge(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionStopCharge(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionRaw(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionResetLapCounter(const std::string& vehicleId, const std::string& deviceId);
TopicMessage GetTopicActionSetLapCounterStatus(const std::string& vehicleId, const std::string& deviceId);
}

#endif