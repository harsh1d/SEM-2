class Animal:
    def walk(self):
        print("Animal  Walk")
        
    def communicate(self):
        print("Animal Communicate")
        
class Cat(Animal):
    def walk(self):
        print("Cat Walk")
        
    def eat(self):
        print("Cat Eats")
        
obj = Cat()
print(obj.walk())
print(obj.eat())