/**
 *    author:  tanishq 
 *    created: 24.10.2020
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
    	
    	vector<int> arr(n);
    	for (int i = 0; i < n; i++) {
    		cin >> arr[i];
    	}
    	
    	int k;
    	cin >> k;
    	
    	int windowSize = 0;
    	for (int i = 0; i < n; i++) {
    		if (arr[i] <= k) {
    			windowSize++;
    		}
    	}

    	int ans = 0, cnt = 0;
    	int l = 0, r = windowSize - 1;
    	
    	for (int i = l; i <= r; i++) {
    		if (arr[i] <= k) {
    			cnt++;
    		}
    	}
    	
    	ans = max (ans, cnt);
    	
    	for (int i = windowSize; i < n; i++) {
    		//extend the window
    		if (arr[i] <= k) {
    			cnt++;
    		}
    		if (arr[i - windowSize] <= k) {
    			cnt--;
    		}
             ans = max (ans, cnt);
    	}
    	
    	cout << windowSize - ans << "\n";
	}
	
    return 0;
} 
