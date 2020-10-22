/**
 *    author:  tanishq 
 *    created: 15.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

//This approach count the number of 0, 1, and 2s
void approach1 ();

//This approach uses dutch flag method
void approach2 ();

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//approach1 ();
	approach2 ();
	
    return 0;
} 

void approach1 () {
	int n;
	cin >> n;
	
	int arr[n], count_0 = 0, count_1 = 0, count_2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 0) {
			count_0++;
		}
		else if (arr[i] == 1) {
			count_1++;
		}
	}
	
	count_2 = n - (count_1 + count_0);
	
	while (count_0--) {
		cout << 0 << " ";
	}
	
	while (count_1--) {
		cout << 1 << " ";
	}
	
	while (count_2--) {
		cout << 2 << " ";
	}
}

void approach2 () {
	int n;
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int low = 0, mid = 0, high = n - 1;
	while (mid <= high) {
		if (arr[mid] == 0) {
			swap (arr[mid], arr[low]);
			low++;
			mid++;
		}
		else if (arr[mid] == 1) {
			mid++;
		} 
		else if (arr[mid] == 2) {
			swap (arr[high], arr[mid]);
			high--;
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
