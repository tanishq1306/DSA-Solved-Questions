/**
 *    author:  tanishq 
 *    created: 12.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string str;
	cin >> str;
	
	int ans = 0, cnt = 0;
	for (char ch : str) {
		if (ch == '1')	cnt++;
		else 			cnt--;
		if (cnt == 0) 	ans++;
	}
	
	cout << ans << endl;
	
	return 0;
}
