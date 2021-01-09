/**
 *    author:  tanishq
 *    created: 09.01.2021
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int search(vector<int>& nums, int target) {
	int n = nums.size();
	int l = 0, r = n - 1;

	while (l <= r) {
		int mid = l + (r - l) / 2;
		
		if (nums[mid] == target) {
			return mid;
		}
		
		if (nums[mid] >= nums[l]) {
			if (target <= nums[mid] && target >= nums[l]) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		else {
			if (target >= nums[mid] && target <= nums[r]) {
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
	}

	return -1;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, target;
	cin >> n >> target;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	
	cout << search(nums, target);

	return 0;	
}
