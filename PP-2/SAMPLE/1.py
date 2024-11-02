class Company:
  def __init__(self, name, emp_id, salary, project):
      self.name = name
      self._emp_id = emp_id  # Protected attribute
      self.__salary = salary  # Private attribute
      self.project = project

  def show_salary(self):
      print(f"Employee {self.name}'s salary is: {self.__salary}")

class Employee(Company):
  def display_project(self):
      print(f"{self.name} is working on the project: {self.project}")

 # Creating an instance of the Company class
company_employee = Employee(name="John", emp_id="E001", salary=50000, project="Project X")

 # Accessing public attributes
print(f"Employee Name: {company_employee.name}")
print(f"Employee ID: {company_employee._emp_id}")  # Protected attribute

  # Accessing private attribute using name mangling
print(f"Employee Salary: {company_employee._Company__salary}")

  # Accessing protected attribute
company_employee.show_salary()

  # Accessing the project attribute in the child class
company_employee.display_project()
