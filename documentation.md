# Topics

## VehicleIdTopic
### <vehicle_id>
> <vehicleId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)

## VehicleIdDeviceIdTopic
### <vehicle_id>/<device_id>
> <vehicleId>/<deviceId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataTopic
### <vehicle_id>/<device_id>/data
> <vehicleId>/<deviceId>/data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataPrimaryTopic
### <vehicle_id>/<device_id>/data/primary
> <vehicleId>/<deviceId>/data/primary
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataSecondaryTopic
### <vehicle_id>/<device_id>/data/secondary
> <vehicleId>/<deviceId>/data/secondary
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataInverterTopic
### <vehicle_id>/<device_id>/data/inverter
> <vehicleId>/<deviceId>/inverter
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataGpsTopic
### <vehicle_id>/<device_id>/data/gps
> <vehicleId>/<deviceId>/data/gps
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## DataBrusaTopic
### <vehicle_id>/<device_id>/data/brusa
> <vehicleId>/<deviceId>/data/brusa
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusTopic
### <vehicle_id>/<device_id>/status
> <vehicleId>/<deviceId>/status
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusInfoTopic
### <vehicle_id>/<device_id>/status/info
> <vehicleId>/<deviceId>/status/info
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusErrorTopic
### <vehicle_id>/<device_id>/status/error
> <vehicleId>/<deviceId>/status/error
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## StatusCanFrequenciesTopic
### <vehicle_id>/<device_id>/status/can_frequencies
> <vehicleId>/<deviceId>/status/canFrequencies
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: Yes
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandTopic
### <vehicle_id>/<device_id>/command
> <vehicleId>/<deviceId>/command
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandSendTopic
### <vehicle_id>/<device_id>/command/send
> <vehicleId>/<deviceId>/command/send
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## CommandResultTopic
### <vehicle_id>/<device_id>/command/result
> <vehicleId>/<deviceId>/command/result
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionAskTopic
### <vehicle_id>/<device_id>/file_transaction/ask
> <vehicleId>/<deviceId>/fileTransaction/ask
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionAckTopic
### <vehicle_id>/<device_id>/file_transaction/ack
> <vehicleId>/<deviceId>/fileTransaction/ack
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## FileTransactionTopic
### <vehicle_id>/<device_id>/file_transaction/<transaction_id>
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionBeginTopic
### <vehicle_id>/<device_id>/file_transaction/<transaction_id>/begin
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionEndTopic
### <vehicle_id>/<device_id>/file_transaction/<transaction_id>/end
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>/end
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## FileTransactionChunkTopic
### <vehicle_id>/<device_id>/file_transaction/<transaction_id>/chunk
> <vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)
  - transactionId -> The transaction ID 
## ActionTopic
### <vehicle_id>/<device_id>/action
> <vehicleId>/<deviceId>/action
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigTopic
### <vehicle_id>/<device_id>/action/telemetry_config
> <vehicleId>/<deviceId>/action/telemetryConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigSetTopic
### <vehicle_id>/<device_id>/action/telemetry_config/set
> <vehicleId>/<deviceId>/action/telemetryConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigGetTopic
### <vehicle_id>/<device_id>/action/telemetry_config/get
> <vehicleId>/<deviceId>/action/telemetryConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionTelemetryConfigContentTopic
### <vehicle_id>/<device_id>/action/telemetry_config/content
> <vehicleId>/<deviceId>/action/telemetryConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigTopic
### <vehicle_id>/<device_id>/action/session_config
> <vehicleId>/<deviceId>/action/sessionConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigSetTopic
### <vehicle_id>/<device_id>/action/session_config/set
> <vehicleId>/<deviceId>/action/sessionConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigGetTopic
### <vehicle_id>/<device_id>/action/session_config/get
> <vehicleId>/<deviceId>/action/sessionConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionSessionConfigContentTopic
### <vehicle_id>/<device_id>/action/session_config/content
> <vehicleId>/<deviceId>/action/sessionConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigTopic
### <vehicle_id>/<device_id>/action/car_config
> <vehicleId>/<deviceId>/action/actionCar
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigSetTopic
### <vehicle_id>/<device_id>/action/car_config/set
> <vehicleId>/<deviceId>/action/carConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigGetTopic
### <vehicle_id>/<device_id>/action/car_config/get
> <vehicleId>/<deviceId>/action/carConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionCarConfigContentTopic
### <vehicle_id>/<device_id>/action/car_config/content
> <vehicleId>/<deviceId>/action/carConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsSetTopic
### <vehicle_id>/<device_id>/action/+/set
> <vehicleId>/<deviceId>/action/+/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsGetTopic
### <vehicle_id>/<device_id>/action/+/get
> <vehicleId>/<deviceId>/action/+/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionConfigsContentTopic
### <vehicle_id>/<device_id>/action/+/content
> <vehicleId>/<deviceId>/action/+/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionKillTopic
### <vehicle_id>/<device_id>/action/kill
> <vehicleId>/<deviceId>/action/kill
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStartTopic
### <vehicle_id>/<device_id>/action/start
> <vehicleId>/<deviceId>/action/start
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionResetTopic
### <vehicle_id>/<device_id>/action/reset
> <vehicleId>/<deviceId>/action/reset
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionStopTopic
### <vehicle_id>/<device_id>/action/stop
> <vehicleId>/<deviceId>/action/stop
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionRawTopic
### <vehicle_id>/<device_id>/action/raw
> <vehicleId>/<deviceId>/action/raw
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

## ActionResetLapCounterTopic
### <vehicle_id>/<device_id>/action/reset_lapcounter
> <vehicleId>/<deviceId>/action/resetLapcounter
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retained**: No
- **Variables**:
  - vehicleId -> The vehicle ID (default: feniceEvo)
  - deviceId -> The device ID (default: telemetry)

