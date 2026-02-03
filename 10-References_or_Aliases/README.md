# Variable Access & Aliasing C++ vs Python

This folder contains C++ and Python examples demonstrating how variables, references, and aliases work in both languages.


## Concept

Variables store data in memory, and references or aliases allow multiple ways to access the same data.  
Understanding how changes to one variable can affect another is essential for writing predictable and bug-free programs.


## C++ References

- Explicit feature using `&`  
- Must be initialized when declared  
- A reference acts as an alias to the original variable  
- Modifying the reference changes the original variable  
- Useful for **pass-by-reference** in functions to avoid copying large data  


## Python References / Aliases

- All variables are references to objects  
- Assignment creates aliases pointing to the same object  
- Mutable objects (lists, dicts, sets) reflect changes across aliases  
- Immutable objects (ints, strings, tuples) behave differently because modifying creates a new object  
- Implicit reference system; no special syntax needed  


## Learning Objective

Understand how C++ and Python handle variable references and aliases, and learn how **mutability** affects program behavior.  
These skills are essential for memory-efficient programming, debugging, and function design.


## Contents

- `cpp_example.cpp` — Demonstrates references and pass-by-reference in C++  
- `python_example.py` — Demonstrates variable aliasing and mutability in Python  
---

## Summary

C++ references give explicit control and predictable behavior, making it ideal for performance-critical tasks.  
Python variables use implicit references, offering flexibility but requiring awareness of mutability.  
Mastering variable access and aliasing in both languages helps prevent unintended side effects and improves program reliability.
