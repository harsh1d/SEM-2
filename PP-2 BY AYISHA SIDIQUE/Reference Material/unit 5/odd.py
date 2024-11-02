'''
Create a 1-D array.
Create another array from the first one
and it should have only odd values of
the first array.
'''
import numpy as np
a=np.array([1,2,3,4,5,6,6,7,7,8,9])
b=a[a%2!=0]
print(b)
print(type(b))

