import json
from collections import deque

students = {}
courses = set()
actions = []
registration_queue = deque()

#Person Class
class Person:
    def __init__(self, id, name):
        self.id = id
        self.name = name

    def display(self):
        print(self.id, self.name)

#Student Class
class Student(Person):

    def display(self):
        print(f"Student ID: {self.id} Name: {self.name}")

#Add Student
def add_student():
    try:
        id = int(input("Enter ID: "))
        name = input("Enter Name: ")

        students[id] = Student(id, name)

        actions.append("Added student")
        registration_queue.append(id)

    except:
        print("Invalid input")

#Display Students
def display_students():
    for s in students.values():
        s.display()

#Search Student
def search_student():
    id = int(input("Enter ID: "))

    if id in students:
        students[id].display()
    else:
        print("Student not found")

#Delete Student
def delete_student():
    id = int(input("Enter ID: "))

    if id in students:
        del students[id]
        actions.append("Deleted student")
        print("Student deleted successfully.")
    else:
        print("Student not found.")

#Save to File
def save_file():
    data = {id: s.name for id, s in students.items()}

    with open("students.json", "w") as f:
        json.dump(data, f)
        
    print("Data saved successfully to students.json")

while True:

    print("\n--- Student Management System ---")
    print("Menu:")
    print("1 Add Student")
    print("2 Display Students")
    print("3 Search Student")
    print("4 Delete Student")
    print("5 Save File")
    print("6 Exit")
    print("Enter your choice: ")

    choice = int(input())

    if choice == 1:
        add_student()

    elif choice == 2:
        display_students()

    elif choice == 3:
        search_student()

    elif choice == 4:
        delete_student()

    elif choice == 5:
        save_file()

    elif choice == 6:
        break
