x = [1, 2, 3]
y = x  #y references the same list as x

y.append(4)
print("x:", x)  #Output: x: [1, 2, 3, 4]
print("y:", y)  #Output: y: [1, 2, 3, 4]

#Function behavior with mutable objects
def double_list(list):
    for i in range(len(list)):
        list[i] *= 2

double_list(x)
print("x after doubling:", x)  #Output: [2, 4, 6, 8]

#Immutable behavior
a = 10
b = a
b += 5
print("a:", a, "b:", b)  #Output: a: 10 b: 15
