import matplotlib.pyplot as plt
import numpy as np

x=np.random.rand(1000)
print(x)
'''generates a 1D array of 100 random values between
0 and 1'''
plt.hist(x)
plt.show()
'''
A histogram is a graph showing
frequency distributions.

It is a graph showing the number of observations
within each given interval.
'''
