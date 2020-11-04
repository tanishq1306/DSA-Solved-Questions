/**
 *    author:  tanishq 
 *    created: 04.11.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int binaryMedian (vector<vector<int>> &mat, int r, int c) {
	int mn = INT_MAX;
	int mx = INT_MIN;
	
	for (int i = 0; i < r; i++) {
		mn = min(mn, mat[i][0]);			// first col of each row
		mx = max(mx, mat[i][c - 1]);		// last col of each row
	}
	
	int mustCnt = (r * c + 1) / 2;
	while (mn < mx) {
		int mid = mn + (mx - mn) / 2;
		int cnt = 0;
		
		for (int i = 0; i < r; i++) {
			cnt += upper_bound (mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
		}
		
		if (cnt < mustCnt) {
			mn = mid + 1;
		}
		else {
			mx = mid;
		}
	}
	
	return mn;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int r, c;
	cin >> r >> c;
	
	vector<vector<int>> mat(r, vector<int> (c, 0));
	
	for (auto &row : mat) {
		for (auto &col : row) {
			cin >> col;
		}
	}
	
	cout << binaryMedian (mat, r, c) << endl;
	
    return 0;
} 
