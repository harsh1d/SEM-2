class Maths:
    """
    A class that demonstrates different types of methods for arithmetic operations
    """

    @staticmethod
    def sum_numbers(a, b):
        """
        A static method to calculate the sum of two numbers
        """
        z = a + b
        print(z)
    
    @classmethod
    def product_numbers(cls, a, b):
        """
        A class method to calculate the product of two numbers
        """
        z = a * b
        print(z)

    def subtract_numbers(self, a, b):
        """
        An instance method to calculate the difference between two numbers
        """
        z = a - b
        print(z)

# Calling the defined methods
Maths.sum_numbers(2, 3)  # This will print the sum of 2 and 3
Maths.product_numbers(2, 3)  # This will print the product of 2 and 3
Maths().subtract_numbers(2, 3)  # This will print the difference of 2 and 3