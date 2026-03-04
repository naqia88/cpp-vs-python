#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    //stack (LIFO)
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack Top: " << st.top() << endl;

    st.pop();

    cout << "Stack Top after pop: " << st.top() << endl;

    //queue (FIFO)
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Queue Front: " << q.front() << endl;

    q.pop();

    cout << "Queue Front after pop: " << q.front() << endl;

    return 0;
}
