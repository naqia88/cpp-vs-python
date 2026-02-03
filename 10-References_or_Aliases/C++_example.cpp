#include <iostream>
using namespace std;

//Function to double a number (pass-by-reference)
void doubleValue(int &n){
    n = n * 2;
}

int main(){
    int x = 10;
    int &ref = x;  //ref is a reference to x

    cout << "x: " << x << ", ref: " << ref << endl; //Output: x: 10, ref: 10

    ref = 20;  //changing ref also changes x
    cout << "x: " << x << ", ref: " << ref << endl; //Output: x: 20, ref: 20

    //Pass-by-reference
    doubleValue(x);
    cout << "x after doubling: " << x << endl; //Output: x: 40

    return 0;
}
