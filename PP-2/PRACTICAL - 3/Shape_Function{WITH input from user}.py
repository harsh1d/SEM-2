"""
This program defines classes to represent shapes and calculates their areas.
"""

# Displaying a name
print("HARSH D")

# Defining the shape class
class shape():
  def __init__(self, color):
    """
    Initializes the shape with a color
    """
    self.color = input("Enter the color: ")  # Get user input for color

  def calculate_area(self):
    """
    Calculates the area of the shape (not implemented in this base class)
    """
    pass

# Defining the circle class which inherits from shape
class circle(shape):
  def __init__(self, color, radius):
    """
    Initializes the circle with a color and radius
    """
    super().__init__(color)  # Call the shape class constructor
    self.radius = int(input("Enter the radius for circle: "))  # Get user input for radius

  def calculate_area(self):
    """
    Calculates the area of the circle
    """
    self.area = 3.14 * self.radius * self.radius  # Calculate the area of the circle

# Defining the Rectangle class which inherits from shape
class Rectangle(shape):      
  def __init__(self, color, length, width):
    """
    Initializes the rectangle with a color, length, and width
    """
    super().__init__(color)  # Call the shape class constructor
    self.length = int(input("Enter the length for rectangle: "))  # Get user input for length
    self.width = int(input("Enter the width for rectangle: "))  # Get user input for width

  def calculate_area(self):
    """
    Calculates the area of the rectangle
    """
    self.area = self.length * self.width  # Calculate the area of the rectangle

# Defining the Triangle class which inherits from shape
class Triangle(shape):
  def __init__(self, color, base, height):
    """
    Initializes the triangle with a color, base, and height
    """
    super().__init__(color)  # Call the shape class constructor
    self.base = int(input("Enter the base for triangle: "))  # Get user input for base
    self.height = int(input("Enter the height for triangle: "))  # Get user input for height

  def calculate_area(self):
    """
    Calculates the area of the triangle
    """
    self.area = 0.5 * self.base * self.height  # Calculate the area of the triangle

# Create an instance of circle and calculate its area
object = circle("red", 10)
object.calculate_area()
print(object.color)  # Print the color
print(object.area)  # Print the area
print(object.radius)  # Print the radius

# Create an instance of rectangle and calculate its area
object = Rectangle("red", 10, 10)
object.calculate_area()
print(object.color)  # Print the color
print(object.area)  # Print the area
print(object.length)  # Print the length
print(object.width)  # Print the width

# Create an instance of triangle and calculate its area
object = Triangle("red", 10, 10)
object.calculate_area()
print(object.color)  # Print the color
print(object.area)  # Print the area
print(object.base)  # Print the base
print(object.height)  # Print the height