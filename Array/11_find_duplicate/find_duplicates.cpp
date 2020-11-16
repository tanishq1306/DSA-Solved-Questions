/**
 *    author:  tanishq 
 *    created: 17.10.2020
 **/
//There can be multiple approaches to solve this problem
//1. Sorting 
//   Time Complexity - O(n Logn) Space Complexity - O(1)

//2. Using look up data structure ex - set or map
//   Time Complexity - O(n) Space Complexity - O(n)

//3. Hare and Tortoise cycle detection
//   Time Complexity - O(n) Space Complexity - O(1)	

#include <bits/stdc++.h>
using namespace std;

//Using set
int findDuplicates (vector<int> &nums) {
	set<int> s;
	s.insert (nums[0]);
	
	for (int i = 1; i < (int)nums.size(); i++) {
		if (s.find (nums[i]) != s.end()) {
			return nums[i];
		}
		s.insert (nums[i]);
	}
	
	return -1;
}

//Using Hare and Tortoise Cycle detection
int HareAndTortoise (vector<int> &nums) {
	// Find the intersection point of the two runners.
    int tortoise = nums[0];
    int hare = nums[0];
    
    do {
		tortoise = nums[tortoise];
		hare = nums[nums[hare]];
    } while (tortoise != hare);

    // Find the "entrance" to the cycle.
    tortoise = nums[0];
    while (tortoise != hare) {
		tortoise = nums[tortoise];
		hare = nums[hare];
    }

    return hare;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int ans = findDuplicates (a);
	
	cout << ans;
	
	return 0;
} 
