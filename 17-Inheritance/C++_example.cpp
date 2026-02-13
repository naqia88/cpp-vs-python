#include <iostream>
using namespace std;

//Parent Class 1
class Animal{
public:
    void eat(){
        cout << "Animal eats food" << endl;
    }
};

//Parent Class 2
class Pet{
public:
    void play(){
        cout << "Pet loves to play" << endl;
    }
};

//Child Class  (Multiple Inheritance)
class Dog : public Animal, public Pet{
public:
    void bark(){
        cout << "Dog barks" << endl;
    }
};

int main(){
    Dog d;
    d.eat();   //From Animal
    d.play();  //From Pet
    d.bark();  //Own method
    return 0;
}
