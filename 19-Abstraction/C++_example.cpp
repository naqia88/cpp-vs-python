#include <iostream>
using namespace std;

//Abstract Class
class Shape{
public:
    //Pure Virtual Function
    virtual void draw() = 0;
};

//Derived Class
class Circle : public Shape{
public:
    void draw(){
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle(); //Abstraction in action
    s->draw();               //Only essential behavior exposed
    delete s;
    return 0;
}
