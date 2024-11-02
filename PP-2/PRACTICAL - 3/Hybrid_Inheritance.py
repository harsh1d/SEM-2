# This code defines a Parent class and multiple Child classes that inherit from the Parent class.
print("HARSH D")

class Parent:
  def fun1(self):
    """
    This method represents the functionality of the parent class.
    """
    print("This is parent class")

class Child1(Parent):
  def fun2(self):
    """
    This method represents the functionality of the child1 class.
    """
    print("This is child1 class")

class Child2(Parent):
  def fun3(self):
    """
    This method represents the functionality of the child2 class.
    """
    print("This is child2 class")

class Child3(Parent):
  def fun4(self):
    """
    This method represents the functionality of the child3 class.
    """
    print("This is child3 class")

class HybridChild(Child1, Child2):
  """
  This class inherits from both Child1 and Child2 classes.
  """
  pass

object = HybridChild()
object.fun1()
object.fun2()
object.fun3()