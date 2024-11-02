import numpy as np
arr=np.array([2,4,3,1,0])
print(np.sum(arr))

arr=np.array([[2,4,0],[1,2,3]])
print(np.sum(arr,axis=0))
print(np.sum(arr,axis=1))
