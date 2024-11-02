"""
This program demonstrates inheritance in Python
"""
print("HARSH D")
# Define the parent class
class parent:
  def fun1(self):
      """
      This method prints a message indicating that it belongs to the parent class
      """
      print("This is the parent Class")

# Define the child class that inherits from the parent class
class child(parent):
  def fun2(self):
      """
      This method prints a message indicating that it belongs to the child class
      """
      print("This is Child CLass")

# Create an instance of the child class and call its methods
object=child()
object.fun1()
object.fun2()