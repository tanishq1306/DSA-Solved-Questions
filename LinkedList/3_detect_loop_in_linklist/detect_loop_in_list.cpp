
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

bool detectLoop(Node* head) {
    Node *slow = head, *fast = head;
    
    while (fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (fast == slow -) {
            return true;
        }
    }
    
    return false;
}

// There is no main() defined
