print("HARSH D")
class Example:
  """This class can add numbers together."""
  def Add(self,x=0,y=0,z=0):
    """Adds three numbers together and prints the result.

    Keyword Arguments:
    x: The first number
    y: The second number
    z: The third number
    """

    # Add the three numbers   
    sum = x+y+z  
    
    # Print the result   
    print("Sum = ",sum)

obj = Example()
obj.Add(10,20,30)
obj.Add(10)
obj.Add(10,20)
