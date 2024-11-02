import matplotlib.pyplot as plt

xc = int(input("Enter center x-coordinate: "))
yc = int(input("Enter center y-coordinate: "))
r =  int(input("Enter value of radius: "))

points = []
x = r
y = 0
d = 1 - r

while x >= y:
    points.append((x + xc, y + yc))
    points.append((y + xc, x + yc))
    points.append((-y + xc, x + yc))
    points.append((-x + xc, y + yc))
    points.append((-x + xc, -y + yc))
    points.append((-y + xc, -x + yc))
    points.append((y + xc, -x + yc))
    points.append((x + xc, -y + yc))

    if d <= 0:
        d += 2 * y + 3
    else:
        d += 2 * (y - x) + 5
        x -= 1
    y += 1

print("Coordinates of the circle:")
for point in points:
    print(point)

# Plot the circle
x = [point[0] for point in points]
y = [point[1] for point in points]
plt.plot(x, y, 'o')
plt.show()