/**
 *    author:  tanishq 
 *    created: 29.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool binarySearchInMatrix (int mat[][101], int n, int m, int targetEle) {
	int low = 0;
	int high = (m * n) - 1;
	
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (mat[mid / m][mid % m] == targetEle) {
			return true;
		}
		if (mat[mid / m][mid % m] < targetEle) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	} 
	
	return false;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int mat[101][101];
	int row, col;
	cin >> row >> col;
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)	{
			cin >> mat[i][j];
		}
	}
	
	int targetEle;
	cin >> targetEle;
	
	if (binarySearchInMatrix (mat, row, col, targetEle)) {
		cout << "Element Found\n";
	}
	else {
		cout << "Element Not Found\n";
	}
	
    return 0;
} 

