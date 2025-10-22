#include <iostream>
using namespace std;
struct ListNode {
    int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next!= NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                slow = head;
                // ListNode* prev = NULL;
                while(slow != fast) {
                    slow = slow->next;
                    // prev = fast;
                    fast = fast->next;
                }
                // prev->next = NULL;  //  remove the cycle
                return slow;
            }
        }
        return NULL;
    }
};


//  try to create int main for this (hint:- create push front and try to add elements
//  and then create a cycle by in main head->next->next ->next = head->next something like this...)
// follow leetcode for detect the iscycle present and return the node 142