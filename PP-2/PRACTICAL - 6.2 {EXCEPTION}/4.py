# Write a python program to create custom exceptions to check if the employee's salary is above 10,00 or not. If it is above 10,000, then he is eligible for promotion else he isn’t.class SalaryException(Exception):
print("HARSH D")
class SalaryException(Exception):
    def __init__(self, message):
        self.message = message

# Function to check salary for promotion eligibility
def check_promotion_eligibility(salary):
    if salary > 10000:
        return "You are eligible for promotion"
    else:
        raise SalaryException("You are not eligible for promotion")

# Example usage
try:
    # Assume the salary is provided by the user or retrieved from a database
    salary = int(input("Enter your salary: "))  # Prompt the user to enter their salary
    message = check_promotion_eligibility(salary)
    print(message)
except SalaryException as e:
    print(e)