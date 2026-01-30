#include <iostream>
using namespace std;

//Recursive function to calculate factorial
int factorial(int n){
    if(n <= 1){    //base case
    return 1;    
    }
    return n * factorial(n - 1); //recursive call
}

int main(){
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

//Output: Factorial of 5 is 120
