# Day 2: Operators & Expressions
This folder contains C++ and Python examples for Day 2 of the **"C++ vs Python Fundamentals"** series.

## Concept
Operators are used to perform operations on variables and values.  
Although C++ and Python share many common operators, they differ in **syntax rules, type enforcement, and behavior**.
Understanding these differences early prevents logical errors when switching between languages.

## Topics Covered

### 1. Arithmetic Operators
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Modulus (`%`)

**Key Difference:**
- C++ integer division truncates the result. (5 / 2 = 2)
- Python division always returns a float. (5 / 2 = 2.5)

### 2. Assignment Operators
- `=`, `+=`, `-=`, `*=`, `/=`
C++ enforces strict types, while Python allows dynamic reassignment.

### 3. Comparison Operators
- `==`, `!=`, `<`, `>`, `<=`, `>=`

Used for decision-making and conditional logic.

### 4. Logical Operators
- **C++:** `&&`, `||`, `!`
- **Python:** Python uses readable keywords instead of symbols `and`, `or`, `not`
Python prioritizes readability; C++ prioritizes performance.

### 5. Increment / Decrement (Critical Difference)
- **C++:** Supports `++` and `--`
- **Python:** Does not support increment/decrement operators

## Contents

- `operators.cpp` C++ operator examples  
- `operators.py` Python operator examples
