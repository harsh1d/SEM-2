#draw a line using DDA 
from matplotlib import pyplot as plt
plt.rcParams["figure.figsize"] = [7.00, 3.50]
plt.rcParams["figure.autolayout"] = True

try:
    xo, yo = map(int, input("Enter the starting points: ").split(","))
    xn, yn = map(int, input("Enter the ending points: ").split(","))
except ValueError:
    print("Invalid input. Please enter the points in the format (x, y).")
    exit()

dx = xn - xo
dy = yn - yo

m=dy/dx

steps = max(abs(dx),abs(dy))

x_Codes=[xo]
y_Codes=[yo]

if m>1:
    for i in range(steps):
        x_Codes.append((1/m)+x_Codes[i])
        y_Codes.append(1+y_Codes[i])
        
if m<1:
    for i in range(steps):
        x_Codes.append(1+x_Codes[i])
        y_Codes.append(m+y_Codes[i])
        
plt.grid()
print(f"{x_Codes},{y_Codes}")
plt.plot(x_Codes,y_Codes,marker="o", markersize=10, markeredgecolor="cyan", markerfacecolor="pink")
plt.show()

#calculate the points between the starting point 5 6 and ending point at 8,12
#calculate the points between starting point 5 6 and ending point 13 10
#calculate the points between starting point 1 7 and ending point 11 17


# # import matplotlib.pyplot as plt
# # print("Enter the value of x1: ")
# # x1 = int(input())
# # print("Enter the value of x2: ")
# # x2 = int(input())
# # print("Enter the value of y1: ")
# # y1 = int(input())
# # print("Enter the value of y2: ")
# # y2 = int(input())

# # dx = x2 - x1
# # dy = y2 - y1

# # if abs(dx) > abs(dy):
# #     steps = abs(dx)
# # else:
# #     steps = abs(dy)

# # xincrement = dx/steps
# # yincrement = dy/steps

# # i = 0

# # xcoordinates = []
# # ycoordinates = []


# # while i < steps:
# #     i +=1
# #     x1 = x1 + xincrement
# #     y1 = y1 + yincrement
# #     print("X1: ",x1, "Y1: ", y1)
# #     xcoordinates.append(x1)
# #     ycoordinates.append(y1)

# # plt.plot(xcoordinates, ycoordinates)

# # #Naming the Axis
# # plt.xlabel("X-Axis")
# # plt.ylabel("Y-Axis")

# # #Graph title
# # plt.title("DDA Algorithm")

# # #show the plot

# # plt.show()


# import matplotlib.pyplot as plt

# def draw_line_DDA(x1, y1, x2, y2):
#       dx = x2 - x1
#       dy = y2 - y1

#       steps = abs(dx) if abs(dx) > abs(dy) else abs(dy)

#       xincrement = dx / steps
#       yincrement = dy / steps

#       xcoordinates = []
#       ycoordinates = []

#       for i in range(steps):
#           x1 += xincrement
#           y1 += yincrement
#           xcoordinates.append(x1)
#           ycoordinates.append(y1)

#       plt.plot(xcoordinates, ycoordinates)

#       plt.xlabel("X-Axis")
#       plt.ylabel("Y-Axis")

#       plt.title("DDA Algorithm")

#       plt.show()

#   # Example usage
# draw_line_DDA(1, 1, 8, 4)
