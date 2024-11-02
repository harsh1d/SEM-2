print("HARSH D")
class Parent():
  def fun1(self):
    """
    This is the fun1 method of the Parent class
    """
    print("This is parent class")

class Child1(Parent):
  def fun2(self):
    """
    This is the fun2 method of the Child1 class
    """
    print("This is child1 class")

class Child2(Parent):
  def fun3(self):
     """
     This is the fun3 method of the Child2 class
     """
     print("This is child2 class")

class Child3(Parent):
  def fun4(self):
    """
    This is the fun4 method of the Child3 class
    """
    print("This is child3 class")

object=Child1()
object.fun1()
object.fun2()

object=Child2()
object.fun1()
object.fun3()

object=Child3()
object.fun1()
object.fun4()