print("HARSH DEVRE")
class Student:
    """
    This class represents a student with attributes Name, Roll_Number, and Marks.
    """
    def __init__(self):
        """
        Initializes the student attributes by taking input from the user.
        """
        self.Name = input("Enter your name:")
        self.Roll_Number = int(input("Enter your roll number:"))
        self.Marks = int(input("Enter your marks:"))

        
    def Stud(self):
        """
        Prints the student details.
        """
        print(self.Name)
        print(self.Roll_Number)
        print(self.Marks)

# Create a Student object and call the Stud method to print the details
obj = Student()
obj.Stud()

