/**
 *    author:  tanishq 
 *    created: 09.01.2021
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

// Iterative solution using prev and next pointer
void reverse(Node* head) {
	Node* current = head;
	Node *prev = NULL, *next = NULL;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
 
// Iterative using stack
void reverse (Node* head) {   
    stack<Node*> stk; 
    Node *temp = *head;
    
    while (temp) {
        stk.push(temp); 
        temp = temp -> next;
    }
    
    *head = stk.top();
    stk.pop();
	temp = head;
	
    while (!stk.empty()) {
        temp -> next = stk.top(); 
		stk.pop(); 
        temp = temp ->next; 
    }
    temp -> next = NULL;
}


// There is no main() defined
