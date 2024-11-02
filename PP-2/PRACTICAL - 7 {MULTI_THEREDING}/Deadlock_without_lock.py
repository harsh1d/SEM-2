import threading


def first_function():
    for i in range(5):
        print('Lock Acquired')
        print('Executing the First Function')
        
def second_function():
    for i in range(5):
        print('Lock Acquired')
        print('Executing the Second Function')
        
thread_one = threading.Thread(target=first_function)
thread_two = threading.Thread(target=second_function)

thread_one.start()
thread_two.start()

thread_one.join()
thread_two.join()