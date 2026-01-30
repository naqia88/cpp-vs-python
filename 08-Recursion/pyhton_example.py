#Recursive function to calculate factorial
def factorial(n):
    if n <= 1:       #base case
        return 1
    return n * factorial(n - 1)  #recursive call

num = 5
print(f"Factorial of {num} is {factorial(num)}")

#Output: Factorial of 5 is 120
