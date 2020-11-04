/**
 *    author:  tanishq 
 *    created: 04.11.2020
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
        int n, x;
        cin >> n;
        
    	multiset<int> s;
    	for (int i = 0; i < n; i++) {
    	    for (int j = 0; j < n; j++) {
    	        cin >> x;
    	        s.insert (x);
    	    }
    	}
    	
    	for (const auto &it : s) {
    	    cout << it << " ";
    	}
    	
    	cout << endl;
    }
    
    return 0;
} 

