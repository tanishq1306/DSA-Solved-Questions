/**
 *    author:  tanishq 
 *    created: 11.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int precedence (char ch) {
    if (ch == '(' || ch == ')') {
        return 0;
    }
    else if (ch == '{' || ch == '}') {
        return 1;
    }
    else if (ch == '[' || ch == ']') {
        return 2;
    }
    return -1;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int t;  
	cin >> t;
	while (t--) {
	    string str; 
	    cin >> str;
	    
	    stack<char> stk;
	    for (int i = 0; i < (int)str.size(); i++) {
	        if (!stk.empty() && (precedence(stk.top()) == precedence (str[i])) && (stk.top() != str[i])) {
	            stk.pop();
	            continue;
	        }
	        stk.push(str[i]);
	    }
	    if (stk.empty()) {
	        cout << "balanced\n";
	    }
	    else {
	        cout << "not balanced\n";
	    }
	}
	
	return 0;
}
