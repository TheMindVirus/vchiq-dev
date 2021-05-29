import sys, time, socket, threading, pickle

#Crude Mock-up of VCHIQ Client in Python
#VCHIQ is Inter-Silicon Remote Procedure Call using a Vector Table
#and is the mechanism used for the ARM to communicate with the VC4 GPU

def server_say_hello():
    pass

def server_say_world():
    pass

def main():
    print("[VCHIQ_Client]")
    client = vchiq()
    hello = client.register_call(server_say_hello)
    world = client.register_call(server_say_world)
    while True:
        client.remote_call(hello)
        time.sleep(1)
        client.remote_call(world)
        time.sleep(1)

class vchiq:
    def __init__(self):
        self.vector = []
        self.max = 255
        self.header = "[VCHIQ]: "
        self.socket = None
        self.address = "127.0.0.1"
        self.port = 80
        self.mtu = 1500
        self.reconnect()

    def reconnect(self):
        print("Reconnecting...")
        self.socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.socket.connect((self.address, self.port))

    def register_call(self, method):
        print("Registering...")
        L = len(self.vector)
        if (L >= self.max):
            return -1
        self.vector.append(method)
        return L

    def remote_call(self, ID):
        print("Calling...")
        msg = self.header.encode() + pickle.dumps(self.vector[ID])
        self.socket.send(msg)

if __name__ == "__main__":
    main()
