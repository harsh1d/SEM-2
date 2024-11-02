print("HARSH D")
from multipledispatch import dispatch

# passing one parameter


@dispatch(int, int)
def sum(first, second):
  """Add two integers together and print the results"""
  result = first+second
  print(result)

# passing two parameters


@dispatch(int, int, int)
def sum(first, second, third):
  """Add three integers together and print the results"""
  result = first + second + third
  print(result)

# you can also pass data type of any value as per requirement


@dispatch(float, float, float)
def sum(first, second, third):
  """Add three floats together and print the results"""
  result = first + second + third
  print(result)


# calling sum method with 2 arguments
sum(2, 3) # this will give output of 6

# calling sum method with 3 arguments but all int
sum(2, 3, 2) # this will give output of 12

# calling sum method with 3 arguments but all float
sum(2.2, 3.4, 2.3) # this will give output of 17.985999999999997
