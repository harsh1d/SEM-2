class Math:
    @staticmethod
    def sum_number(a,b):
        Z=a+b
        print(Z)
        
    @classmethod
    def product_number(cls,a,b):
        Z=a*b
        print(Z)
        
def subtract_number(self,a,b):
        Z=a-b
        print(Z)
        
Math.sum_number(2,3)
Math.product_number(2,3)
Math.subtract_number(2,3)