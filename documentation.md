# Topics

## VehicleIdTopic
### &lt;vehicleId>
> &lt;vehicleId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)

## DeviceIdTopic
### &lt;vehicleId>/&lt;deviceId>
> &lt;vehicleId>/&lt;deviceId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataTopic
### &lt;vehicleId>/&lt;deviceId>/data
> &lt;vehicleId>/&lt;deviceId>/data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataPrimaryTopic
### &lt;vehicleId>/&lt;deviceId>/data/primary
> &lt;vehicleId>/&lt;deviceId>/data/primary
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataSecondaryTopic
### &lt;vehicleId>/&lt;deviceId>/data/secondary
> &lt;vehicleId>/&lt;deviceId>/data/secondary
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataInverterTopic
### &lt;vehicleId>/&lt;deviceId>/data/inverter
> &lt;vehicleId>/&lt;deviceId>/inverter
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataGpsTopic
### &lt;vehicleId>/&lt;deviceId>/data/gps
> &lt;vehicleId>/&lt;deviceId>/data/gps
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataBrusaTopic
### &lt;vehicleId>/&lt;deviceId>/data/brusa
> &lt;vehicleId>/&lt;deviceId>/data/brusa
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusTopic
### &lt;vehicleId>/&lt;deviceId>/status
> &lt;vehicleId>/&lt;deviceId>/status
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusInfoTopic
### &lt;vehicleId>/&lt;deviceId>/status/info
> &lt;vehicleId>/&lt;deviceId>/status/info
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusErrorTopic
### &lt;vehicleId>/&lt;deviceId>/status/error
> &lt;vehicleId>/&lt;deviceId>/status/error
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusCanFrequenciesTopic
### &lt;vehicleId>/&lt;deviceId>/status/canFrequencies
> &lt;vehicleId>/&lt;deviceId>/status/canFrequencies
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandTopic
### &lt;vehicleId>/&lt;deviceId>/command
> &lt;vehicleId>/&lt;deviceId>/command
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandSendTopic
### &lt;vehicleId>/&lt;deviceId>/command/send
> &lt;vehicleId>/&lt;deviceId>/command/send
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandResultTopic
### &lt;vehicleId>/&lt;deviceId>/command/result
> &lt;vehicleId>/&lt;deviceId>/command/result
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionAskTopic
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/ask
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/ask
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionAckTopic
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/ack
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/ack
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionTopic
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionBeginTopic
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/begin
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/begin
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionEndTopic
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/end
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/end
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionChunkTopic
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/chunk
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/chunk
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## ActionTopic
### &lt;vehicleId>/&lt;deviceId>/action
> &lt;vehicleId>/&lt;deviceId>/action
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigTopic
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigSetTopic
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/set
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigGetTopic
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/get
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigContentTopic
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/content
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigTopic
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigSetTopic
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/set
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigGetTopic
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/get
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigContentTopic
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/content
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigTopic
### &lt;vehicleId>/&lt;deviceId>/action/carConfig
> &lt;vehicleId>/&lt;deviceId>/action/actionCar
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigSetTopic
### &lt;vehicleId>/&lt;deviceId>/action/carConfig/set
> &lt;vehicleId>/&lt;deviceId>/action/carConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigGetTopic
### &lt;vehicleId>/&lt;deviceId>/action/carConfig/get
> &lt;vehicleId>/&lt;deviceId>/action/carConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigContentTopic
### &lt;vehicleId>/&lt;deviceId>/action/carConfig/content
> &lt;vehicleId>/&lt;deviceId>/action/carConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionHandcartSettingsTopic
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionHandcartSettingsSetTopic
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/set
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionHandcartSettingsGetTopic
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/get
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionHandcartSettingsContentTopic
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/content
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsSetTopic
### &lt;vehicleId>/&lt;deviceId>/action/+/set
> &lt;vehicleId>/&lt;deviceId>/action/+/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsGetTopic
### &lt;vehicleId>/&lt;deviceId>/action/+/get
> &lt;vehicleId>/&lt;deviceId>/action/+/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsContentTopic
### &lt;vehicleId>/&lt;deviceId>/action/+/content
> &lt;vehicleId>/&lt;deviceId>/action/+/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionKillTopic
### &lt;vehicleId>/&lt;deviceId>/action/kill
> &lt;vehicleId>/&lt;deviceId>/action/kill
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStartTopic
### &lt;vehicleId>/&lt;deviceId>/action/start
> &lt;vehicleId>/&lt;deviceId>/action/start
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionResetTopic
### &lt;vehicleId>/&lt;deviceId>/action/reset
> &lt;vehicleId>/&lt;deviceId>/action/reset
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStopTopic
### &lt;vehicleId>/&lt;deviceId>/action/stop
> &lt;vehicleId>/&lt;deviceId>/action/stop
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionPrechargeTopic
### &lt;vehicleId>/&lt;deviceId>/action/precharge
> &lt;vehicleId>/&lt;deviceId>/action/precharge
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionBalanceTopic
### &lt;vehicleId>/&lt;deviceId>/action/balance
> &lt;vehicleId>/&lt;deviceId>/action/balance
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStopBalance
### &lt;vehicleId>/&lt;deviceId>/action/stopBalance
> &lt;vehicleId>/&lt;deviceId>/action/stopBalance
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionChargeTopic
### &lt;vehicleId>/&lt;deviceId>/action/charge
> &lt;vehicleId>/&lt;deviceId>/action/charge
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStopCharge
### &lt;vehicleId>/&lt;deviceId>/action/stopCharge
> &lt;vehicleId>/&lt;deviceId>/action/stopCharge
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionRawTopic
### &lt;vehicleId>/&lt;deviceId>/action/raw
> &lt;vehicleId>/&lt;deviceId>/action/raw
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionResetLapCounterTopic
### &lt;vehicleId>/&lt;deviceId>/action/resetLapcounter
> &lt;vehicleId>/&lt;deviceId>/action/resetLapcounter
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

