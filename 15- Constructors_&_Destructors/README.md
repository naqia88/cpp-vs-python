# Constructors & Destructors C++ vs Python

This folder contains C++ and Python examples demonstrating how object lifecycle management works using constructors and destructors in both languages.


## Concept

Constructors and Destructors control the **creation and destruction of objects** in Object-Oriented Programming.

A **Constructor** initializes attributes and allocates resources when an object is created.  
A **Destructor** performs cleanup and releases resources when an object is destroyed.

Understanding this lifecycle is essential for writing efficient, safe, and maintainable software, especially in system design, large-scale applications, and memory-sensitive environments.


## C++ Implementation

- Constructor has the **same name as the class**  
- Destructor uses **`~ClassName` syntax**  
- Manual memory and resource management responsibility  
- Deterministic destruction (runs immediately when scope ends)  
- Strong compile-time type safety and structure  
- Widely used in performance-critical and system-level programming  


## Python Implementation

- Constructor defined using **`__init__`**  
- Destructor defined using **`__del__`**  
- Automatic memory management via **Garbage Collector**  
- Destructor execution timing is **not guaranteed immediately**  
- Focus on simplicity and rapid development  
- Commonly used in scripting, data science, and automation  


## Learning Objective

Understand how object lifecycle control differs between C++ and Python while applying:

- Classes and Objects  
- Constructors and Initialization  
- Destructors and Cleanup  
- Memory Management Concepts  
- Scope and Object Lifetime  
- Cross-Language OOP Comparison  

These skills build a strong foundation for advanced OOP, resource handling, and large-scale software design.


## Contents

- `cpp_example.cpp` — Constructor & Destructor implementation in C++  
- `python_example.py` — Constructor & Destructor implementation in Python  

## Summary

Both C++ and Python support constructors and destructors, but their philosophies differ.

**C++** emphasizes strict control, deterministic cleanup, and performance optimization.  
**Python** emphasizes automation, readability, and reduced developer overhead through garbage collection.

Completing this comparison strengthens understanding of **object lifecycle management**, a critical concept for both software engineering and data-oriented development paths.
