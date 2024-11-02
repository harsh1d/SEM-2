from abc import ABC,abstractmethod
# This program will print the number of sides of different polygons.
print("HARSH D")

class Polygon(ABC):
  """Represents a polygon."""
  @abstractmethod
  def Side(self):
    """Prints the number of sides of the polygon."""
    pass

class Triangle(Polygon):
  """Represents a triangle."""
  def Side(self):
    """Prints that the polygon has 3 sides."""
    print("I have 3 sides")

class Pentagon(Polygon):
  """Represents a pentagon."""
  def Side(self):
    """Prints that the polygon has 5 sides."""
    print("I have 5 sides")

class Hexagon(Polygon):
  """Represents a hexagon."""
  def Side(self):
    """Prints that the polygon has 6 sides."""
    print("I have 6 sides")

class Square(Polygon):
  """Represents a square."""
  def Side(self):
    """Prints that the polygon has 4 sides."""
    print("I have 4 sides")

object=Triangle()
object.Side()
object=Pentagon()
object.Side()
object=Hexagon()
object.Side()
object=Square()
object.Side()