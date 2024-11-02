class Student:
    def __init__(self, Name, Roll_Number, Marks):
        self.Name = Name
        self.Roll_Number = Roll_Number
        self.Marks = Marks
    def Stud(self):
        print(self.Name)
        print(self.Roll_Number)
        print(self.Marks)
obj = Student("John", 123, 9)
obj.Stud()