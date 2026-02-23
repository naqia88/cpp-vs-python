#include <iostream>
#include <vector>
#include <map>
#include <algorithm>   

using namespace std;

int main(){

    vector<int> numbers = {4, 1, 3, 2, 1};

    cout << "Original numbers: ";
    for(int n : numbers)
        cout << n << " ";
    cout << endl;

    sort(numbers.begin(), numbers.end());

    cout << "Sorted numbers: ";
    for(int n : numbers)
        cout << n << " ";
    cout << endl;

    map<int, int> frequency;

    for(int n : numbers)
        frequency[n]++;

    cout << "Frequency count:" << endl;
    for(auto pair : frequency)
        cout << pair.first << " -> " << pair.second << endl;

    return 0;
}
