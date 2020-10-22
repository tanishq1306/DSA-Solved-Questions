/**
 *    author:  tanishq 
 *    created: 15.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

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
	
	int left = 0, right = n - 1;
	
	while (left < right) {
		while (arr[left] < 0) {
			left++;
		}
		
		while (arr[right] >= 0) {
			right--;
		}
			
		swap (arr[left], arr[right]);
	}
    
    for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
    return 0;
} 
