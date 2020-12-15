/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> rightView(Node *root) {
    vector<int> rightViewOfBT;
    if (root == NULL) {
        return rightViewOfBT;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int qSize = q.size();
        for (int i = 0; i < qSize; i++) {
            Node *curr = q.front();
            q.pop();
            
            if (i == qSize - 1) {
                rightViewOfBT.push_back (curr -> data);
            }
            
            if (curr -> left != NULL) {
                q.push (curr -> left);
            }
            
            if (curr -> right != NULL) {
                q.push (curr -> right);
            }
        }
    }
    
    return rightViewOfBT;
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