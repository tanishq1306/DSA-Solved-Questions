/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

// This function return true if passed tree is balanced, else false. 
int isBTBalanced (Node *root) {
    if (root == NULL) {
        return 0;
    }
    
    int leftSubtreeHeight = isBTBalanced (root -> left);
    if (leftSubtreeHeight == -1) {
        return -1;
    }
    
    int rightSubtreeHeight = isBTBalanced (root -> right);
    if (rightSubtreeHeight == -1) {
        return -1;
    }
    
    if (abs(leftSubtreeHeight - rightSubtreeHeight) > 1) {
        return -1;
    }
    else {
        return max (leftSubtreeHeight, rightSubtreeHeight) + 1;
    }
}

bool isBalanced(Node *root)
{
    return (isBTBalanced (root) == -1? false: true);   
}

// There is no main() defined.

