/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> levelOrder(Node* node) {
    vector<int> levelOrderTraversal;
    queue<Node*> q;
    q.push(node);
    
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        
        levelOrderTraversal.push_back (curr -> data);
        if (curr -> left != NULL) 
            q.push(curr -> left);
        
        if (curr -> right != NULL) 
            q.push(curr -> right);
        
    }
    
    return levelOrderTraversal;
}

// There is no main() defined.

/* A binary tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
 */