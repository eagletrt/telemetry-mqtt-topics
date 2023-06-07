# Topics

## FeniceEvoTopic
### fenice-evo/<device_id>
> FeniceEvo topic for the device
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 2 3 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## DataTopic
### fenice-evo/<device_id>/data
> Can data topic, it contains all the data from all the CAN bus
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 3 - **Publish Roles**: 0 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## DataPrimaryTopic
### fenice-evo/<device_id>/data/primary
> Data primary topic, it contains all the data from the primary CAN bus
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 3 - **Publish Roles**: 0 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## DataSecondaryTopic
### fenice-evo/<device_id>/data/secondary
> Data secondary topic, it contains all the data from the secondary CAN bus
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 3 - **Publish Roles**: 0 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## DataInverterTopic
### fenice-evo/<device_id>/data/inverter
> Data inverter topic, it contains all the data from the inverter CAN bus
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 3 - **Publish Roles**: 0 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## DataGpsTopic
### fenice-evo/<device_id>/data/gps
> Data GPS topic, it contains all the data from the GPS CAN bus
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 3 - **Publish Roles**: 0 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## DataBrusaTopic
### fenice-evo/<device_id>/data/brusa
> Data brusa topic, it contains all the data from the Brusa CAN bus
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 3 - **Publish Roles**: 0 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StatusTopic
### fenice-evo/<device_id>/status
> Status topic, it contains all the status of the running telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 
- **Retained**: Yes
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StatusInfoTopic
### fenice-evo/<device_id>/status/info
> Status info topic, it contains the status of the running telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 
- **Retained**: Yes
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StatusErrorTopic
### fenice-evo/<device_id>/status/error
> Status error topic, it contains the errors of the running telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 
- **Retained**: Yes
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StatusCanFrequenciesTopic
### fenice-evo/<device_id>/status/can_frequencies
> Status CAN frequencies topic, it contains the frequencies of the CAN buses messages
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 
- **Retained**: Yes
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CommandTopic
### fenice-evo/<device_id>/command
> Command topic, it contains all the commands for the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 2 3 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CommandSendTopic
### fenice-evo/<device_id>/command/send
> Command send topic, it contains the command to run on the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CommandResultTopic
### fenice-evo/<device_id>/command/result
> Command result topic, it contains the result of the command ran on the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 - **Publish Roles**: 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## FileTransactionAskTopic
### fenice-evo/<device_id>/file_transaction/ask
> File transaction ask topic, it contains the request for a file transaction
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## FileTransactionAckTopic
### fenice-evo/<device_id>/file_transaction/ack
> File transaction ack topic, it contains the ack for a file transaction
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 - **Publish Roles**: 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## FileTransactionTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>
> File transaction topic, it contains the file transaction data
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## FileTransactionBeginTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/begin
> File transaction begin topic, it contains the begin of a file transaction
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## FileTransactionEndTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/end
> File transaction end topic, it contains the end of a file transaction
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## FileTransactionChunkTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/chunk
> File transaction chunk topic, it contains a chunk of a file transaction
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## ActionTopic
### fenice-evo/<device_id>/action
> Action topic, it contains all the actions to send to the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 2 3 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionTelemetryConfigTopic
### fenice-evo/<device_id>/action/telemetry_config
> Action telemetry config topic, it contains the telemetry config actions
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionTelemetryConfigSetTopic
### fenice-evo/<device_id>/action/telemetry_config/set
> Action telemetry config set topic, it sets the telemetry config file
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionTelemetryConfigGetTopic
### fenice-evo/<device_id>/action/telemetry_config/get
> Action telemetry config get topic, it requests the telemetry config file
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionTelemetryConfigContentTopic
### fenice-evo/<device_id>/action/telemetry_config/content
> Action telemetry config content topic, it contains the telemetry config file content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 - **Publish Roles**: 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionSessionConfigTopic
### fenice-evo/<device_id>/action/session_config
> Action session config topic, it contains the session config actions
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 2 3 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionSessionConfigSetTopic
### fenice-evo/<device_id>/action/session_config/set
> Action session config set topic, it sets the session config file
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionSessionConfigGetTopic
### fenice-evo/<device_id>/action/session_config/get
> Action session config get topic, it requests the session config file
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionSessionConfigContentTopic
### fenice-evo/<device_id>/action/session_config/content
> Action session config content topic, it contains the session config file content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 - **Publish Roles**: 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionCarConfigTopic
### fenice-evo/<device_id>/action/car_config
> Action car config topic, it contains the car config actions
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 - **Publish Roles**: 0 1 2 3 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionCarConfigSetTopic
### fenice-evo/<device_id>/action/car_config/set
> Action car config set topic, it sets the car config file
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionCarConfigGetTopic
### fenice-evo/<device_id>/action/car_config/get
> Action car config get topic, it requests the car config file
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionCarConfigContentTopic
### fenice-evo/<device_id>/action/car_config/content
> Action car config content topic, it contains the car config file content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 - **Publish Roles**: 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionConfigsSetTopic
### fenice-evo/<device_id>/action/+/set
> Action configs set topic, it gets all requests of config files to set
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionConfigsGetTopic
### fenice-evo/<device_id>/action/+/get
> Action configs get topic, it gets all requests of config files to get
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 2 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionConfigsContentTopic
### fenice-evo/<device_id>/action/+/content
> Action configs content topic, it gets all requests of config files content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 2 - **Publish Roles**: 1 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionKillTelemetryTopic
### fenice-evo/<device_id>/action/kill
> Action kill telemetry topic, it contains the kill action for shutting down the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionStartTelemetryTopic
### fenice-evo/<device_id>/action/start
> Action start telemetry topic, it contains the start action for changing to RUN the FSM of the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionResetTelemetryTopic
### fenice-evo/<device_id>/action/reset
> Action reset telemetry topic, it contains the reset action for changing to UNINITIALIZED the FSM of the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionStopTelemetryTopic
### fenice-evo/<device_id>/action/stop
> Action stop telemetry topic topic, it contains the stop action for changing to IDLE the FSM of the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionRawTopic
### fenice-evo/<device_id>/action/raw
> Action raw topic, it contains custom commands to send to the telemetry system
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ActionResetLapCounterTopic
### fenice-evo/<device_id>/action/reset_lapcounter
> Action reset lap counter action topic, it contains the lap counter reset action for resetting the lap counter
- **Quality of Service**: 0
- **Subscribe Roles**: 1 - **Publish Roles**: 0 
- **Retained**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

