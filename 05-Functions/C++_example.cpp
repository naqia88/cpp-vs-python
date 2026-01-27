#include <iostream>
using namespace std;

//Function declaration
int add(int a, int b);

int main(){
    int x = 10, y = 20;
    
    //Function call
    int sum = add(x, y);
    cout << "Sum: " << sum << endl;  //Output: 30

    return 0;
}

//Function definition
int add(int a, int b){
    return a + b;
}
