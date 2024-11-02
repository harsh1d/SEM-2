class employee():
  """
  This class represents an employee with attributes name, id, and address
  """
  print("HARSH D")
  def __init__(self,name,id,address):
    self.name = name  # Initialize the name
    self.id = id      # Initialize the id
    self.address = address  # Initialize the address

class tempemployee(employee):
  """
  This class represents a temporary employee, inherits from employee, and adds the attribute email
  """
  def __init__(self,name,id,address,email):
    super().__init__(name,id,address)  # Call the base class constructor
    self.email = email  # Initialize the email

object = tempemployee("Ram","1","Bangalore","oqibz@example.com")
print(object.name)  # Print the name
print(object.id)    # Print the id
print(object.address)  # Print the address
print(object.email)  # Print the email

object.id = "2"    # Update the id
object.name = "Shyam"  # Update the name
object.address = "Chennai"  # Update the address
object.email = "tugrp@example.com"  # Update the email
print("Name = ",object.name)  # Print the updated name
print("ID = ",object.id)  # Print the updated id
print("Address = ",object.address)  # Print the updated address
print("Email = ",object.email)  # Print the updated email













# class employee():
#   def __init__(self,name,id,address):
#     self.name = name
#     self.id = id
#     self.address = address

# class tempemployee(employee):
#   def __init__(self,name,id,address,email):
#     super().__init__(name,id,address)
#     self.email = email

# object = tempemployee("Ram","1","Bangalore","oqibz@example.com")
# print(object.name)
# print(object.id)
# print(object.address)
# print(object.email)

# object.id = "2"
# object.name = "Shyam"
# object.address = "Chennai"
# object.email = "tugrp@example.com"
# print("Name = ",object.name)
# print("ID = ",object.id)
# print("Address = ",object.address)
# print("Email = ",object.email)