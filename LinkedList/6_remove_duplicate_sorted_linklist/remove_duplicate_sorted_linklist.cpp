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
};
*/

Node *removeDuplicates(Node *root) {
    // your code goes here
    if (root == NULL || root -> next == NULL) {
        return root;
    }
    
    Node *temp = root;
    while (temp != NULL) {
        if (temp -> next != NULL && (temp -> data) == (temp -> next -> data)) {
            Node *duplicateNode = temp -> next;
            temp -> next = temp -> next -> next;
            delete duplicateNode;
        }
        else {
            temp = temp -> next;
        }
    }
    
    return root;
}

// There is no main() defined
