# A Code for square in multi threading
print("HARSH D ")
import threading
import time
def square(numbers):
  print("calculate square numbers")
  for n in numbers:
    time.sleep(0.2)
    print("square: ", n*n)

def cube(numbers):
  print("calculate cube numbers")
  for n in numbers:
    time.sleep(0.2)
    print("cube: ", n*n*n)

arr = [2,3,8,9]
t1 = threading.Thread(target=square, args=(arr,))
t2 = threading.Thread(target=cube, args=(arr,))
t1.start()
t2.start()
t1.join()
t2.join()
print("Done")