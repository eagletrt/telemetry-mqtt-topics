from anytree import Node, RenderTree, LevelOrderIter, AsciiStyle, find


class MessageParser:

    def __init__(self):
        self.tree = Node("<vehicleId>",layer=0, function=None)
        self.addNode("<vehicleId>", layer=1)
        self.addNode("<vehicleId>/<deviceId>", layer=2)
        self.addNode("<vehicleId>/<deviceId>/version", layer=3)
        self.addNode("<vehicleId>/<deviceId>/data", layer=3)
        self.addNode("<vehicleId>/<deviceId>/data/primary", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/secondary", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/bms", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/inverters", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/simulator", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/gps", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/brusa", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/temporary", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger", layer=4)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can", layer=5)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/imuAngularRate", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/imuAcceleration", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/vehiclePosition", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/vehicleSpeed", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/frontAngularVelocity", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/rearLeftAngularVelocity", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/rearRightAngularVelocity", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/can/steerAngle", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS", layer=5)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS/hpposllh", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS/pvt", layer=6)
        self.addNode("<vehicleId>/<deviceId>/data/cameraLogger/GPS/relposned", layer=6)
        self.addNode("<vehicleId>/<deviceId>/extra_data_to_log", layer=3)
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data", layer=3)
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data/vehicleState", layer=4)
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data/baseline", layer=4)
        self.addNode("<vehicleId>/<deviceId>/extra_tlm_data/gpsMapOrigins", layer=4)
        self.addNode("<vehicleId>/<deviceId>/last_update", layer=3)
        self.addNode("<vehicleId>/<deviceId>/status", layer=3)
        self.addNode("<vehicleId>/<deviceId>/status/info", layer=4)
        self.addNode("<vehicleId>/<deviceId>/status/error", layer=4)
        self.addNode("<vehicleId>/<deviceId>/status/alert", layer=4)
        self.addNode("<vehicleId>/<deviceId>/status/canFrequencies", layer=4)
        self.addNode("<vehicleId>/<deviceId>/status/lapCounterStatus", layer=4)
        self.addNode("<vehicleId>/<deviceId>/status/lapCounterLaps", layer=4)
        self.addNode("<vehicleId>/<deviceId>/command", layer=3)
        self.addNode("<vehicleId>/<deviceId>/command/steer", layer=4)
        self.addNode("<vehicleId>/<deviceId>/command/steerStatus", layer=4)
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/request", layer=4)
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/response", layer=4)
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>", layer=4)
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/begin", layer=5)
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/end", layer=5)
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk", layer=5)
        self.addNode("<vehicleId>/<deviceId>/fileTransaction/<transactionId>/chunk_ack", layer=5)
        self.addNode("<vehicleId>/<deviceId>/info", layer=3)
        self.addNode("<vehicleId>/<deviceId>/info/version", layer=4)
        self.addNode("<vehicleId>/<deviceId>/info/user", layer=4)
        self.addNode("<vehicleId>/<deviceId>/info/telemetryReplay", layer=4)
        self.addNode("<vehicleId>/<deviceId>/info/telemetryReplay/ready", layer=5)
        self.addNode("<vehicleId>/<deviceId>/info/telemetryReplay/start", layer=5)
        self.addNode("<vehicleId>/<deviceId>/info/session", layer=4)
        self.addNode("<vehicleId>/<deviceId>/info/session/started", layer=5)
        self.addNode("<vehicleId>/<deviceId>/info/session/stopped", layer=5)
        self.addNode("<vehicleId>/<deviceId>/info/session/logging", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action", layer=3)
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/telemetryConfig/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/sessionConfig/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/carConfig", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/carConfig/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/carConfig/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/carConfig/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/baselineConfig/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/handcartSettings/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/rawJsonConfig/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterConfig/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack/set", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack/get", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/lapCounterTrack/content", layer=5)
        self.addNode("<vehicleId>/<deviceId>/action/kill", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/start", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/reset", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/stop", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/startBaseline", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/stopBaseline", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/precharge", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/balance", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/stopBalance", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/charge", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/stopCharge", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/raw", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/resetLapcounter", layer=4)
        self.addNode("<vehicleId>/<deviceId>/action/setLapcounterStatus", layer=4)
        

    def addNode(self, topic, layer):
        if topic != "":
            topic_split = topic.split("/")
            print(topic_split[len(topic_split) - 1])
            _parent = find(
                self.tree,
                lambda node: node.name == topic_split[len(topic_split) - 2]
                and node.layer == layer - 1,
            )
            Node(
                topic_split[len(topic_split) - 1],
                parent=_parent,
                layer=layer,
                function=None,
            )
    # TODO fix
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
                break

        return _node

    def setMessageParse(self, topic, parse_function,argument):
        topic_split = topic.split("/")
        topic_split[0] = "<vehicleId>"
        topic_split[1] = "<deviceId>"
        _topic = "/".join(topic_split)
        _node = self.findNode(_topic)
        if _node != None:
            _node.function = lambda payload: parse_function(payload,argument)

    def parseMessage(self, topic, payload):
        topic_split = topic.split("/")
        topic_split[0] = "<vehicleId>"
        topic_split[1] = "<deviceId>"
        _topic = "/".join(topic_split)
        _node = self.findNode(_topic)
        return _node.function(payload)