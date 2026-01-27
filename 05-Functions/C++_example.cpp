#include <iostream>
using namespace std;

//Function overloading
int multiply(int a, int b){
    return a * b;
}

double multiply(double a, double b){
    return a * b;
}

//Function with default argument
int add(int a, int b = 10){
    return a + b;
}

int main(){
    cout << "Multiply int: " << multiply(5, 6) << endl;       //Output: 30
    cout << "Multiply double: " << multiply(2.5, 4.0) << endl; //Output: 10

    cout << "Add with 2 args: " << add(5, 15) << endl;        //Output: 20
    cout << "Add with 1 arg: " << add(5) << endl;             //Output: 15

    return 0;
}
