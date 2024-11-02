from threading import *
print(current_thread().getName())
def mt():
    print("Child Thread \n")
    
child=Thread(target=mt)
child.start()
print("Executing thread name :\n",current_thread().getName())