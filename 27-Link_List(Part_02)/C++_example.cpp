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

//Search function:
bool search(Node* head, int key){
    while(head != nullptr){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
}

//Delete function:
void deleteNode(Node*& head, int key){
    if(head == nullptr){
        return;
    }
    if(head->data == key){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr && temp->next->data != key){
        temp = temp->next;
    }
    if(temp->next != nullptr){
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
}

void display(Node* head){
    while(head != nullptr){
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

    cout << "Searching 20: ";
    if(search(head, 20)){
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    deleteNode(head, 10);   //delete head
    deleteNode(head, 30);   //delete tail

    display(head);

    return 0;
}
