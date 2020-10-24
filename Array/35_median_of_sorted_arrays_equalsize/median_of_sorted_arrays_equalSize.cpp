/**
 *    author:  tanishq 
 *    created: 24.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int median (int arr[], int n) {
	return (n % 2 ? arr[n / 2] : (arr[n / 2] + arr[n / 2 - 1]) / 2);
}

int getMedian (int a[], int b[], int n) {
	// Base Cases
	if (n <= 0) {
        return -1;
	}
	// size of both the array is 1
    if (n == 1) {
        return (a[0] + b[0]) / 2;
	}
	// size of both the array is 2
    if (n == 2) {
        return (max(a[0], b[0]) + min(a[1], b[1])) / 2;
	}
        	
	// calculate the median of the two arrays
	int m1 = median (a, n);
	int m2 = median (b, n);
	
	// Case 1 : m1 == m2
	if (m1 == m2) {
		return m1;
	}
	
	// Case 2 : m1 < m2
	if (m1 < m2) {
        if (n % 2 == 0) {
            return getMedian(a + n / 2 - 1, b, n - n / 2 + 1);
		}
        return getMedian(a + n / 2, b, n - n / 2);
    }
	
	// Case 3 : m1 > m2
    if (n % 2 == 0) {
        return getMedian(b + n / 2 - 1, a, n - n / 2 + 1);
	}
	
    return getMedian(b + n / 2, a, n - n / 2);
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	// equal size array
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	
	int medianOfTwoArrays = getMedian (a, b, n);
	
	cout << medianOfTwoArrays;
	
    return 0;
} 
