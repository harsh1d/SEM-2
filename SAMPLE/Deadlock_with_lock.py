import threading
lock = threading.Lock()

def first_function():
    for i in range(5):
        lock.acquire()
        print('Lock Acquired')
        print('Executing the First Function')
        lock.release()
        
def second_function():
    for i in range(5):
        lock.acquire()
        print('Lock Acquired')
        print('Executing the Second Function')
        lock.release()
        
thread_one = threading.Thread(target=first_function)
thread_two = threading.Thread(target=second_function)

thread_one.start()
thread_two.start()

thread_one.join()
thread_two.join()