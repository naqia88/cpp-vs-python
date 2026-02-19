# Banking System in C++ vs Python

This folder contains C++ and Python examples demonstrating a small Banking System mini-project that integrates all core OOP pillars: constructors, destructors, encapsulation, inheritance, polymorphism, abstraction, and operator overloading.


## Concept

This project models a **Banking System** with different account types and operations.  
It demonstrates how OOP principles allow developers to write structured, reusable, and maintainable code.  

Key ideas included:

- Encapsulation of account data  
- Inheritance for specialized accounts  
- Polymorphism via overridden methods  
- Abstraction with abstract base classes  
- Operator overloading to compare accounts  
- Object lifecycle management with constructors and destructors  


## C++ Banking System

- Uses **abstract base class** and **pure virtual functions**  
- Supports **inheritance** and **method overriding**  
- Implements **runtime polymorphism** using `virtual` keyword  
- Operator overloading with `operator >` for comparing account balances  
- Constructors and destructors manage object lifecycle  
- Strong type safety, explicit structure, and high performance  
- Suitable for system-level and performance-critical applications  


## Python Banking System

- Uses **Abstract Base Class** from `abc` module  
- Encapsulation using private attributes (`__balance`)  
- Polymorphism through **method overriding**  
- Operator overloading with `__gt__`  
- Constructors (`__init__`) handle initialization automatically  
- Dynamic typing allows flexible and rapid implementation  
- Prioritizes readability, simplicity, and developer productivity  


## Learning Objective

Understand how all OOP pillars can be integrated into a single system in both C++ and Python.  
Learn to design scalable and maintainable software while comparing structural enforcement and flexibility across languages.


## Contents

- `cpp_example.cpp` — Demonstrates full OOP integration, operator overloading, and account management in C++  
- `python_example.py` — Demonstrates full OOP integration, operator overloading, and account management in Python  


## Key Concepts Covered

- Constructors & Destructors  
- Encapsulation & Access Control  
- Inheritance (Base and Derived Classes)  
- Polymorphism & Method Overriding  
- Abstraction via Abstract Base Class  
- Operator Overloading (`>` comparison)  
- Runtime vs Compile-time Design Considerations  


## Summary

This Banking System project consolidates Week 03 learning by integrating all OOP pillars.  
C++ emphasizes structure, performance, and strict typing, while Python emphasizes readability, simplicity, and rapid development.  
Building and understanding this project in both languages strengthens cross-language software design skills and prepares developers for real-world OOP applications.
