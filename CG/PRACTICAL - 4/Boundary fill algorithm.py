import matplotlib.pyplot as plt
def flood_fill(image, x, y, target_color, fill_color):
    if image[y][x] != target_color and image[y][x] != fill_color:
        image[y][x] = fill_color
        if x > 0:
            flood_fill(image, x - 1, y, target_color, fill_color)
            if x < len(image[0]) - 1:
                flood_fill(image, x + 1, y, target_color, fill_color)
            if y > 0:
                flood_fill(image, x, y - 1, target_color, fill_color)
                if y < len(image) - 1:
                    flood_fill(image, x, y + 1, target_color, fill_color)
                    image = [[1 for _ in range(10)] for _ in range(10)]
                    for i in range(2, 8):
                        image[i][2] = 0
                        image[i][7] = 0
                        image[2][i] = 0
                        image[7][i] = 0
                        flood_fill(image, 5, 5, 1, 3)
                        plt.imshow(image, cmap='viridis', origin='lower')
                        plt.title('Flood Fill Algorithm Example')
                        plt.show()