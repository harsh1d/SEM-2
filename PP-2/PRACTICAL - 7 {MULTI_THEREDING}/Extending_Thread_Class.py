import threading
import time

class mythread(threading.Thread):
    def run(self):
        for x in range(7):
            print("Hi From HarsH")
            
a = mythread()
a.start()
a.join()

print("Bye From",current_thread().getName())