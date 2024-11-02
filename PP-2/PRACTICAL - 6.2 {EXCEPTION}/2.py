# Write a python program to divide two numbers and handle if a 0 division error or value error occurs during the division, if there is no exception while dividing two numbers then print the result.
# Solution:
print("HARSH D")
try:
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    result = num1 / num2
    print("Result:", result)

except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

except ValueError:
    print("Error: Invalid input. Please enter valid numbers.")

except Exception as e:
    print("An error occurred:", str(e))

# Output:
# Enter the first number: 10
# Enter the second number: 0
# Error: Division by zero is not allowed.
# Enter the first number: 10
# Enter the second number: 5
# Result: 2.0
