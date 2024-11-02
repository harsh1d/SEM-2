# Write a python program to create custom exceptions to check the age of citizens. If the age is above 18 years, then he/she is eligible to vote else not.
print("HARSH D")
class AgeError(Exception):
  pass

try:
  age = int(input("Enter your age: "))
  if age < 18:
    raise AgeError
  else:
    print("You are eligible to vote.")

except AgeError:
  print("You are not eligible to vote.")


