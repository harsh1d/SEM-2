import matplotlib.pyplot as plt

def draw_line_Bresenham(x1, y1, x2, y2):
    dx = abs(x2 - x1)
    dy = abs(y2 - y1)
    xincr = 1 if x2 > x1 else -1
    yincr = 1 if y2 > y1 else -1

    if dx > dy:
        p = 2 * dy - dx
        x = x1
        y = y1
        end = dx
    else:
        p = 2 * dx - dy
        x = x1
        y = y1
        end = dy

    xcoordinates = []
    ycoordinates = []

    for i in range(end):
        xcoordinates.append(x)
        ycoordinates.append(y)

        if dx > dy:
            x += xincr
            if p < 0:
                p += 2 * dy
            else:
                y += yincr
                p += 2 * (dy - dx)
        else:
            y += yincr
            if p < 0:
                p += 2 * dx
            else:
                x += xincr
                p += 2 * (dx - dy)

    plt.plot(xcoordinates, ycoordinates)
    plt.xlabel("X-Axis")
    plt.ylabel("Y-Axis")
    plt.title("Bresenham Algorithm")
    plt.show()

# Example usage
x1 = int(input("Enter x1: "))
y1 = int(input("Enter y1: "))
x2 = int(input("Enter x2: "))
y2 = int(input("Enter y2: "))
draw_line_Bresenham(x1, y1, x2, y2)


# import matplotlib.pyplot as plt

# def draw_line_Bresenham(x1, y1, x2, y2):
#     dx = abs(x2 - x1)
#     dy = abs(y2 - y1)
#     xincr = 1 if x2 > x1 else -1
#     yincr = 1 if y2 > y1 else -1

#     if dx > dy:
#         p = 2 * dy - dx
#         x = x1
#         y = y1
#         end = dx
#     else:
#         p = 2 * dx - dy
#         x = x1
#         y = y1
#         end = dy

#     xcoordinates = []
#     ycoordinates = []

#     for i in range(end):
#         xcoordinates.append(x)
#         ycoordinates.append(y)

#         if dx > dy:
#             x += xincr
#             if p < 0:
#                 p += 2 * dy
#             else:
#                 y += yincr
#                 p += 2 * (dy - dx)
#         else:
#             y += yincr
#             if p < 0:
#                 p += 2 * dx
#             else:
#                 x += xincr
#                 p += 2 * (dx - dy)

#     plt.plot(xcoordinates, ycoordinates)
#     plt.xlabel("X-Axis")
#     plt.ylabel("Y-Axis")
#     plt.title("Bresenham Algorithm")
#     plt.show()

# # Example usage
# draw_line_Bresenham(1, 1, 8, 4)