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
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataPrimary
### &lt;vehicleId>/&lt;deviceId>/data/primary
> Protobuffer data of primary network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataSecondary
### &lt;vehicleId>/&lt;deviceId>/data/secondary
> Protobuffer data of secondary network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataBms
### &lt;vehicleId>/&lt;deviceId>/data/bms
> Protobuffer data of bms network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataInverter
### &lt;vehicleId>/&lt;deviceId>/data/inverters
> Protobuffer data of inverter network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataSimulator
### &lt;vehicleId>/&lt;deviceId>/data/simulator
> Protobuffer data of simulator network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataGps
### &lt;vehicleId>/&lt;deviceId>/data/gps
> Protobuffer data of gps network
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataBrusa
### &lt;vehicleId>/&lt;deviceId>/data/brusa
> &lt;vehicleId>/&lt;deviceId>/data/brusa
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataTemporary
### &lt;vehicleId>/&lt;deviceId>/data/temporary
> Proto serialized with serializers, with unspecified and volatile structure.
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataLaps
### &lt;vehicleId>/&lt;deviceId>/data/laps
> &lt;vehicleId>/&lt;deviceId>/data/laps
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataLapsLast
### &lt;vehicleId>/&lt;deviceId>/data/laps/last
> &lt;vehicleId>/&lt;deviceId>/data/laps/last
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## DataLapsLastMetaData
### &lt;vehicleId>/&lt;deviceId>/data/laps/last/metaData
> &lt;vehicleId>/&lt;deviceId>/data/laps/last/metaData
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## DataOdometer
### &lt;vehicleId>/&lt;deviceId>/data/odometer
> &lt;vehicleId>/&lt;deviceId>/data/odometer
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLogger
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCan
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanImuAngularRate
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/imuAngularRate
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/imuAngularRate
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanImuAcceleration
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/imuAcceleration
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/imuAcceleration
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanVehiclePosition
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/vehiclePosition
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/vehiclePosition
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanVehicleSpeed
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/vehicleSpeed
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/vehicleSpeed
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanFrontAngularVelocity
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/frontAngularVelocity
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/frontAngularVelocity
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanRearLeftAngularVelocity
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/rearLeftAngularVelocity
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/rearLeftAngularVelocity
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanRearRightAngularVelocity
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/rearRightAngularVelocity
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/rearRightAngularVelocity
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerCanSteerAngle
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/steerAngle
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/can/steerAngle
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerGps
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerGpsHpposllh
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS/hpposllh
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS/hpposllh
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerGpsPvt
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS/pvt
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS/pvt
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## DataCameraLoggerGpsRelposned
### &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS/relposned
> &lt;vehicleId>/&lt;deviceId>/data/cameraLogger/GPS/relposned
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 130 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ExtraDataToLog
### &lt;vehicleId>/&lt;deviceId>/extra_data_to_log
> &lt;vehicleId>/&lt;deviceId>/extra_data_to_log
- **Quality of Service**: 0
- **Subscribe Roles**: 128 129 - **Publish Roles**: 0 1 2 3 4 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ExtraTlmData
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data
> &lt;vehicleId>/&lt;deviceId>/extra_tlm_data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ExtraTlmDataVehicleState
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data/vehicleState
> Protobuffer data of vehicle state
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## ExtraTlmDataBaseline
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data/baseline
> Protobuffer data of vehicle state
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## ExtraTlmDataGpsMapOrigins
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data/gpsMapOrigins
> Protobuffer data of gps map origins
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 131 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## ExtraTlmDataLapTimes
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data/lapTimes
> Lap times of the running session
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 131 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## ExtraTlmDataLapRecords
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data/lapRecords
> Lap records of the running session
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 131 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## ExtraTlmDataLapLayout
### &lt;vehicleId>/&lt;deviceId>/extra_tlm_data/lapLayout
> Lap layout of the running session
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 131 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## DataLastUpdate
### &lt;vehicleId>/&lt;deviceId>/last_update
> Sends the last update timestamp of the data
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## Status
### &lt;vehicleId>/&lt;deviceId>/status
> &lt;vehicleId>/&lt;deviceId>/status
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusInfo
### &lt;vehicleId>/&lt;deviceId>/status/info
> &lt;vehicleId>/&lt;deviceId>/status/info
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusError
### &lt;vehicleId>/&lt;deviceId>/status/error
> &lt;vehicleId>/&lt;deviceId>/status/error
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## StatusAlert
### &lt;vehicleId>/&lt;deviceId>/status/alert
> Alert message, it contains a critical can message
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## StatusCanFrequencies
### &lt;vehicleId>/&lt;deviceId>/status/canFrequencies
> &lt;vehicleId>/&lt;deviceId>/status/canFrequencies
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## StatusLapCounterStatus
### &lt;vehicleId>/&lt;deviceId>/status/lapCounterStatus
> &lt;vehicleId>/&lt;deviceId>/status/lapCounterStatus
- **Quality of Service**: 1
- **Subscribe Roles**: 0 1 2 3 4 128 129 131 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## AsCommands
### &lt;vehicleId>/&lt;deviceId>/commands
> &lt;vehicleId>/&lt;deviceId>/asCommands
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## AsCommandsSetValues
### &lt;vehicleId>/&lt;deviceId>/commands/setValues
> &lt;vehicleId>/&lt;deviceId>/asCommands/setValues
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 128 130 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## AsCommandsSetStatus
### &lt;vehicleId>/&lt;deviceId>/commands/setStatus
> &lt;vehicleId>/&lt;deviceId>/asCommands/setStatus
- **Quality of Service**: 2
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 128 130 
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
## Info
### &lt;vehicleId>/&lt;deviceId>/info
> &lt;vehicleId>/&lt;deviceId>/info
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 128 129 - **Publish Roles**: 0 1 2 3 4 128 129 
- **Retain**: No
- **Variables**:
vehicleIddeviceId
## InfoTrackConfig
### &lt;vehicleId>/&lt;deviceId>/info/trackConfig
> All configuration of the track setup, including the track layout, the lap records and the lap times.
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 128 129 
- **Retain**: Yes
- **Variables**:
vehicleIddeviceId
## Simulator
### &lt;vehicleId>/simulator
> data from and to the simulator
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 
- **Retain**: No
- **Variables**:
vehicleId
## SimulatorInputs
### &lt;vehicleId>/simulator/inputs
> 
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 
- **Retain**: No
- **Variables**:
vehicleId
## SimulatorOutputs
### &lt;vehicleId>/simulator/outputs
> 
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 
- **Retain**: No
- **Variables**:
vehicleId
## SimulatorInitialState
### &lt;vehicleId>/simulator/initialState
> 
- **Quality of Service**: 0
- **Subscribe Roles**: 0 1 2 3 4 - **Publish Roles**: 0 1 2 3 4 
- **Retain**: No
- **Variables**:
vehicleId
