/**
 *    author:  tanishq 
 *    created: 21.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool find_subarray_with_sum_equal_zero (vector<int> a, int n) {
	bool found = false;
	unordered_set<int> s;
	int sum = a[0];
	
	for (int i = 1; i < n; i++) {
		sum += a[i];
		if (sum == 0 || s.find (sum) != s.end()) {
			found = true;
			break;
		}
		s.insert (sum);
	}
	
	return found;
}

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
		
		cout << (find_subarray_with_sum_equal_zero (a, n) ? "Yes" : "No") << endl;
	}
	
    return 0;
} 
