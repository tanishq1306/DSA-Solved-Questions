/**
 *    author:  tanishq 
 *    created: 24.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int smallestSubWithSum(int arr[], int n, int targetSum)  {
	int sum = 0, min_len = INT_MAX;
	int start = 0, end = 0;
	
	while (end < n) {
		// extending my window end
		while (end < n && sum <= targetSum) {
			sum += arr[end];
			end++;
		}
	
		// removing elements from the start of window
		while (start < end && sum > targetSum) {
			// updating the new window size
			min_len = min (min_len, end - start);
			
			// starting element of the window removed
			sum -= arr[start];
			start++;
		}
	}
	
	return min_len; 
} 

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int test_case;
	cin >> test_case;
	
	while (test_case--) {
		int n, targetSum;
		cin >> n >> targetSum;
		
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		int ans = smallestSubWithSum (a, n, targetSum);
		
		cout << ans << "\n";
	}
	
    return 0;
} 
