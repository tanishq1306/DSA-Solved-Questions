/**
 *    author:  tanishq 
 *    created: 16.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

void one_cyclic_rotation (int arr[], int n) {
	int last_ele = arr[n - 1];
	for (int i = n - 1; i >= 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = last_ele;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	one_cyclic_rotation (arr, n);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
    return 0;
} 

