/**
 *    author:  tanishq 
 *    created: 21.10.2020
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
	    
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    sort (a.begin(), a.end());
	   
	    int ans = 1, cnt = 1;    
	    
	    for (int i = 1; i < n; i++) {
	        if (a[i] == a[i - 1]) {
	            continue;
	        }
	        else if (a[i] == a[i - 1] + 1) {
	            cnt++;
	        }    
	        else {
	            ans = max (ans, cnt);
	            cnt = 1;
	        }
	    }
	    
	    ans = max (ans, cnt);
	    cout << ans << "\n";
	}
	
	return 0;
}
