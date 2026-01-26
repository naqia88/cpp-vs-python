#include <iostream>
using namespace std;

int main(){

    int numbers[5]={10, 20, 30, 40, 50};

    //Accessing elements
    cout << "First element: " << numbers[0] << endl;   //Output: 10
    cout << "Last element: " << numbers[4] << endl;    //Output: 50

    //Looping through array
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++){
        cout << numbers[i] << " ";       //Output: 10 20 30 40 50
    }
    return 0;
}
