# Write a python program to create custom exceptions to check whether the entered phone number is of 10 digits or not.
print("HARSH D")
class PhoneNumberException(Exception):
  pass

def check_phone_number(phone_number):
  if len(phone_number) != 10:
    raise PhoneNumberException("Phone number must be 10 digits long.")

try:
  phone_number = input("Enter your phone number: ")
  check_phone_number(phone_number)
  print("Phone number is valid.")

except PhoneNumberException as e:
  print(e)