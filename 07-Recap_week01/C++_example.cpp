#include <iostream>
#include <string>
using namespace std;

// Functions
double average_marks(double marks[], int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += marks[i];
    }
    return sum / n;
}

void high_low(string names[], double marks[], int n, string &high, string &low){
    double maxMark = marks[0], minMark = marks[0];
    high = low = names[0];
    for(int i = 1; i < n; i++){
        if(marks[i] > maxMark){
            maxMark = marks[i]; high = names[i]; 
        }
        if(marks[i] < minMark){
            minMark = marks[i]; low = names[i]; 
        }
    }
}

int main(){
    const int n = 5;
    string names[n];
    double marks[n];

    for(int i = 0; i < n; i++){
        cout << "Enter student name: ";
        cin >> names[i];
        cout << "Enter student mark: ";
        cin >> marks[i];
    }

    double avg = average_marks(marks, n);
    string high, low;
    high_low(names, marks, n, high, low);

    cout << "Average Marks: " << avg << endl;
    cout << "Highest Scorer: " << high << endl;
    cout << "Lowest Scorer: " << low << endl;

    return 0;
}
