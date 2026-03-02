# Day 27: Linked List in C++ vs in Python — Part 2 (Delete & Search)

This folder contains C++ and Python examples demonstrating advanced Singly Linked List operations, specifically Search and Delete, reinforcing deeper Data Structures and Algorithms (DSA) fundamentals.


## Concept

A Linked List is a dynamic linear data structure where nodes are connected using pointers (C++) or object references (Python).

In this part, we extend the implementation by introducing:

- Searching for a value in the list  
- Deleting a node by value  

These operations require traversal logic and careful handling of edge cases such as deleting the head node or handling an empty list.

Unlike arrays, linked lists require sequential access (O(n)) for search and deletion, making pointer manipulation accuracy critical.


## C++ Linked List

- Uses pointer traversal to locate target nodes  
- Head pointer passed by reference when modification is required  
- Manual memory deallocation using delete  
- Explicit handling of head deletion  
- Strong type safety and performance control  
- Reinforces understanding of memory ownership and pointer manipulation  


## Python Linked List 

- Uses object references for node connections  
- Head typically returned after structural modification  
- Automatic garbage collection handles memory cleanup  
- Cleaner deletion logic due to abstraction  
- Focus remains on algorithm rather than memory mechanics  
- Faster development with concise syntax  


## Key Concepts Covered

- Linear Search in Linked List (O(n))  
- Delete Node by Value (O(n))  
- Head node deletion handling  
- Pointer relinking logic  
- Memory deallocation (C++)  
- Garbage collection behavior (Python)  
- Traversal safety and edge case management  


## Time Complexity

- Search → O(n)  
- Delete → O(n)  
- No random access support  

Algorithmic complexity remains identical in both languages.


## Summary

Both C++ and Python implement delete and search operations using the same underlying algorithmic principles.

C++ demands explicit memory control and pointer discipline, building strong low-level DSA mastery.

Python abstracts memory management, allowing developers to focus purely on structural logic and implementation speed.

Mastering deletion and search in linked lists significantly strengthens problem-solving capability and prepares you for interview-level linked list challenges.
