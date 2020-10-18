/**
 *    author:  tanishq 
 *    created: 18.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int inversionOfArray (vector<int> &a, int n) {
	
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int test_cases;
	cin >> test_cases;
	
	while (test_cases--) {
		int n;
		cin >> n;
		
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		int inversionCount = inversionOfArray (a, n);
		
		cout << inversionCount << "\n";
	}
	
    return 0;
} 
