print("HARSH D")
class Animal:                  # Parent class
  """This class defines basic properties and behaviors of an animal."""

  def walk(self):              #self is the object
    """This method causes the animal to walk."""
    print("Animal is Walking...")  # Method

  def Communicate(self):        #Abstract Method
    """This method causes the animal to communicate."""
    print("Animal is Communicating...")   # Communicating is a method of Animal class

class Cat(Animal):    # Inheritance
  """This class defines properties and behaviors of a cat."""

  def walk(self):     # Polymorphism
    """This method causes the cat to walk."""
    print("Cat is Walking...")   #overrides the method of the parent class

  def Eat(self):         #Method Overriding
    """This method causes the cat to eat."""
    print("Cat is Eating...") # Overriding

object = Cat()          # object is an instance of class Cat
print(object.walk()) # Cat is Walking...
print(object.Eat())  # This line prints out "Cat is Eating..."