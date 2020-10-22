/**
 *    author:  tanishq 
 *    created: 21.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int maxProductSubArray (vector<int> &a, int n) {
	if (n == 0) {
		return -1;
	}
	
	int minProduct = a[0];
	int maxProduct = a[0];
	int ans = a[0];
	int choice1, choice2;
	
	for (int i = 1; i < n; i++) {
		choice1 = minProduct * a[i];
		choice2 = maxProduct * a[i];;
		minProduct = min (a[i], min (choice1, choice2));
		maxProduct = max (a[i], max (choice1, choice2));
		ans = max (ans, maxProduct);
	}
	
	return ans;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << maxProductSubArray (arr, n);
	
    return 0;
} 
