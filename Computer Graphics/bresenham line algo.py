#import matplotlib.pyplot as ptl

#step-01: Take start point & end point from user as input

x0 = int(input("Starting X-coordinate:"))
y0 = int(input("Starting Y-coordinate:"))
x1 = int(input("Starting X-coordinate:"))
y1 = int(input("Starting Y-coordinate:"))

#TO store coordinates values
xPoint = []

yPoint = []

#step-02: Calculate dx,dy, m(slope) and 2dy-2dx

dx=x1-x0
dy=y1-y0
m=dy/dx

n=2*dy-2*dx

#step-3 Calculate the number of steps
if(abs(dx)>abs(dy)):
    steps=dx
    print("Steps:",dx)
else:
    steps=dy
    print("Steps:",dy)

#step-4: Calculate the initial decision parameter

P = 2*dy - dx
print("Initial decision parameter: ",P)

#Step-5: calculate the next point

#current points
xi = x0
yi = y0
Pi = P

for i in range(steps):
   ''' if m>=0:
        if Pi>=0:
            #next points
            x=xi+1
            y=yi+1
        
            Pk = Pi+2*dx-2*dy
        
            print(x,y)
            xPoint.append(x)
            yPoint.append(y)
        
            #assigning the current points to find next point 
            xi = x
            yi = y
            Pi = Pk
        elif Pi<0:
            #next point
            x=xi
            y=yi+1
        
            Px = Pi+2*dx
        
            print(x,y)
            xPoint.append(x)
            yPoint.append(y)
        
            #assigning the current points to find next point 
            xi = x
            yi = y
            Pi = Pk
    elif m<1:'''
   if Pi>=0:
        #next points
        x=xi+1
        y=yi+1
        
        Pk = Pi+2*dy-2*dx
        
        print(x,y)
        xPoint.append(x)
        yPoint.append(y)
        
        #assigning the current points to find next point 
        xi = x
        yi = y
        Pi = Pk
   elif (Pi<0):     #next point
        x=xi+1
        y=yi
        
        Px = Pi+2*dy
        
        print(x,y)
        xPoint.append(x)
        yPoint.append(y)
        
        #assigning the current points to find next point 
        xi = x
        yi = y
        Pi = Pk

print(xPoint)
print(yPoint)
#plt.plot(L1,L2,marker="o",markersize=10,mec="black",mfc="red")

#plt.show()
