# class Company:
#     def__init__(self,name,id,salary,project):
#         self.name = name
#         self.id= id
#         self._project=project
#         self.__salary=salary
        
#     def show_salary(self,isPrivate=False):
#         if isPrivate:
#             return f"The salary of {self.name} is {self.__salary}$."
#         else:
#             raise Exception("You don't have  permission to access this data.")
    
#     @property
#     def project(self):
#         return self._project
    
#     @project.setter
#     def project(self,value):
#         if not value:
#             print("Project can't be empty!")
#         elif type(value)!=str:
#             print("Invalid input for the project field! It should be a string.")
#         else:
#             self._project = value
            
# company1 = Company('ABC Corp',12345,'Software Development','Python')
# print(company1.show_salary()) # Output : The salary of ABC Cor  p is $0..$999999.

# try:
#     print(company1._Company__salary) # Raises an exception because _    salary is a private attribute.
# except Exception as e:
#     print(e)

# # We can still access the _salary via getattr() function.
# print(getattr(company1,"_Company__salary")) # Output : $0..$999999
# # We can set the _salary using setattr().
# setattr(company1,"_Company__salary","$100,000 - $1,000,000")
# print(company1.show_salary()) # Now it will output "$100,000 - $1,000,000".
# #We can also use property decorator to make sure that we are accessing/modifying the right attribute.
# print(company1.project)       # Output : Python 
# company1.project="Web Development"
# print(company1.project)       # Output : Web Development


class Company:
    def __init__(self, name, id, salary, project):
        self.name = name
        self.id = id
        self.__salary = salary
        self._project = project

    def show_salary(self):
        return self.__salary

class Employee(Company):
    def display_project(self):
        return self._project

# Creating an object of Company
company = Company("Company X", 1234, 5000, "Project A")

# Accessing private attribute salary using name mangling
print(company._Company__salary)

# Creating an object of Employee class
employee = Employee("Employee Y", 5678, 7000, "Project B")

# Displaying salary and project of the employee
print("Employee Salary:", employee.show_salary())
print("Employee Project:", employee.display_project())