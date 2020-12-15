/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector <int> zigZagTraversal(Node* root) {
    vector<int> zigZagPattern;
    if (root == NULL) {
        return zigZagPattern;
    }
    
    bool reverse = false;
    queue<Node*> q;
    stack<int> stk;
    q.push(root);
    
    while (!q.empty()) {
        int qSize = q.size();
        
        for (int i = 0; i < qSize; i++) {
            Node *curr = q.front();
            q.pop();
            
            if (reverse) {
                stk.push (curr -> data);
            }
            else {
                zigZagPattern.push_back (curr -> data);
            }
            
            if (curr -> left != NULL) {
                q.push (curr -> left);
            }
            
            if (curr -> right != NULL) {
                q.push (curr -> right);
            }
        }
        
        while (!stk.empty()) {
            zigZagPattern.push_back (stk.top());
            stk.pop();
        }
    
        reverse = !reverse;
    }
    
    return zigZagPattern;
}

// There is no main() defined.
