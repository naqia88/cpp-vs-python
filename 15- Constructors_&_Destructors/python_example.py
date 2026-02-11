class Student:
    def __init__(self, name):
        self.name = name
        print("Constructor Called. Name:", self.name)

    def __del__(self):
        print("Destructor Called. Object Destroyed.")

s1 = Student("Firdous")
del s1
