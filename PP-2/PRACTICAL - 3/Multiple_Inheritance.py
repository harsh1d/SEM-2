print("HARSH D")
class parent1():
  '''
  This is the parent1 class which has a method fun1
  '''
  def fun1(self):
      # Method to print a message
      print("This is Parent 1")

class parent2():
  '''
  This is the parent2 class which has a method fun2
  '''
  def fun2(self):
      # Method to print a message
      print("This is Parent 2")


class child(parent1,parent2):
  '''
  This is the child class inheriting from parent1 and parent2
  '''
  def fun3(self):
      # Method to print a message
      print("This is a Child Class Calling Parent 1 & Parent 2")

obj=child()
obj.fun1()
obj.fun2()
obj.fun3()