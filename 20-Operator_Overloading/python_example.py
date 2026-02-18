class Box:
    def __init__(self, width):
        self.width = width

    #Operator Overloading (+)
    def __add__(self, other):
        return Box(self.width + other.width)

    #Operator Overloading (==)
    def __eq__(self, other):
        return self.width == other.width


b1 = Box(10)
b2 = Box(20)

b3 = b1 + b2          #+ overloaded
print("Total Width:", b3.width)

if b1 == b2:          #== overloaded
    print("Boxes are Equal")
else:
    print("Boxes are Not Equal")
