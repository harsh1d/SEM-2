'''
The plot() function is used to draw points (markers)
in a diagram.

By default, the plot() function draws a line from
point to point.
'''
import matplotlib.pyplot as plt
import numpy as np
a=np.array(["Aiysha","Zainab","Megha"])
b=np.array([7.56,5.68,8.0])
plt.plot(a,b)
plt.title("Sem 1 Result")
plt.xlabel("Student Name")
plt.ylabel("SPI")
plt.show()





