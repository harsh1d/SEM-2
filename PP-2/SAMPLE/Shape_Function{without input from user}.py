"""
This is the updated code with the addition of docstrings
"""
# Print the name "HARSH D"
print("HARSH D")

# Define the shape class
class shape():
  """
  This class represents a shape with a color attribute
  """
  def __init__(self, color):
    self.color = color

  def calculate_area(self):
    pass

# Define the circle class which inherits from shape
class circle(shape):
  """
  This class represents a circle, inherits from shape, and adds the radius attribute
  """
  def __init__(self, color, radius):
    super().__init__(color)
    self.radius = radius

  def calculate_area(self):
    self.area = 3.14 * self.radius * self.radius

# Define the Rectangle class which inherits from shape
class Rectangle(shape):
  """
  This class represents a rectangle, inherits from shape, and adds the length and width attributes
  """
  def __init__(self, color, length, width):
    super().__init__(color)
    self.length = length
    self.width = width

  def calculate_area(self):
    self.area = self.length * self.width

# Define the Triangle class which inherits from shape
class Triangle(shape):
  """
  This class represents a triangle, inherits from shape, and adds the base and height attributes
  """
  def __init__(self, color, base, height):
    super().__init__(color)
    self.base = base
    self.height = height

  def calculate_area(self):
    self.area = 0.5 * self.base * self.height

# Create an instance of circle
object = circle("red", 10)
object.calculate_area()
print(object.color)
print(object.area)
print(object.radius)

# Create an instance of Rectangle
object = Rectangle("red", 10, 10)
object.calculate_area()
print(object.color)
print(object.area)
print(object.length)
print(object.width)

# Create an instance of Triangle
object = Triangle("red", 10, 10)
object.calculate_area()
print(object.color)
print(object.area)
print(object.base)
print(object.height)