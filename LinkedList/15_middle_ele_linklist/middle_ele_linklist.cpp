/**
 *    author:  tanishq 
 *    created: 14.01.2021
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
struct ListNode {
    int val;
    struct Node* next;
};
*/

ListNode* middleNode(ListNode* head) {
	// Empty list or one node
	if (head == NULL || head -> next == NULL) {
		return head;
	}
	
	ListNode *slow = head;
	ListNode *fast = head;
	
	while (fast != NULL && fast -> next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;
	}
		
	return slow;
}

// There is no main() defined
