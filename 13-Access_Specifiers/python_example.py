class Student:
    def __init__(self, name, roll, marks):
        self.name = name          #Public
        self._marks = marks       #Protected (convention)
        self.__roll = roll        #Private (name mangling)

    def show_details(self):
        print("Name:", self.name)
        print("Roll Number:", self.__roll)
        print("Marks:", self._marks)


#Object creation
s1 = Student("Firdous", 101, 88)

#Access
print(s1.name)      #Public → Allowed
#print(s1.__roll)  #Private → Error if uncommented

s1.show_details()
