/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/
#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(),x.end()

using namespace std;

vector<int> reverseLevelOrder(Node *root) {
    vector<int> revLevelOrderTraversal;
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int qSize = q.size();
        stack<int> stk;
        
        for (int i = 0; i < qSize; i++) {
            Node* curr = q.front();
            q.pop();
        
            stk.push (curr -> data);
            
            if (curr -> left != NULL) {
                q.push (curr -> left);
            }
            
            if (curr -> right != NULL) {
                q.push (curr -> right);
            }
        }
        
        while (!stk.empty()) {
            revLevelOrderTraversal.push_back(stk.top());
            stk.pop();
        }
    }
    
    reverse (all(revLevelOrderTraversal));

    return revLevelOrderTraversal;
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