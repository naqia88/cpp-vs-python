#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string text = "Data Science";

    //Length
    cout << "Length: " << text.length() << endl; //Output: 12

    //Concatenation
    string result = text + " Rocks";
    cout << result << endl; //Output: Data Science Rocks

    //Substring
    cout << text.substr(0, 4) << endl; //Output: Data

    //Search
    cout << text.find("Science") << endl; //Output: 5

    //Uppercase
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    cout << text << endl; //Output: DATA SCIENCE

    return 0;
}
