/**
 *    author:  tanishq 
 *    created: 17.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

int getMinDiff (int arr[], int n, int k) {
	if (n == 1) {
		return 0;
	}
	
	sort (arr, arr + n);
	int ans = arr[n - 1] - arr[0];	//suppose we increased every element by k	
	int small = arr[0] + k;
	int big = arr[n - 1] - k;
	
	//corner cases
	if (small > big) {
		swap (big, small);
	}
	
	 // Traverse middle elements 
    for (int i = 1; i < n-1; i ++) 
    { 
        int subtract = arr[i] - k; 
        int add = arr[i] + k; 
  
        // If both subtraction and addition 
        // do not change diff 
        // means - on subtraction we are crossing the lower limit
        // or on addition we are crossing the upper limit
        // conclusion - on choosing either subtract or add
        // it will not affect big or small
        if (subtract >= small || add <= big) {
            continue; 
		}
  
        // Either subtraction causes a smaller number 
        // or addition causes a greater number 
       
        // Update small or big using 
        // greedy approach 
        // If (big - subtract) causes smaller diff, update small 
        // Else update big 
        if (big - subtract <= add - small) {
            small = subtract; 
		}
        else {
            big = add; 
		}
    } 
	
	return min(ans, (big - small));
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k, n;
	cin >> k >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int ans = getMinDiff (arr, n, k);
	
	cout << ans;
	
    return 0;
} 
