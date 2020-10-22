/**
 *    author:  tanishq 
 *    created: 22.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
	Approach1 - Naive solution O (n^3)
	Approach2 - Sorting the given array and then using three pointers
				to search for the triplet O (nlogn + n^2)
	Approach3 - Using unordered set O (n^2) and O (n) aux space.
*/

bool findTripletUsing_2Approach (int arr[], int n, int targetSum);
bool findTripletUsing_3Approach (int arr[], int n, int targetSum);

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
		
		if (findTripletUsing_2Approach(a, n, targetSum)) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
	
    return 0;
} 

bool findTripletUsing_2Approach (int arr[], int n, int targetSum) {
	sort (arr, arr + n);
	
	for (int i = 0; i < n - 2; i++) {
		//fix i and move j -> and <- k
		int j = i + 1, k = n - 1;
		while (j < k) {
			int currSum = arr[i] + arr[j] + arr[k];
			if (currSum == targetSum) {
				return true;
			}
			else if (currSum < targetSum) {
				j++;
			}
			else {
				k--;
			}
		}
	}
	
	return false;
}

bool findTripletUsing_3Approach (int arr[], int n, int targetSum) {
	for (int i = 0; i < n - 2; i++) {
		unordered_set<int> un_set;
		int currSum = targetSum - arr[i];
		for (int j = i + 1; j < n; j++) {
			if (un_set.find (currSum - arr[j]) != un_set.end()) {
				return true;
			}
			un_set.insert (arr[j]);
		}
	}
	
	return false;
}










