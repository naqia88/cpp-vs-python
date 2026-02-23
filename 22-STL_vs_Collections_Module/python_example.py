from collections import Counter

numbers = [4, 1, 3, 2, 1]

print("Original numbers:", numbers)

#Sorting list
numbers.sort()
print("Sorted numbers:", numbers)

#Using Counter (like map in C++)
frequency = Counter(numbers)

print("Frequency count:")
for key, value in frequency.items():
    print(key, "->", value)
