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
	
	int t;
	cin >> t;
	
	while (t--) {
    	int n;
    	cin >> n;
    	
    	vector<int> arr(n);
    	for (int i = 0; i < n; i++) {
    		cin >> arr[i];
    	}
    	
    	int ans = 0;
    	int l = 0, r = n - 1;
    	
    	while (l < r) {
			// continue when both the elements are equal
    		if (arr[l] == arr[r]) {
    			l++;
    			r--;
    			continue;
    		}
    		//merge the elements at front
    		if (arr[l] < arr[r]) {
    			l++;
    			arr[l] += arr[l - 1];
    			arr[l - 1] = -1;
    		}
    		//merge the elements at end
    		if (arr[r] < arr[l]) {
    			r--;
    			arr[r] += arr[r + 1];
    			arr[r + 1] = -1;
    		}
    	}
    	
    	// count the number of changes made
    	for (int i = 0; i < n; i++) {
    	    if (arr[i] == -1) {
    	        ans++;
    	    }
    	}
    	
    	cout << ans << "\n";
    }
    
    return 0;
} 
