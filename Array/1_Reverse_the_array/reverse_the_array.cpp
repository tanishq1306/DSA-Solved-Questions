/**
 *    author:  tanishq 
 *    created: 15.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

void reverse (int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
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
	
    reverse (arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
    
     return 0;
} 

