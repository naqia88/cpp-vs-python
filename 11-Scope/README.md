# Scope in C++ vs Scope in Python

This folder contains C++ and Python examples demonstrating how variable visibility, accessibility, and lifetime are managed in both languages.


## Concept

Scope defines **where a variable can be accessed and for how long it exists** in a program.  
Understanding scope is critical because it prevents naming conflicts, improves memory management, and ensures predictable program behavior.


## C++ Scope

- Block-based using `{ }` braces  
- Local scope inside functions  
- Global scope outside all functions  
- Block scope inside loops and conditionals  
- Supports **variable shadowing** in inner blocks  
- Strong compile-time enforcement  
- Designed for performance, memory control, and predictability  


## Python Scope

- Follows **LEGB Rule** — Local → Enclosing → Global → Built-in  
- Local scope inside functions  
- Enclosing scope in nested functions  
- Global scope at file level  
- Built-in scope for reserved names like `len`, `print`  
- Uses `global` and `nonlocal` keywords to modify outer variables  
- Optimized for readability and rapid development  


## Learning Objective

Understand how variables behave in different scopes and how accessibility rules differ between C++ and Python.  
These skills are essential for writing clean, bug-free, and maintainable code in real-world software and data applications.


## Contents

- `cpp_example.cpp` — Demonstrates local, global, and block scope in C++  
- `python_example.py` — Demonstrates LEGB rule, global, and enclosing scope in Python  

## Summary

Both C++ and Python provide structured mechanisms to control variable visibility.  
C++ emphasizes strict block-level control and compile-time safety, while Python emphasizes flexible rule-based resolution that accelerates development.  
Mastering scope in both languages strengthens logical thinking, reduces runtime errors, and builds a disciplined programming foundation.
