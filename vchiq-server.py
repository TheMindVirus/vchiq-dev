import sys, time, socket, threading, pickle

#Crude Mock-up of VCHIQ Server in Python
#VCHIQ is Inter-Silicon Remote Procedure Call using a Vector Table
#and is the mechanism used for the ARM to communicate with the VC4 GPU

def server_say_hello():
    print("hello")

def server_say_world():
    print("world")

def main():
    print("[VCHIQ_Server]")
    server = vchiq()

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
        self.thread = threading.Thread(target = self.loop)
        self.thread.start()

    def reconnect(self):
        print("Reconnecting...")
        self.socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.socket.bind((self.address, self.port))

    def loop(self):
        while True:
            try:
                msg = self.socket.recv(self.mtu)
                header = msg[:len(self.header)].decode()
                code = msg[len(self.header):]
                if (header == self.header):
                    obj = pickle.loads(code)
                    obj()
                else:
                    print(msg)
            except Exception as error:
                print(error, file = sys.stderr)
                self.reconnect()

if __name__ == "__main__":
    main()
