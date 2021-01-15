/**
 *    author:  tanishq 
 *    created: 14.01.2021
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
*/

Node* reverseDLL(Node * head) {
    //Your code here
    if (head == NULL || head -> next == NULL) {
        return head;
    }   
    
    Node* prevNode = NULL;
    Node* curr = head;
    
    while (curr != NULL) {
        curr -> prev = curr -> next;
        curr -> next = prevNode;
        prevNode = curr;
        curr = curr -> prev;
    }
    
    return prevNode;
}

// There is no main() defined
