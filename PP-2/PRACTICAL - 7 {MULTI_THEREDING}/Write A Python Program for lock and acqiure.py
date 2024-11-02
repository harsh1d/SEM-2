# Write A Python Program for lock and acqiure with multi threading
import threading
import time
class MyThread(threading.Thread):
    def __init__(self, name, delay):
        super().__init__()
        self.name = name
        self.delay = delay
    def run(self):
        print(f"{self.name} is running")
        time.sleep(self.delay)
        print(f"{self.name} is done")


# Create two threads
thread1 = MyThread("Thread 1", 2)
thread2 = MyThread("Thread 2", 1)
# Start the threads
thread1.start()
thread2.start()
# Wait for the threads to finish
thread1.join()
thread2.join()
print("All threads are done")