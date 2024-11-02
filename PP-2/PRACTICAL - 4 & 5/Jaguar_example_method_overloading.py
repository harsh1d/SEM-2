class Jaguar:
  def __init__(self,mileage):
    self.mileage = mileage

class Audi:
  def __init__(self,mileage):
    self.mileage = mileage

  def __add__(self,other):
    return self.mileage + other.mileage

  def __radd__(self,other):
    return self.mileage + other.mileage

jaguar = Jaguar(12)
audi = Audi(10)
print(jaguar.mileage)
print(audi.mileage)
print(audi + jaguar)  