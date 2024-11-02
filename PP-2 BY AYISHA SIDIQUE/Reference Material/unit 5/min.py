import numpy as np
a=np.array([[50,15,8,3,6],[5,9,2,7,55],[5,7,9,1,61]])
print(a)
'''print('Minimum value: ',np.min(a))
print('Minimum value: ',np.amin(a))
#min is just an alias for amin

#axis 0 means columns
print('Minimum value along axis 0: ', np.min(a,axis=0))
'''
#axis 1 means rows
print('Minimum value along axis 1: ', np.min(a,axis=1))

