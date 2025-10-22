#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList {
Node* head;
Node* tail;
public:
    CircularLinkedList() {
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            tail->next = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }

void deleteAtHead() {
    if (head == NULL)
        return;

    // If only one node
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    head = head->next;
    tail->next = head;
    delete temp;
}

    void deleteAtTail() {
    if (head == NULL)
        return;

    // If only one node
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* prev = head;
    while (prev->next != tail) {
        prev = prev->next;
    }

    Node* temp = tail;
    tail = prev;
    tail->next = head;
    delete temp;
}   
    void printCircularLL() {
        if(head == NULL) {
            cout<<"No Elements in List"<<endl;
            return;
        }
        cout<< head->data <<"->";
        Node* temp = head->next;

        while(temp != head) {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.insertAtHead(5);
    cll.insertAtHead(4);
    cll.insertAtHead(3);
    cll.printCircularLL();

    cll.insertAtTail(6);
    cll.printCircularLL();

    cll.insertAtHead(2);
    cll.printCircularLL();

    cll.deleteAtHead();
    cll.printCircularLL();

    cll.deleteAtTail();
    cll.printCircularLL();

    return 0;
}