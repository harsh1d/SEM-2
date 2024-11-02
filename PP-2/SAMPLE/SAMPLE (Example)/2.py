class Parent:
    def fun1(self):
        print("Parent")
        
class Child(Parent):
    def fun1(self):
        print("CHILD")
        
obj=Child()
print(obj.fun1)
