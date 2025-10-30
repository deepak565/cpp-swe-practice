#include <iostream>
using namespace std;


class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) {
            return head;
        }
        Node* curr = head;
        while(curr != NULL) {
            if(curr->child != NULL) {
                //  1. flattern child node
                Node* next = curr->next;
                curr->next = flatten(curr->child);

                curr->next->prev = curr;
                curr->child = NULL;

                // 2. find tail
                while(curr->next != NULL) {
                    curr = curr->next;
                }

                // 3. attach tail node
                if(next != NULL) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

// leetcode 430