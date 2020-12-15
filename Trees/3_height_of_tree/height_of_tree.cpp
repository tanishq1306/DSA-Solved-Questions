/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

 int height(struct Node* node){
    queue<Node*> q;
    q.push (node);
    
    int Height = 1;
    while (!q.empty()) {
        int qSize = q.size();
        Height = max (Height, qSize);
        
        for (int i = 0; i < qSize; i++) {
            Node* curr = q.front();
            q.pop();
        
            if (curr -> left != NULL) {
                q.push (curr -> left);
            }
            
            if (curr -> right != NULL) {
                q.push (curr -> right);
            }
        }
    }
    
    return Height;
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