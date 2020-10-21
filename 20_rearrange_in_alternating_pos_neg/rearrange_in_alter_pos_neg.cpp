/**
 *    author:  tanishq 
 *    created: 21.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

void rearrange (vector<int> &arr, int n) {
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			swap (arr[i], arr[j]);
			j++;
		}
	}
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
	
	rearrange (a, n);
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
		
    return 0;
} 
