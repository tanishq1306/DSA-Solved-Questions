
/**
 *    author:  tanishq 
 *    created: 04.11.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int rowWithMax1s (vector<vector<int>> &mat, int n, int m) {
	int maxRowIndx = -1;
	int indx = m - 1;
	
	for (int r = 0; r < n; r++) {
		while (indx >= 0 && mat[r][indx] == 1) {
			indx--;
			maxRowIndx = r;
		}
	}
	
	return maxRowIndx;
}
	
signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> mat(n, vector<int> (m, 0));
	
	for (auto &row : mat) {
		for (auto &col : row) {
			cin >> col;
		}
	}
	
	cout << rowWithMax1s (mat, n, m) << endl;
	
    return 0;
} 
