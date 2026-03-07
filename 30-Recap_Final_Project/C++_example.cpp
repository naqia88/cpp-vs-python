#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <fstream>
using namespace std;

//Person Class
class Person{
protected:
    int id;
    string name;

public:
    Person(int i = 0, string n = ""){
        id = i;
        name = n;
    }
    virtual void display(){
        cout << id << " " << name << endl;
    }
};

//Student Class
class Student : public Person{
public:
    Student() : Person(0,""){} //default constructor
    Student(int i, string n) : Person(i, n){}

    void display() override{
        cout << "Student ID: " << id << " Name: " << name << endl;
    }
    int getID(){
        return id;
    }
    string getName(){
        return name;
    }
};

//Data Structures
map<int, Student> students;
set<string> courses;
stack<string> actions;
queue<int> registrationQueue;

//Add Student
void addStudent(){

    int id;
    string name;

    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;

    if(students.find(id) != students.end()){
        cout << "Student with this ID already exists\n";
        return;
    }

    Student s(id,name);
    students.insert({id,s});

    actions.push("Added student");
    registrationQueue.push(id);

    cout << "Student added successfully\n";
}

//Display Students
void displayStudents(){

    if(students.empty()){
        cout << "No students available\n";
        return;
    }
    for(auto &s : students){
        s.second.display();
    }
}

//Search Student
void searchStudent(){

    int id;
    cout << "Enter ID: ";
    cin >> id;

    auto it = students.find(id);

    if(it != students.end()){
        it->second.display();
    }
    else{
        cout << "Student not found\n";
    }
}

//Delete Student
void deleteStudent(){

    int id;

    cout << "Enter ID to delete: ";
    cin >> id;

    auto it = students.find(id);

    if(it != students.end()){
        students.erase(it);
        actions.push("Deleted student");
        cout << "Student deleted\n";
    }
    else{
        cout << "Student not found\n";
    }
}

//Save to File
void saveToFile(){

    ofstream file("students.txt");

    if(!file){
        cout << "Error opening file\n";
        return;
    }

    for(auto &s : students){
        file << s.second.getID() << " "
             << s.second.getName() << endl;
    }
    file.close();

    cout << "Data saved to file\n";
}

int main(){

    int choice;
    while(true){

        cout << "\n--- Student Management System ---\n";
        cout << "Menu:\n";
        cout << "\n1 Add Student\n";
        cout << "2 Display Students\n";
        cout << "3 Search Student\n";
        cout << "4 Delete Student\n";
        cout << "5 Save to File\n";
        cout << "6 Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        try{
            switch(choice){

                case 1: addStudent(); break;
                case 2: displayStudents(); break;
                case 3: searchStudent(); break;
                case 4: deleteStudent(); break;
                case 5: saveToFile(); break;
                case 6: return 0;

                default:
                    throw runtime_error("Invalid choice");
            }

        }
        catch(...){
            cout << "Error occurred\n";
        }
    }
}
