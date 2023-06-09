# Topics

## VehicleIdTopic
### <vehicleId>
> <vehicleId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)

## DeviceIdTopic
### <vehicleId>/<deviceId>
> <vehicleId>/<deviceId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataTopic
### <vehicleId>/<deviceId>/data
> <vehicleId>/<deviceId>/data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataPrimaryTopic
### <vehicleId>/<deviceId>/data/primary
> <vehicleId>/<deviceId>/data/primary
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataSecondaryTopic
### <vehicleId>/<deviceId>/data/secondary
> <vehicleId>/<deviceId>/data/secondary
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataInverterTopic
### <vehicleId>/<deviceId>/data/inverter
> <vehicleId>/<deviceId>/inverter
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataGpsTopic
### <vehicleId>/<deviceId>/data/gps
> <vehicleId>/<deviceId>/data/gps
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataBrusaTopic
### <vehicleId>/<deviceId>/data/brusa
> <vehicleId>/<deviceId>/data/brusa
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusTopic
### <vehicleId>/<deviceId>/status
> <vehicleId>/<deviceId>/status
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusInfoTopic
### <vehicleId>/<deviceId>/status/info
> <vehicleId>/<deviceId>/status/info
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusErrorTopic
### <vehicleId>/<deviceId>/status/error
> <vehicleId>/<deviceId>/status/error
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusCanFrequenciesTopic
### <vehicleId>/<deviceId>/status/canFrequencies
> <vehicleId>/<deviceId>/status/canFrequencies
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandTopic
### <vehicleId>/<deviceId>/command
> <vehicleId>/<deviceId>/command
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandSendTopic
### <vehicleId>/<deviceId>/command/send
> <vehicleId>/<deviceId>/command/send
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandResultTopic
### <vehicleId>/<deviceId>/command/result
> <vehicleId>/<deviceId>/command/result
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionAskTopic
### <vehicleId>/<deviceId>/fileTransaction/ask
> <vehicleId>/<deviceId>/fileTransaction/ask
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionAckTopic
### <vehicleId>/<deviceId>/fileTransaction/ack
> <vehicleId>/<deviceId>/fileTransaction/ack
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionTopic
### <vehicleId>/<deviceId>/fileTransaction/<transactionId>
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionBeginTopic
### <vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionEndTopic
### <vehicleId>/<deviceId>/fileTransaction/<transactionId>/end
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>/end
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionChunkTopic
### <vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## ActionTopic
### <vehicleId>/<deviceId>/action
> <vehicleId>/<deviceId>/action
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigTopic
### <vehicleId>/<deviceId>/action/telemetryConfig
> <vehicleId>/<deviceId>/action/telemetryConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigSetTopic
### <vehicleId>/<deviceId>/action/telemetryConfig/set
> <vehicleId>/<deviceId>/action/telemetryConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigGetTopic
### <vehicleId>/<deviceId>/action/telemetryConfig/get
> <vehicleId>/<deviceId>/action/telemetryConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigContentTopic
### <vehicleId>/<deviceId>/action/telemetryConfig/content
> <vehicleId>/<deviceId>/action/telemetryConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigTopic
### <vehicleId>/<deviceId>/action/sessionConfig
> <vehicleId>/<deviceId>/action/sessionConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigSetTopic
### <vehicleId>/<deviceId>/action/sessionConfig/set
> <vehicleId>/<deviceId>/action/sessionConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigGetTopic
### <vehicleId>/<deviceId>/action/sessionConfig/get
> <vehicleId>/<deviceId>/action/sessionConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigContentTopic
### <vehicleId>/<deviceId>/action/sessionConfig/content
> <vehicleId>/<deviceId>/action/sessionConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigTopic
### <vehicleId>/<deviceId>/action/carConfig
> <vehicleId>/<deviceId>/action/actionCar
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigSetTopic
### <vehicleId>/<deviceId>/action/carConfig/set
> <vehicleId>/<deviceId>/action/carConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigGetTopic
### <vehicleId>/<deviceId>/action/carConfig/get
> <vehicleId>/<deviceId>/action/carConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigContentTopic
### <vehicleId>/<deviceId>/action/carConfig/content
> <vehicleId>/<deviceId>/action/carConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsSetTopic
### <vehicleId>/<deviceId>/action/+/set
> <vehicleId>/<deviceId>/action/+/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsGetTopic
### <vehicleId>/<deviceId>/action/+/get
> <vehicleId>/<deviceId>/action/+/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsContentTopic
### <vehicleId>/<deviceId>/action/+/content
> <vehicleId>/<deviceId>/action/+/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionKillTopic
### <vehicleId>/<deviceId>/action/kill
> <vehicleId>/<deviceId>/action/kill
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStartTopic
### <vehicleId>/<deviceId>/action/start
> <vehicleId>/<deviceId>/action/start
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionResetTopic
### <vehicleId>/<deviceId>/action/reset
> <vehicleId>/<deviceId>/action/reset
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStopTopic
### <vehicleId>/<deviceId>/action/stop
> <vehicleId>/<deviceId>/action/stop
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionRawTopic
### <vehicleId>/<deviceId>/action/raw
> <vehicleId>/<deviceId>/action/raw
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionResetLapCounterTopic
### <vehicleId>/<deviceId>/action/resetLapcounter
> <vehicleId>/<deviceId>/action/resetLapcounter
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

