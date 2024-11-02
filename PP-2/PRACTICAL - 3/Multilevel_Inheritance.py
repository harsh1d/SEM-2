print("HARSH D")
class Grandparent():
    """
    This is the Grandparent class
    """
    def fun1(self):
        """
        This method prints a message for Grandparent
        """
        print("This is Grandparent")

class Parent(Grandparent):
    """
    This is the Parent class
    """
    def fun2(self):
        """
        This method prints a message for Parent
        """
        print("This is Parent")

class child(Parent):
    """
    This is the child class
    """
    def fun3(self):
        """
        This method prints a message for child
        """
        print("This is child")

# Creating objects and calling methods
obj = child()
obj.fun1()
obj.fun2()
obj.fun3()

object = Parent()
object.fun1()
object.fun2()

object1 = Grandparent()
object1.fun1()