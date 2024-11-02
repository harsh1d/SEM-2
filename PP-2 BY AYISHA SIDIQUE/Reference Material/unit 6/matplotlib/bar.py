import matplotlib.pyplot as plt
import numpy as np
a=np.array(["Aiysha","Zainab","Megha"])
b=np.array([7.56,5.68,8.0])
plt.ylim(0,10)
plt.bar(a,b,color="red")
#plt.grid()
plt.grid(axis='x')
#plt.grid(axis='y')
plt.show()
