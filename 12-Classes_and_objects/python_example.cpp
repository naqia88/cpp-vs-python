class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    #Method
    def introduce(self):
        print(f"Name: {self.name}, Age: {self.age}")


#Object creation
s1 = Student("Ayesha", 21)

#Call method
s1.introduce()
