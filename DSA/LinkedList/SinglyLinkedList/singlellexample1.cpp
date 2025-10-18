#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;  // making data and next as public beacuse it will be accessable by next node 
    
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
    // first we need to check list empty or not

    //1.if list is empty then we need to create a new node and assin head and tail to the to the new node.
    //2. follow not if code
    void push_front(int val) {
        Node* newNode = new Node(val);  // dynamic object
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    
    void pop_front() {
        if(head == NULL) {
            cout<<"NO ELEMENTS PRESENT TO POP"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    
    void pop_back() {
        Node* temp = head;
        if(head == NULL) {
            cout<<"No Elements to pop"<<endl;
            return;
        }
        while(temp->next != tail) {   //  if tail is not there means we can write it as temp->next->next == NULL
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
        // delete temp;  // we should not temp here
    }
    
    void printList() {
        // we are temp because if once the main head move forward we cant take it back
        // beacuse we cannot traverse back in linked list
        Node* temp = head;
        if(temp == NULL){
            cout<<"NO ELEMENTS IN LIST TO PRINT"<<endl;
            return;
        }
        while(temp != NULL) {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        delete temp;
    }
};


int main() {
    
    List ll;
    // ll.pop_back();
    ll.printList();
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    cout<<"===================="<<endl;
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();
    cout<<"===================="<<endl;
    ll.pop_front();
    ll.printList();
    cout<<"===================="<<endl;
    ll.pop_back();
    ll.printList();
    
    
    return 0;
}


