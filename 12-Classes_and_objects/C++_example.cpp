#include <iostream>
#include <string>

class Student{
public:
    std::string name;
    int age;

    //Method
    void introduce(){
       std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main(){
    //Object creation
    Student s1;

    //Assign values
    s1.name = "Ayesha";
    s1.age = 21;

    //Call method
    s1.introduce();

    return 0;
}


