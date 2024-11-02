class Rectangle:
    def __init__(self, width=0, height=0):
        self.width = width
        self.height = height
       
    def __add__(self, other):
        new_width = self.width + other.width
        new_height = self.height + other.height
        return Rectangle(new_width, new_height)

    def __lt__(self, other):
        return self.get_area() < other.get_area()

    def set_width(self, width):
        self.width = width

    def set_height(self, height):
        self.height = height

    def get_area(self):
        return self.width * self.height

    def __str__(self):
        return f"Rectangle with width {self.width} and height {self.height}"

object1 = Rectangle(5, 10)
object2 = Rectangle(3, 7)
print(object1 < object2)