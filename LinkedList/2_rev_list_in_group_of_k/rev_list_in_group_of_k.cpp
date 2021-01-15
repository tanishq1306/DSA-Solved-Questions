/**
 *    author:  tanishq 
 *    created: 15.01.2021
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
struct node {
    int data;
    struct Node* next;
};
*/

struct node *reverse (struct node *head, int k) { 
    // Complete this method
    
    node *curr = head, *prevSeen = NULL;
    bool isFirstHead = true;
    
    while (curr != NULL) {
        int count = 0;
        node *prevNode = NULL;
        node *startingNode = curr;
        
        while (count < k && curr != NULL) {
            node *nextNode = curr -> next;
            curr -> next = prevNode;
            prevNode = curr;
            curr = nextNode;
            count++;
        }
        if (isFirstHead) {
            head = prevNode;
            isFirstHead = false;
        }
        else {
            prevSeen -> next = prevNode;
        }
        prevSeen = startingNode;
    }
    
    return head;
}

// There is no main() defined
