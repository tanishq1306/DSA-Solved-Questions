/**
 *    author:  tanishq 
 *    created: 19.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

int getPairsCount(vector<int> &arr, int n, int k) {
	map<int, int> mp;
	for (auto it : arr) {
		mp[it]++;
	}


	int ans = 0;
	for (auto it : arr) {
		int diff = k - it;
		
		//if both are element and difference are same
		if (diff == it && mp.find (diff) != mp.end()) {
			ans += mp[diff] - 1;
			mp[it]--;
		}
		else if (mp.find (diff) != mp.end()){
			ans += mp[diff];
			mp[it]--;
		}
	}

	return ans;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int ans = getPairsCount (arr, n, k);
	
	cout << ans;
	
    return 0;
} 
