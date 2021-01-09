/**
 *    author:  tanishq 
 *    created: 18.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
	vector<int> ans;
	for (int indx = 0; indx < n; indx++) {
		if (arr[indx] == indx + 1) {
			ans.push_back (indx + 1);
		}
	}
	
	return ans;
}

// This file doesn't contain main()
