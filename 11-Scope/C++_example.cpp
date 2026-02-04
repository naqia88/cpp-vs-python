#include <iostream>
using namespace std;

int globalVar = 100;   //Global Scope

void showScopes(){
    int x = 10;          //Local Scope (function level)

    cout << "Function local x: " << x << endl;
    cout << "Accessing globalVar inside function: " << globalVar << endl;

    //Block Scope
    if(true){
        int x = 20;   //Shadows outer x
        cout << "Inner block x: " << x << endl;
    }

    cout << "Function local x after block: " << x << endl;
}

int main(){
    cout << "Global globalVar in main: " << globalVar << endl;

    showScopes();   //Function call

    return 0;
}


