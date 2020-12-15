/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> leftView(Node *root) {
    vector<int> leftViewOfBT;
    if (root == NULL) {
        return leftViewOfBT;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int qSize = q.size();
        for (int i = 0; i < qSize; i++) {
            Node *curr = q.front();
            q.pop();
            
            if (i == 0) {
                leftViewOfBT.push_back (curr -> data);
            }
            
            if (curr -> left != NULL) {
                q.push (curr -> left);
            }
            
            if (curr -> right != NULL) {
                q.push (curr -> right);
            }
        }
    }
    
    return leftViewOfBT;
}

// There is no main() defined.
