#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

void insertAtBeginning(Node*& head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int value){
    Node* newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node* head){
    while (head != nullptr){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = nullptr;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    display(head);

    return 0;
}
