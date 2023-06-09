# Topics

## FeniceEvoRootTopic
### fenice-evo/<device_id>
> Root topic for all devices
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## FileTransactionTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>
> The file transaction topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID
## FileTransactionBeginTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/begin
> The begin topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID
## FileTransactionEndTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/end
> The end topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID
## FileTransactionChunkTopic
### fenice-evo/<device_id>/file_transaction/<transaction_id>/chunk
> The chunk topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)
  - transaction_id -> The transaction ID
## DataTopic
### fenice-evo/<device_id>/data
> The data topic, it contains all the CAN messages
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## PrimaryDataTopic
### fenice-evo/<device_id>/data/primary
> The primary data topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## SecondaryDataTopic
### fenice-evo/<device_id>/data/secondary
> The secondary data topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## InverterDataTopic
### fenice-evo/<device_id>/data/inverter
> The inverter data topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## GPSDataTopic
### fenice-evo/<device_id>/data/gps
> The GPS data topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)

## BrusaDataTopic
### fenice-evo/<device_id>/data/brusa
> The Brusa data topic
- **Quality of Service**: 0
- **Role**: 1 2 3 4
- **Variables**:
  - device_id -> The device ID (default: telemetry)