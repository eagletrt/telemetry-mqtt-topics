# Topics

## FeniceEvoRootTopic
### fenice-evo/<device_id>
> Root topic for the device
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## DataTopic
### fenice-evo/<device_id>/data
> Can data topic, it contains all the data from all the CAN bus
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## PrimaryDataTopic
### fenice-evo/<device_id>/data/primary
> Primary data topic, it contains all the data from the primary CAN bus
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## SecondaryDataTopic
### fenice-evo/<device_id>/data/secondary
> Secondary data topic, it contains all the data from the secondary CAN bus
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## InverterDataTopic
### fenice-evo/<device_id>/data/inverter
> Inverter data topic, it contains all the data from the inverter CAN bus
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## GpsDataTopic
### fenice-evo/<device_id>/data/gps
> GPS data topic, it contains all the data from the GPS CAN bus
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StatusTopic
### fenice-evo/<device_id>/status
> Status topic, it contains all the status of the running telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StatusStatusTopic
### fenice-evo/<device_id>/status/status
> Status info topic, it contains the status of the running telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ErrorStatusTopic
### fenice-evo/<device_id>/status/error
> Error status topic, it contains the errors of the running telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CanFrequenciesStatusTopic
### fenice-evo/<device_id>/status/can_frequencies
> CAN frequencies status topic, it contains the frequencies of the CAN buses messages
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CmdTopic
### fenice-evo/<device_id>/cmd
> Command topic, it contains all the commands for the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CmdSendTopic
### fenice-evo/<device_id>/cmd/cmd
> Command send topic, it contains the command to run on the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CmdResultTopic
### fenice-evo/<device_id>/cmd/result
> Command result topic, it contains the result of the command ran on the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## FileTransactionAskTopic
### fenice-evo/<device_id>/file_transaction/ask
> File transaction ask topic, it contains the request for a file transaction
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## FileTransactionAckTopic
### fenice-evo/<device_id>/file_transaction/ack
> File transaction ack topic, it contains the ack for a file transaction
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## FileTransactionTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>
> File transaction topic, it contains the file transaction data
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## FileTransactionBeginTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/begin
> File transaction begin topic, it contains the begin of a file transaction
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## FileTransactionEndTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/end
> File transaction end topic, it contains the end of a file transaction
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## FileTransactionChunkTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/chunk
> File transaction chunk topic, it contains a chunk of a file transaction
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID 
## ActionTopic
### fenice-evo/<device_id>/action
> Action topic, it contains all the actions to send to the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## SessionConfigActionTopic
### fenice-evo/<device_id>/action/session_config
> Session config action topic, it contains the session config actions
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## SessionConfigSetActionTopic
### fenice-evo/<device_id>/action/session_config/set
> Session config set action topic, it sets the session config file
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## SessionConfigGetActionTopic
### fenice-evo/<device_id>/action/session_config/get
> Session config get action topic, it requests the session config file
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## SessionConfigContentActionTopic
### fenice-evo/<device_id>/action/session_config/content
> Session config content action topic, it contains the session config file content
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## TelemetryConfigActionTopic
### fenice-evo/<device_id>/action/telemetry_config
> Telemetry config action topic, it contains the telemetry config actions
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## TelemetryConfigSetActionTopic
### fenice-evo/<device_id>/action/telemetry_config/set
> Telemetry config set action topic, it sets the telemetry config file
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## TelemetryConfigGetActionTopic
### fenice-evo/<device_id>/action/telemetry_config/get
> Telemetry config get action topic, it requests the telemetry config file
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## TelemetryConfigContentActionTopic
### fenice-evo/<device_id>/action/telemetry_config/content
> Telemetry config content action topic, it contains the telemetry config file content
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CarSetupActionTopic
### fenice-evo/<device_id>/action/car_setup
> Car setup action topic, it contains the car setup actions
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CarSetupSetActionTopic
### fenice-evo/<device_id>/action/car_setup/set
> Car setup set action topic, it sets the car setup file
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CarSetupGetActionTopic
### fenice-evo/<device_id>/action/car_setup/get
> Car setup get action topic, it requests the car setup file
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## CarSetupContentActionTopic
### fenice-evo/<device_id>/action/car_setup/content
> Car setup content action topic, it contains the car setup file content
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## SetConfigFileActionTopic
### fenice-evo/<device_id>/action/+/set
> Set action topic, it gets all requests of config files to set
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## GetConfigFileActionTopic
### fenice-evo/<device_id>/action/+/get
> Get action topic, it gets all requests of config files to get
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## ContentConfigFileActionTopic
### fenice-evo/<device_id>/action/+/content
> Content action topic, it gets all requests of config files content
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## KillTelemetryActionTopic
### fenice-evo/<device_id>/action/kill
> Kill action topic, it contains the kill action for shutting down the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StartTelemetryActionTopic
### fenice-evo/<device_id>/action/start
> Start action topic, it contains the start action for changing to RUN the FSM of the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## StopTelemetryActionTopic
### fenice-evo/<device_id>/action/stop
> Stop action topic, it contains the stop action for changing to IDLE the FSM of the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## RawActionTopic
### fenice-evo/<device_id>/action/raw
> Raw action topic, it contains custom commands to send to the telemetry system
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## LapCounterResetActionTopic
### fenice-evo/<device_id>/action/lapcounter_reset
> Lap counter reset action topic, it contains the lap counter reset action for resetting the lap counter
- **Quality of Service**: 0
- **Role**: 0 2 3 
- **Retain**: No
- **Variables**:
  - device_id -> The device ID (default: telemetry)

