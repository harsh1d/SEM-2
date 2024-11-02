# This class represents a Jaguar car.
print("HARSH D")
class Jaguar:
  """
  This class represents a Jaguar car.
  """
  def __init__(self,mileage):
    """
    Initialize the Jaguar car.

    Args:
      mileage: The mileage of the car.
    """
    self.mileage = mileage

# This class represents an Audi car.
class Audi:
  """
  This class represents an Audi car.
  """
  def __init__(self,mileage):
    """
    Initialize the Audi car.

    Args:
      mileage: The mileage of the car.
    """
    self.mileage = mileage

  def __add__(self,other):
    """
    Add the mileage of two cars.

    Args:
      other: The other car.

    Returns:
      The combined mileage of the two cars.
    """
    return self.mileage + other.mileage

# Create a Jaguar car.
jaguar = Jaguar(12)

# Create an Audi car.
audi = Audi(10)

# Print the mileage of the Jaguar car.
print(jaguar.mileage)

# Print the mileage of the Audi car.
print(audi.mileage)

# Print the combined mileage of the Jaguar and Audi cars.
print(audi + jaguar)