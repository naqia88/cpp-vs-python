#include <iostream>
using namespace std;

//Linear Search Function
int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;  //Element found
        }
    }
    return -1;  //Element not found
}
//Binary Search Function (Iterative)
int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int mid = (left + right) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int target = 30;

    int linearResult = linearSearch(arr, size, target);
    int binaryResult = binarySearch(arr, size, target);

    cout << "Linear Search Result: " << linearResult << endl;
    cout << "Binary Search Result: " << binaryResult << endl;

    return 0;
}
