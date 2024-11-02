print("HARSH D")
class Example:
  def Add(self,a,b):
    """This function adds two numbers"""
    x=a+b
    print(x)

  def Add(self,a,b,c):
    """This function adds three numbers"""
    x=a+b+c
    print(x)

E1=Example()
E1.Add(1,2)
E1.Add(1,2,3)

# Output = TypeError: Example.Add() missing 1 required positional argument: 'c'