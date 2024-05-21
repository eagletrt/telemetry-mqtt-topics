# Topics

## VehicleId
### &lt;vehicleId>
> &lt;vehicleId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleId
## DeviceId
### &lt;vehicleId>/&lt;deviceId>
> &lt;vehicleId>/&lt;deviceId>
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DeviceVersion
### &lt;vehicleId>/&lt;deviceId>/version
> The payload contains the current CAN version hash of the device.
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## Data
### &lt;vehicleId>/&lt;deviceId>/data
> &lt;vehicleId>/&lt;deviceId>/data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataPrimary
### &lt;vehicleId>/&lt;deviceId>/data/primary
> Protobuffer data of primary network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataSecondary
### &lt;vehicleId>/&lt;deviceId>/data/secondary
> Protobuffer data of secondary network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataBms
### &lt;vehicleId>/&lt;deviceId>/data/bms
> Protobuffer data of bms network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataInverter
### &lt;vehicleId>/&lt;deviceId>/data/inverters
> Protobuffer data of inverter network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataSimulator
### &lt;vehicleId>/&lt;deviceId>/data/simulator
> Protobuffer data of simulator network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataGps
### &lt;vehicleId>/&lt;deviceId>/data/gps
> Protobuffer data of gps network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataBrusa
### &lt;vehicleId>/&lt;deviceId>/data/brusa
> &lt;vehicleId>/&lt;deviceId>/data/brusa
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ExtraTlmData
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data
> &lt;vehicleId>/&lt;deviceId>/extra_tlm_data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ExtraTlmDataVehicleState
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data/vehicle_stata
> Protobuffer data of vehicle state
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataLastUpdate
### &lt;vehicleId>/&lt;deviceId>/last_update
> Sends the last update timestamp of the data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## Status
### &lt;vehicleId>/&lt;deviceId>/status
> &lt;vehicleId>/&lt;deviceId>/status
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusInfo
### &lt;vehicleId>/&lt;deviceId>/status/info
> &lt;vehicleId>/&lt;deviceId>/status/info
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusError
### &lt;vehicleId>/&lt;deviceId>/status/error
> &lt;vehicleId>/&lt;deviceId>/status/error
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusAlert
### &lt;vehicleId>/&lt;deviceId>/status/alert
> Alert message, it contains a critical can message
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusCanFrequencies
### &lt;vehicleId>/&lt;deviceId>/status/canFrequencies
> &lt;vehicleId>/&lt;deviceId>/status/canFrequencies
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusLapCounterStatus
### &lt;vehicleId>/&lt;deviceId>/status/lapCounterStatus
> &lt;vehicleId>/&lt;deviceId>/status/lapCounterStatus
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusLapCounterLaps
### &lt;vehicleId>/&lt;deviceId>/status/lapCounterLaps
> &lt;vehicleId>/&lt;deviceId>/status/lapCounterLaps
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## Command
### &lt;vehicleId>/&lt;deviceId>/command
> &lt;vehicleId>/&lt;deviceId>/command
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## CommandSend
### &lt;vehicleId>/&lt;deviceId>/command/send
> &lt;vehicleId>/&lt;deviceId>/command/send
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## CommandResult
### &lt;vehicleId>/&lt;deviceId>/command/result
> &lt;vehicleId>/&lt;deviceId>/command/result
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## steer
### &lt;vehicleId>/&lt;deviceId>/command/steer
> &lt;vehicleId>/&lt;deviceId>/command/steer
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 128 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## FileTransactionRequest
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/request
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/request
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## FileTransactionResponse
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/response
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/response
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## FileTransaction
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceIdtransactionId
## FileTransactionBegin
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/begin
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/begin
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceIdtransactionId
## FileTransactionEnd
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/end
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/end
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceIdtransactionId
## FileTransactionChunk
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/chunk
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/chunk
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceIdtransactionId
## FileTransactionChunkAck
### &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/chunk_ack
> &lt;vehicleId>/&lt;deviceId>/fileTransaction/&lt;transactionId>/chunk_ack
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceIdtransactionId
## Action
### &lt;vehicleId>/&lt;deviceId>/action
> &lt;vehicleId>/&lt;deviceId>/action
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionTelemetryConfig
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionTelemetryConfigSet
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/set
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionTelemetryConfigGet
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/get
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionTelemetryConfigContent
### &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/content
> &lt;vehicleId>/&lt;deviceId>/action/telemetryConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionSessionConfig
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionSessionConfigSet
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/set
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionSessionConfigGet
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/get
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionSessionConfigContent
### &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/content
> &lt;vehicleId>/&lt;deviceId>/action/sessionConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionCarConfig
### &lt;vehicleId>/&lt;deviceId>/action/carConfig
> &lt;vehicleId>/&lt;deviceId>/action/actionCar
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionCarConfigSet
### &lt;vehicleId>/&lt;deviceId>/action/carConfig/set
> &lt;vehicleId>/&lt;deviceId>/action/carConfig/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionCarConfigGet
### &lt;vehicleId>/&lt;deviceId>/action/carConfig/get
> &lt;vehicleId>/&lt;deviceId>/action/carConfig/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionCarConfigContent
### &lt;vehicleId>/&lt;deviceId>/action/carConfig/content
> &lt;vehicleId>/&lt;deviceId>/action/carConfig/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionHandcartSettings
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionHandcartSettingsSet
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/set
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/set
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionHandcartSettingsGet
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/get
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/get
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionHandcartSettingsContent
### &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/content
> &lt;vehicleId>/&lt;deviceId>/action/handcartSettings/content
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionKill
### &lt;vehicleId>/&lt;deviceId>/action/kill
> &lt;vehicleId>/&lt;deviceId>/action/kill
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionStart
### &lt;vehicleId>/&lt;deviceId>/action/start
> &lt;vehicleId>/&lt;deviceId>/action/start
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionReset
### &lt;vehicleId>/&lt;deviceId>/action/reset
> &lt;vehicleId>/&lt;deviceId>/action/reset
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionStop
### &lt;vehicleId>/&lt;deviceId>/action/stop
> &lt;vehicleId>/&lt;deviceId>/action/stop
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionPrecharge
### &lt;vehicleId>/&lt;deviceId>/action/precharge
> &lt;vehicleId>/&lt;deviceId>/action/precharge
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionBalance
### &lt;vehicleId>/&lt;deviceId>/action/balance
> &lt;vehicleId>/&lt;deviceId>/action/balance
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionStopBalance
### &lt;vehicleId>/&lt;deviceId>/action/stopBalance
> &lt;vehicleId>/&lt;deviceId>/action/stopBalance
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionCharge
### &lt;vehicleId>/&lt;deviceId>/action/charge
> &lt;vehicleId>/&lt;deviceId>/action/charge
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionStopCharge
### &lt;vehicleId>/&lt;deviceId>/action/stopCharge
> &lt;vehicleId>/&lt;deviceId>/action/stopCharge
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionRaw
### &lt;vehicleId>/&lt;deviceId>/action/raw
> &lt;vehicleId>/&lt;deviceId>/action/raw
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionResetLapCounter
### &lt;vehicleId>/&lt;deviceId>/action/resetLapcounter
> &lt;vehicleId>/&lt;deviceId>/action/resetLapcounter
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ActionSetLapCounterStatus
### &lt;vehicleId>/&lt;deviceId>/action/setLapcounterStatus
> &lt;vehicleId>/&lt;deviceId>/action/setLapcounterStatus
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
