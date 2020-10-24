/**
 *    author:  tanishq 
 *    created: 24.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

// Method1: A simple solution can be to sort the given array - O(nlogn).
// Method2: And can use two pointer approach to solve it in O (n).

vector<int> threeWayPartition(vector<int> arr, int a, int b) {
  	int start = 0, end = arr.size() - 1; 
 
    for (int i = 0; i <= end;) { 
        if (arr[i] < a) {
            swap(arr[i++], arr[start++]); 
		}
        else if (arr[i] > b) {
            swap(arr[i], arr[end--]);
		}
        else {
            i++; 
		}
    } 

	return arr;
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
	
	int a, b;
	cin >> a >> b;
	
	vector<int> ans = threeWayPartition (arr, a, b);
	
	for (auto it : ans) {
		cout << it << " ";
	}
	
    return 0;
} 
