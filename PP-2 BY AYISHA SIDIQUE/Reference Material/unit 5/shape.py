#The shape of an array is the number of elements in each dimension
import numpy as np
'''arr=np.array([[1,2,3],[5,6,7]])
#(2,3) 2 rows and 3 columns
print(arr.shape)'''

arr=np.array([1,2,3,4],ndmin=2)
print(arr)
print('shape of array :', arr.shape) 
