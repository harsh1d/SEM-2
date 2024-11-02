import threading

def showA():
    print("A Thread")
    
def showB():
    print("B Thread")
    
t1 = threading.Thread(target=showA)
t2 = threading.Thread(target=showB)

t1.start()
t2.start()

t2.join()
print("Final Thread")
t1.join()