#include <iostream>
using namespace std;

class Student{
public:
    string name;

    //Constructor
    Student(string n){
        name = n;
        cout << "Constructor Called. Name: " << name << endl;
    }

    // Destructor
    ~Student(){
        cout << "Destructor Called. Object Destroyed." << endl;
    }
};

int main(){
    Student s1("Firdous");
    return 0;
}
