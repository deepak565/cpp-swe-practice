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

class List {
Node* head;
Node* tail;
public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    void reverseLL() {   //  O(n)
        Node* prev;
        Node* current;
        Node* next;
        if(head == NULL) {
            cout<<"No Elements in the list to reverse"<<endl;
            return;
        }
        prev = next = NULL;
        current = head;
        while(current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void printLL() {
        if(head == NULL) {
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main() {

    List ll;
    ll.printLL();
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printLL();
    ll.reverseLL();
    ll.printLL();

    return 0;
}
// check leet code problem  number 206