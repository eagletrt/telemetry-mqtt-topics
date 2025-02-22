from anytree import Node, RenderTree, LevelOrderIter, AsciiStyle, find


class MessageParser:

    def __init__(self):
        self.tree = Node("<vehicleId>", function=None)
        self.addNode("<vehicleId>")
        self.addNode("<vehicleId>/<deviceId>")
        self.addNode("<vehicleId>/<deviceId>/version")
        self.addNode("<vehicleId>/<deviceId>/data")
        self.addNode("<vehicleId>/<deviceId>/data/primary")
        self.addNode("<vehicleId>/<deviceId>/data/secondary")
        self.addNode("<vehicleId>/<deviceId>/data/bms")
        self.addNode("<vehicleId>/<deviceId>/data/inverters")
        self.addNode("<vehicleId>/<deviceId>/data/simulator")
        self.addNode("<vehicleId>/<deviceId>/data/gps")
        self.addNode("<vehicleId>/<deviceId>/data/brusa")
        self.addNode("<vehicleId>/<deviceId>/data/temporary")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/imuAngularRate")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/imuAcceleration")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/vehiclePosition")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/vehicleSpeed")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/frontAngularVelocity")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/rearLeftAngularVelocity")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/rearRightAngularVelocity")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/steerAngle")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS/hpposllh")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS/pvt")
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS/relposned")
        self.addNode("<vehicleId>/<deviceId>/extra_data_to_log")
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data")
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data/vehicleState")
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data/baseline")
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data/gpsMapOrigins")
        self.addNode("<vehicleId>/<deviceId>/last_update")
        self.addNode("<vehicleId>/<deviceId>/status")
        self.addNode("<vehicleId>/<deviceId>/status/info")
        self.addNode("<vehicleId>/<deviceId>/status/error")
        self.addNode("<vehicleId>/<deviceId>/status/alert")
        self.addNode("<vehicleId>/<deviceId>/status/canFrequencies")
        self.addNode("<vehicleId>/<deviceId>/status/lapCounterStatus")
        self.addNode("<vehicleId>/<deviceId>/status/lapCounterLaps")
        self.addNode("<vehicleId>/<deviceId>/command")
        self.addNode("<vehicleId>/<deviceId>/command/steer")
        self.addNode("<vehicleId>/<deviceId>/command/steerStatus")
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/request")
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/response")
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>")
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin")
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/end")
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk")
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk_ack")
        self.addNode("<vehicleId>/<deviceId>/info")
        self.addNode("<vehicleId>/<deviceId>/info/version")
        self.addNode("<vehicleId>/<deviceId>/info/user")
        self.addNode("<vehicleId>/<deviceId>/info/telemetryReplay")
        self.addNode("<vehicleId>/<deviceId>/info/telemetryReplay/ready")
        self.addNode("<vehicleId>/<deviceId>/info/telemetryReplay/start")
        self.addNode("<vehicleId>/<deviceId>/info/session")
        self.addNode("<vehicleId>/<deviceId>/info/session/started")
        self.addNode("<vehicleId>/<deviceId>/info/session/stopped")
        self.addNode("<vehicleId>/<deviceId>/info/session/logging")
        self.addNode("<vehicleId>/<deviceId>/action")
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig")
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig/set")
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig/get")
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig/content")
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig")
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig/set")
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig/get")
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig/content")
        self.addNode("<vehicleId>/<deviceId>/action/carConfig")
        self.addNode("<vehicleId>/<deviceId>/action/carConfig/set")
        self.addNode("<vehicleId>/<deviceId>/action/carConfig/get")
        self.addNode("<vehicleId>/<deviceId>/action/carConfig/content")
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig")
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig/set")
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig/get")
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig/content")
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings")
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings/set")
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings/get")
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings/content")
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig")
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig/set")
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig/get")
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig/content")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig/set")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig/get")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig/content")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack/set")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack/get")
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack/content")
        self.addNode("<vehicleId>/<deviceId>/action/kill")
        self.addNode("<vehicleId>/<deviceId>/action/start")
        self.addNode("<vehicleId>/<deviceId>/action/reset")
        self.addNode("<vehicleId>/<deviceId>/action/stop")
        self.addNode("<vehicleId>/<deviceId>/action/startBaseline")
        self.addNode("<vehicleId>/<deviceId>/action/stopBaseline")
        self.addNode("<vehicleId>/<deviceId>/action/precharge")
        self.addNode("<vehicleId>/<deviceId>/action/balance")
        self.addNode("<vehicleId>/<deviceId>/action/stopBalance")
        self.addNode("<vehicleId>/<deviceId>/action/charge")
        self.addNode("<vehicleId>/<deviceId>/action/stopCharge")
        self.addNode("<vehicleId>/<deviceId>/action/raw")
        self.addNode("<vehicleId>/<deviceId>/action/resetLapcounter")
        self.addNode("<vehicleId>/<deviceId>/action/setLapcounterStatus")
        

    def addNode(self, topic):
        if topic != "":
            topic_split = topic.split("/")
        for i in range(len(topic_split)):
            notFound = True
            for node in LevelOrderIter(self.tree, maxlevel=i + 1):
                if node.name == topic_split[i]:
                    notFound = False
            if notFound:
                print(topic_split[i])
                _parent = find(self.tree, lambda node: node.name == topic_split[i - 1])
                Node(topic_split[i], parent=_parent, function=None)

    def findNode(self, topic):
        if topic != "":
            topic_split = topic.split("/")
        _node = None
        for i in range(len(topic_split)):
            notFound = True
            for node in LevelOrderIter(self.tree, maxlevel=i + 1):
                if node.name == topic_split[i]:
                    _node = node
                    notFound = False
            if notFound:
                return False

        return _node

    def setMessageParse(self, topic, parse_function):
        topic_split = topic.split("/")
        topic_split[0] = "<vehicleId>"
        topic_split[1] = "<deviceId>"
        _topic = "/".join(topic_split)
        _node = self.findNode(_topic)
        _node.function = parse_function
        return True

    def parseMessage(self, topic, payload):
        topic_split = topic.split("/")
        topic_split[0] = "<vehicleId>"
        topic_split[1] = "<deviceId>"
        _topic = "/".join(topic_split)
        _node = self.findNode(_topic)
        return _node.function(payload)