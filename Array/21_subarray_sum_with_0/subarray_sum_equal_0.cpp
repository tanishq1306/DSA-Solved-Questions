 /**
 *    author:  tanishq 
 *    created: 21.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool find_subarray_with_sum_equal_zero (vector<int> arr, int n) {
	unordered_set<int> sumSet;
    // Traverse through array and store prefix sums 
    int sum = 0; 
    for (int i = 0; i < n; i++) 
    { 
        sum += arr[i]; 
  
        // If prefix sum is 0 or it is already present 
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
            return true; 
  
        sumSet.insert(sum); 
    } 
	
	return false;
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
