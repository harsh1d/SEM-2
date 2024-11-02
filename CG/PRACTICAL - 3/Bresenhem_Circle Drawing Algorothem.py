import numpy as np
import matplotlib.pyplot as plt
print("HARSH D")
def bresenham_circle(center_x, center_y, radius):
    x = radius
    y = 0
    d = 3 - 2 * radius

    points = []

    while x >= y:
        # Add points in all octants
        points.append((center_x + x, center_y + y))
        points.append((center_x + y, center_y + x))
        points.append((center_x - y, center_y + x))
        points.append((center_x - x, center_y + y))
        points.append((center_x - x, center_y - y))
        points.append((center_x - y, center_y - x))
        points.append((center_x + y, center_y - x))
        points.append((center_x + x, center_y - y))

        # Mid-point inside or on the perimeter
        if d < 0:
            d = d + 4 * y + 6
        else:
            d = d + 4 * (y - x) + 10
            x -= 1
        y += 1

    return points

# Get center coordinates and radius from user
center_x = int(input("Enter center X coordinate: "))
center_y = int(input("Enter center Y coordinate: "))
radius = int(input("Enter radius of the circle: "))

# Generate points for the circle
circle_points = bresenham_circle(center_x, center_y, radius)

# Plot the circle
x_values, y_values = zip(*circle_points)
plt.scatter(x_values, y_values)
plt.gca().set_aspect('equal', adjustable='box')
plt.title('Bresenham Circle Algorithm')
plt.xlabel('X')
plt.ylabel('Y')
plt.grid(True)
plt.show()
