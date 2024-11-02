import threading
import os

def showA():
    print("A Thread")
    print("Name of Current Thread is :",threading.current_thread().name)
    print("ID of FIrst Thread is :",os.getpid())
    
def showB():
    print("B Thread")
    print("Name of Second Current Thread is :",threading.current_thread().name)
    print("ID of Second Thread is :",os.getpid())
    
t1 = threading.Thread(target=showA,name="Thread1")
t2 = threading.Thread(target=showB,name="Thread2")

t1.start()
t2.start()

t1.join()
t2.join()
print("Final Thread")