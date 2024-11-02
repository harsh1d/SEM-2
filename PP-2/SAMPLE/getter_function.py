class Rectangle:
    def __init__(self, length, breath):
        self.__length = length
        self.__breath = breath

    def area(self):
        self.a = self.__length * self.__breath
        print(self.a)


A = Rectangle(10, 5)
A.area()
# print(A.length)
# this will give an attribute error  because the attributes are private and can't be accessed directly using { dot notation (.)}
# or object