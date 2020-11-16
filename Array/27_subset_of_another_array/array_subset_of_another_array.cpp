/**
 *    author:  tanishq 
 *    created: 22.10.2020
 **/
#include <bits/stdc++.h>
//#define int long long
using namespace std;

/*
	This problem can be solved using multiple approaches
	Method1 - Take one element from arr1[] (of size m)
			  and search this element linearly in arr2[] (of size n) - O (m * n)
	Method2 - Sort arr1[] and search each element of arr2[] using binary search
			  O (nlogn + mlogn)
	Method3 - Use hashing O (m + n) and O (m + n) aux space
*/

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int test_case;
	cin >> test_case;
	
	while (test_case--) {
		int n, m;
		cin >> n >> m;
		
		int arr1[n], arr2[m];
		for (int i = 0; i < n; i++) {
			cin >> arr1[i];
		}
		
		for (int i = 0; i < m; i++) {
			cin >> arr2[i];
		}
		
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert (arr1[i]);
        }
        
        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (s.find(arr2[i]) == s.end()) {
                ok = false;
                break;
            }
        }
        
        if (ok) {
            cout << "Yes\n"; 
        }
        else {
            cout << "No\n";
        }
    }
		
    return 0;
} 
