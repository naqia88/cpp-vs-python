#Dictionary example:
student = {
    "Ali": 20,
    "Sara": 22,
    "Ahmed": 21
}

print("Student Ages:")
for name, age in student.items():
    print(name, ":", age)


#Adding new element
student["Zara"] = 23
print("\nUpdated Dictionary:", student)


#Set Example:
numbers = {1, 2, 2, 3, 4, 4, 5}

print("\nSet Output (duplicates removed):")
print(numbers)


#Set operations
set1 = {1, 2, 3}
set2 = {3, 4, 5}

print("\nUnion:", set1 | set2)
print("Intersection:", set1 & set2)
print("Difference:", set1 - set2)
