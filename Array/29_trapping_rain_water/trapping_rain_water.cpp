/**
 *    author:  tanishq 
 *    created: 22.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int test_case;
	cin >> test_case;
	
	while (test_case--) {
		int n;
		cin >> n;
		
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		int pref [n] = {0};	//prefix array
		int suff [n] = {0};	//suffix array
		int ans = 0;
		
		pref [0] = a [0];
		for (int i = 1; i < n ; i++) {
			pref [i] = max (pref [i - 1], a [i]);
		}
		
		suff [n - 1] = a[n - 1];
		for (int i = n - 2; i >= 0; i--) {
			suff [i] = max (suff [i + 1],a [i]);
		}
		
		for (int i = 0; i < n; i++) {
			int leftMax = pref [i];
			int rightMax = suff [i];
			if (min(leftMax, rightMax) <= a[i]) {
				continue;
			}
		 
			ans += min (leftMax, rightMax) - a[i];
		}
		
		cout << ans << "\n";
	}
	
    return 0;
} 
