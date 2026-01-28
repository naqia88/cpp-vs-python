#Function with default argument
def add(a, b=10):
    return a + b

#Function with keyword arguments
def greet(name, greeting="Hello"):
    return f"{greeting}, {name}!"

#Function with arbitrary arguments
def sum_all(*args):
    return sum(args)

#Function calls
print("Add with 2 args:", add(5, 15))   #Output: 20
print("Add with 1 arg:", add(5))        #Output: 15

print(greet("Alice"))                    #Output: Hello, Alice!
print(greet("Bob", greeting="Hi"))      #Output: Hi, Bob!

print("Sum all numbers:", sum_all(1,2,3,4,5))  #Output: 15
