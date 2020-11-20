/**
 *    author:  tanishq 
 *    created: 18.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int countReversals (string &str) {
	int n = str.size();
	
	// odd length
	if (n & 1) {
		return -1;
	}
	
	stack<char> stk;
	for (char &ch : str) { 
        if (ch == '}' && !stk.empty() && stk.top() == '{') { 
			stk.pop(); 
        }
        else {
			stk.push(ch); 
		}
    } 
    
    int opening_brackets = 0, closing_brackets = 0;
    while (!stk.empty()) 
    { 
		if (stk.top() == '{') {
			opening_brackets++;
		} 
		else {
			closing_brackets++;
		}
		
        stk.pop(); 
    } 
    
    int cnt = 0;
    cnt += ceil(1.0 * opening_brackets / 2);
    cnt += ceil(1.0 * closing_brackets / 2);
    
    return cnt;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int test_case;
	cin >> test_case;
	
	while (test_case--) {
		string str;
		cin >> str;
		
		cout << countReversals (str) << endl;
	}
	
	return 0;
}
