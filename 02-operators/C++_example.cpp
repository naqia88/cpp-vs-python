#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "Addition: " << a + b << endl;         // 13
    cout << "Subtraction: " << a - b << endl;      // 7
    cout << "Multiplication: " << a * b << endl;  // 30
    cout << "Division: " << a / b << endl;        // 3  
    cout << "Modulus: " << a % b << endl;         // 1

    // Assignment Operators
    int x = 5;
    x += 2;
    cout << "After += : " << x << endl;           // 7

    // Comparison Operators
    cout << "a == b: " << (a == b) << endl;       // 0 false
    cout << "a > b: " << (a > b) << endl;         // 1 true

    // Logical Operators
    cout << "(a > 5 && b < 5): " 
         << (a > 5 && b < 5) << endl;              // 1 true

    // Increment Operator
    a++;
    cout << "After increment: " << a << endl;     // 11

    return 0;
}
