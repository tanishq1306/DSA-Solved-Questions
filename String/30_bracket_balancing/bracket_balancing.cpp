/**
 *    author:  tanishq 
 *    created: 29.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int test_cases;
	cin >> test_cases;
	
	while (test_cases--) {
    	int n;
    	cin >> n;
    	
    	string str;
	    cin >> str;
	    
	    int ans = 0;
	    stack<char> stk;
	    for (int i = 0; i < (int)str.size(); i++) {
			if (stk.empty()) {
				stk.push(str[i]);
			}
			else {
				if (stk.top() == '[' && str[i] == ']') {
					stk.pop();
				}
				else if (stk.top() == ']' && str[i] == '[') {
					swaps++;
					stk.pop();
				}
				else {
					stk.push(str[i]);
				}
			}			
		}
	   
		cout << ans << endl;
	}
	
	return 0;
}


