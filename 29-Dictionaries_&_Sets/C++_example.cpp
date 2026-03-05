#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    //std::map          (sorted key-value pairs)
    map<string, int> sorted_dictionary;
    sorted_dictionary["Ali"] = 20;
    sorted_dictionary["Sara"] = 22;
    sorted_dictionary["Ahmed"] = 21;

    cout << "Sorted dictionary (map) output:" << endl;
    for(auto &pair : sorted_dictionary){
        cout << pair.first << " : " << pair.second << endl;
    }

    //  std::unordered_map (key-value pairs, unsorted, fast access)
    unordered_map<string, int> phonebook;
    phonebook["Ali"] = 20;
    phonebook["Sara"] = 21;
    phonebook["Ahmed"] = 22;

    cout << "\nUnordered dictionary (map) output:" << endl;
    for(auto &pair : phonebook){
        cout << pair.first << " : " << pair.second << endl;
    }

    //std::set              (stores unique elements in sorted order)
    set<int> sorted_set = {5, 3, 1, 2, 2, 4};
    cout << "\nSorted set output:" << endl;
    for(int n : sorted_set){
        cout << n << " ";
    }
    cout << endl;

    //std::unordered_set       (stores unique elements, unordered, fast access)
    unordered_set<int> unordered_set_example = {5, 3, 1, 2, 2, 4};
    cout << "\nUnordered set output:" << endl;
    for(int n : unordered_set_example){
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
