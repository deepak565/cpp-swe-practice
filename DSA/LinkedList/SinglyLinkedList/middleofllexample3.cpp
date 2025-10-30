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
     
    void middleOfList() {
        Node* temp = head;
        int count = 0;
        while(temp != NULL) {
            temp = temp->next;
            count++;
        }
        temp = head;
        int middle = (count/2) + 1;
        for(int i=0; i<middle-1; i++) {
            temp = temp->next;
        }
        cout<<"value at middle pos is "<<temp->data<<endl;
    }

    void middleOfList2() {   //  preferred Approach
        Node* slow = head;
        Node* fast = head;
         while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout<<"value at middle pos is "<<slow->data<<endl;

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
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    ll.push_front(0);
    ll.push_front(0);
    ll.printLL();

    ll.middleOfList2();

    return 0;
}
// check leet code problem  number 876