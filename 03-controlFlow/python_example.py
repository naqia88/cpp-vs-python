number = 10

# Conditional Statements
if number > 0:
    print("Number is positive!")     # Output:Number is positive
elif number == 0:
    print("Number is zero!")
else:
    print("Number is negative!")

# For Loop
print("For loop output:", end=" ")
for i in range(1, 11):
    print(i, end=" ")               # Output: 1 2 3 4 5 6 7 8 9 10 
print()

# While Loop
count = 10
print("While loop output:", end=" ")
while count > 0:
    print(count, end=" ")           # Output: 10 9 8 7 6 5 4 3 2 1
    count -= 1
