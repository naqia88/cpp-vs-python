# Functions
def average_marks(marks):
    return sum(marks) / len(marks)

def high_low(names, marks):
    highest = max(marks)
    lowest = min(marks)
    return names[marks.index(highest)], names[marks.index(lowest)]

# Input
names = []
marks = []
for i in range(5):
    names.append(input("Enter student name: "))
    marks.append(float(input("Enter student mark: ")))

# Calculations
avg = average_marks(marks)
high, low = high_low(names, marks)

# Output
print(f"Average Marks: {avg}")
print(f"Highest Scorer: {high}")
print(f"Lowest Scorer: {low}")
