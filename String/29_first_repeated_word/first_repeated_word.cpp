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
	
	int n;
	cin >> n;
	
	string str;
	unordered_map<string, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> str;
		mp[str]++;
	}
	
	int m = INT_MIN, sm = INT_MIN;	// max and secondMax
	for (const auto &it : mp) {
		if (it.second > m) {
			sm = m;
			m = it.second;
		}
		else if (it.second > sm && it.second != m)	{
			sm = it.second;
		}
	}
	
	string ans = "";
	for (auto it : mp) {
		if (it.second == sm) {
			ans += it.first;
			break;
		}
	}

	cout << ans;
	
	return 0;
}


