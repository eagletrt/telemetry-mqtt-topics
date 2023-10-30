#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

#include <vector>
#include <string>

namespace MQTTTopics
{
enum class Roles 
{
    ROLE_0 = 0,
    ROLE_1 = 1,
    ROLE_2 = 2,
    ROLE_3 = 3,
    ROLE_4 = 4,
    ROLE_128 = 5,
    ROLE_129 = 6
};

enum class Topics
{
    VEHICLE_ID = 0,
    DEVICE_ID = 1,
    DATA = 2,
    DATA_LAST_UPDATE = 3,
    DATA_PRIMARY = 4,
    DATA_SECONDARY = 5,
    DATA_BMS = 6,
    DATA_INVERTER = 7,
    DATA_SIMULATOR = 8,
    DATA_GPS = 9,
    DATA_BRUSA = 10,
    STATUS = 11,
    STATUS_INFO = 12,
    STATUS_ERROR = 13,
    STATUS_ALERT = 14,
    STATUS_CAN_FREQUENCIES = 15,
    STATUS_LAP_COUNTER_STATUS = 16,
    STATUS_LAP_COUNTER_LAPS = 17,
    COMMAND = 18,
    COMMAND_SEND = 19,
    COMMAND_RESULT = 20,
    FILE_TRANSACTION_REQUEST = 21,
    FILE_TRANSACTION_RESPONSE = 22,
    FILE_TRANSACTION = 23,
    FILE_TRANSACTION_BEGIN = 24,
    FILE_TRANSACTION_END = 25,
    FILE_TRANSACTION_CHUNK = 26,
    FILE_TRANSACTION_CHUNK_ACK = 27,
    ACTION = 28,
    ACTION_TELEMETRY_CONFIG = 29,
    ACTION_TELEMETRY_CONFIG_SET = 30,
    ACTION_TELEMETRY_CONFIG_GET = 31,
    ACTION_TELEMETRY_CONFIG_CONTENT = 32,
    ACTION_SESSION_CONFIG = 33,
    ACTION_SESSION_CONFIG_SET = 34,
    ACTION_SESSION_CONFIG_GET = 35,
    ACTION_SESSION_CONFIG_CONTENT = 36,
    ACTION_CAR_CONFIG = 37,
    ACTION_CAR_CONFIG_SET = 38,
    ACTION_CAR_CONFIG_GET = 39,
    ACTION_CAR_CONFIG_CONTENT = 40,
    ACTION_HANDCART_SETTINGS = 41,
    ACTION_HANDCART_SETTINGS_SET = 42,
    ACTION_HANDCART_SETTINGS_GET = 43,
    ACTION_HANDCART_SETTINGS_CONTENT = 44,
    ACTION_KILL = 45,
    ACTION_START = 46,
    ACTION_RESET = 47,
    ACTION_STOP = 48,
    ACTION_PRECHARGE = 49,
    ACTION_BALANCE = 50,
    ACTION_STOP_BALANCE = 51,
    ACTION_CHARGE = 52,
    ACTION_STOP_CHARGE = 53,
    ACTION_RAW = 54,
    ACTION_RESET_LAP_COUNTER = 55,
    ACTION_SET_LAP_COUNTER_STATUS = 56,
    TOPICS_COUNT = 57
};

struct Topic
{
    std::string topic;
    int qos;
    bool retain;
};

std::vector<Topic> GetSubscribeTopics(Roles role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
std::vector<Topic> GetPublishTopics(Roles role, const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);

bool CanSubscribe(Roles role, Topics topic);
bool CanPublish(Roles role, Topics topic);

Topic GetTopicVehicleId(const std::string& vehicleId);
Topic GetTopicDeviceId(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicData(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataLastUpdate(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataPrimary(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataSecondary(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataBms(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataInverter(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataSimulator(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataGps(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicDataBrusa(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicStatus(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicStatusInfo(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicStatusError(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicStatusAlert(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicStatusCanFrequencies(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicStatusLapCounterStatus(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicStatusLapCounterLaps(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicCommand(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicCommandSend(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicCommandResult(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicFileTransactionRequest(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicFileTransactionResponse(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicFileTransaction(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
Topic GetTopicFileTransactionBegin(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
Topic GetTopicFileTransactionEnd(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
Topic GetTopicFileTransactionChunk(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
Topic GetTopicFileTransactionChunkAck(const std::string& vehicleId, const std::string& deviceId, const std::string& transactionId);
Topic GetTopicAction(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionTelemetryConfig(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionTelemetryConfigSet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionTelemetryConfigGet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionTelemetryConfigContent(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionSessionConfig(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionSessionConfigSet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionSessionConfigGet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionSessionConfigContent(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionCarConfig(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionCarConfigSet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionCarConfigGet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionCarConfigContent(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionHandcartSettings(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionHandcartSettingsSet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionHandcartSettingsGet(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionHandcartSettingsContent(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionKill(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionStart(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionReset(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionStop(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionPrecharge(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionBalance(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionStopBalance(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionCharge(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionStopCharge(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionRaw(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionResetLapCounter(const std::string& vehicleId, const std::string& deviceId);
Topic GetTopicActionSetLapCounterStatus(const std::string& vehicleId, const std::string& deviceId);
}

#endif