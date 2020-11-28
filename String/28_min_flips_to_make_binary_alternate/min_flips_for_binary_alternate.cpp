/**
 *    author:  tanishq 
 *    created: 28.11.2020
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
    	string str;
		cin >> str;
		
		// 1010..
		int ans, cnt = 0, f = 1;
		for (char ch : str) {
			if (f && ch == '0')		cnt++;
			if (!f && ch == '1')	cnt++;
			f = !f;
		}
    	
    	// 0101..
    	ans = cnt, cnt = 0, f = 1;
		for (char ch : str) {
			if (f && ch == '1')		cnt++;
			if (!f && ch == '0')	cnt++;
			f = !f;
		}
		
    	cout << min (ans, cnt) << endl;
	}
	
	return 0;
}


