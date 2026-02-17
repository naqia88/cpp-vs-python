from abc import ABC, abstractmethod

#Abstract Class
class Shape(ABC):
    
    @abstractmethod
    def draw(self):
        pass

#Derived Class
class Circle(Shape):
    def draw(self):
        print("Drawing Circle")


s = Circle()   #Abstraction in action
s.draw()        #Only essential behavior exposed
