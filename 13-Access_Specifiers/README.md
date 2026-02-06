# Access Specifiers in C++ vs Access Control in Python

This folder contains C++ and Python examples demonstrating how **data visibility and protection** are handled inside classes in both languages.


## Concept

Access Specifiers control **who can access class variables and methods**.  
They are a fundamental part of **Encapsulation** in Object-Oriented Programming (OOP), ensuring data security, modular design, and maintainable code.


## C++ Access Specifiers

- Uses built-in keywords: `public`, `private`, `protected`  
- **public** → Accessible from anywhere  
- **private** → Accessible only inside the same class  
- **protected** → Accessible inside the class and derived classes  
- Enforced at **compile time** for strong security  
- Commonly used in large and performance-critical systems  


## Python Access Control

- No strict keywords — uses **naming conventions**  
- **Public (`name`)** → Accessible from anywhere  
- **Protected (`_name`)** → Intended for internal use (not enforced)  
- **Private (`__name`)** → Name mangling reduces direct access  
- Focuses on **developer responsibility and readability**  
- Encourages rapid development and flexibility  


## Learning Objective

Understand how C++ strictly enforces access rules while Python suggests restrictions using conventions.  
Learn how encapsulation protects sensitive data and improves code structure in real-world applications.


## Contents

- `cpp_example.cpp`  Demonstrates `public`, `private`, and `protected` usage in C++  
- `python_example.py`  Demonstrates public, protected, and private naming conventions in Python  


## Key Concepts Covered

- Data hiding  
- Encapsulation  
- Public vs Private members  
- Protected access in inheritance  
- Setter and Getter methods  
- Python name mangling (`__variable`)  


## Summary

Both C++ and Python support **Encapsulation**, but their enforcement philosophies differ.  
**C++ provides strict, rule-based access control** for safety and predictability, while **Python offers flexible, convention-based control** for speed and readability.  
Mastering access control in both languages strengthens OOP design skills and leads to more secure and maintainable software.
