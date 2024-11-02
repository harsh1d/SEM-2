# Define classes A, B, C, and D to demonstrate Method Resolution Order (MRO)
class A:
  """
  This is class A
  """
  def process(self):
    print('Process class A')

class B(A):
  """
  This is class B, inheriting from A
  """
  def process(self):
    print('Process class B')

class C(A):
  """
  This is class C, inheriting from A
  """
  def process(self):
    print('Process class C')

class D(B, C):
  """
  This is class D, inheriting from both B and C
  """
  pass

# Print the Method Resolution Order of class D
print(D.mro())

# Create an instance of class D and call its process method
d = D()
d.process()