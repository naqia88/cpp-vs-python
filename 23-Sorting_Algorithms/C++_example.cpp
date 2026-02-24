#include <iostream>
#include <algorithm>
using namespace std;

//Bubble Sort Function
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    int arr[] = {5, 2, 9, 1, 5};
    int n = 5;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    bubbleSort(arr, n);

    cout << "\nSorted Array (Bubble Sort): ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    //Built-in Sort (STL)
    sort(arr, arr + n);

    cout << "\nSorted Array (STL sort): ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

