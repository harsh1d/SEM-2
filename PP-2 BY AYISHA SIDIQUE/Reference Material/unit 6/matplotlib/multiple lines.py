import matplotlib.pyplot as plt
import numpy as np

ov=np.array([1,2,3,4,5,6])
India=np.array([6,6,5,4,2,5])
Aus=np.array([1,1,0,1,2,1])

plt.plot(ov,India)
plt.plot(ov,Aus)

plt.xlabel("Over")
plt.ylabel("Run")
plt.show()
