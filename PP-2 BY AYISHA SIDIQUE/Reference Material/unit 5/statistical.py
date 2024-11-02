import numpy as np 

arr=np.array([[1,2,3],[4,5,6]])
print("Mean",np.mean(arr))#average

print('Mean along axis 0 ', np.mean(arr,axis=0))
'''
axis 0 column
1+4=5=5/2=2.5, 2+5=7=7/2=3.5, 3+6=9=9/2=4.5
'''
print('Mean along axis 1 ', np.mean(arr,axis=1))
'''
axis 1 row
1+2+3=6=6/3=2, 4+5+6=15/3=5
'''




