
/**
 *    author:  tanishq 
 *    created: 15.01.2021
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
struct Node {
    int data;
    struct Node* next;
};
*/

void removeLoop(Node* head) {
    Node *slow = head, *fast = head;
    
    while (fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (fast == slow) {
            break;
        }
    }
    
    if (slow != fast) {
        return;
    }
    
    slow = head;
    
    while (slow -> next != fast -> next) {
        slow = slow -> next;
        fast = fast -> next;
    }
    
    fast -> next = NULL;
}

// There is no main() defined
