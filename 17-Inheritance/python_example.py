#Parent Class 1
class Animal:
    def eat(self):
        print("Animal eats food")

#Parent Class 2
class Pet:
    def play(self):
        print("Pet loves to play")

#Child Class (Multiple Inheritance)
class Dog(Animal, Pet):
    def bark(self):
        print("Dog barks")


d = Dog()
d.eat()    #From Animal
d.play()   #From Pet
d.bark()   #Own method
