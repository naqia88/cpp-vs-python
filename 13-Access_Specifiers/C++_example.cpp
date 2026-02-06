#include <iostream>

class Student{
private:
    int rollNumber;     //Only accessible inside class

protected:
    int marks;          //Accessible in derived classes

public:
    std::string name;        //Accessible everywhere

    //Setter methods to access private/protected data safely
    void setDetails(int r, int m){
        rollNumber = r;
        marks = m;
    }

    //Public method to display data
    void showDetails(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main(){
    Student s1;

    s1.name = "Firdous";      //Public → Allowed
    s1.setDetails(101, 88);  //Accessing private/protected via method
    s1.showDetails();

    return 0;
}
