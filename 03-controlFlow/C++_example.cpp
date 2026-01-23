#include <iostream>
using namespace std;

int main(){
    int number = 10;

    // Conditional Statements
    if(number > 0){
        cout << "Number is positive" << endl;   //Output: Number is positive
    } else if(number == 0){
        cout << "Number is zero" << endl;
    } else{
        cout << "Number is negative" << endl;
    }

    // For Loop
    cout << "For loop output: ";
    for(int i = 1; i <= 10; i++){
        cout << i << " ";                       //Output: 1 2 3 4 5 6 7 8 9 10
    }
    cout << endl;

    // While Loop
    int count = 10;
    cout << "While loop output: ";
    while(count > 0){
        cout << count << " ";                   // Output: 10 9 8 7 6 5 4 3 2 1
        count--;
    }

    return 0;
}
