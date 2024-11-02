'''
Synatx: numpy.linspace(start, stop, num=50, endpoint=True , retstep=False, dtype=None, axis=0)

Parameters:

start: [optional] start of interval range. By default
start = 0
stop: end of interval range
num: [int, optional] No. of samples to generate
retstep: If True, Stop is the last sample By default
restep = False
endpoint: If True, stop is included as the last value.
If False, stop is excluded. By default  endpoint=True.
dtype: type of output array
axis: If start and stop are arrays, axis specifies on
what axis will the values be added. If axis = 0, value
is added to front, if  axis = -1 value is added at the
end.

'''
import numpy as np
'''print(np.arange(1,3)) #[1 2]
print(np.linspace(1,3,num=5))
#[1.  1.5 2.  2.5 3. ]'''
#print(np.linspace(3,5,num=5,retstep=True))
print(np.linspace(1,3,5,endpoint=False,retstep=True))



