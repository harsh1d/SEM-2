from threading import *

class ex:
    def myfunc(self):
        for x in range(7):
            print("CHILD")
            
obj=ex()
thread1=Thread(target=obj.myfunc)
thread1.start()
thread1.join()
print("DONE")