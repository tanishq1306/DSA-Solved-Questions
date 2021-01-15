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

Node* FirstNodeOfCycle (Node* head) {
    if (head == NULL || head->next == NULL)
        return NULL;
 
    Node *slow = head, *fast = head;
	
	while (fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (slow == fast) {
            break;
		}
    }
 
    // If loop does not exist
    if (slow != fast) {
        return NULL;
	}
 
    slow = head;
    while (slow != fast) {
        slow = slow -> next;
        fast = fast -> next;
    }
 
    return slow;
}

// There is no main() defined
