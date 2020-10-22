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
		int n, m;
		cin >> n;
		
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		cin >> m;
		
		sort (a, a + n);
		
		int ans = INT_MAX;
		for (int i = 0; i + m - 1 < n; i++) {
			ans = min (ans, a[i + m - 1] - a[i]);
		}
		
		cout << ans << "\n";
	}
	
    return 0;
} 
