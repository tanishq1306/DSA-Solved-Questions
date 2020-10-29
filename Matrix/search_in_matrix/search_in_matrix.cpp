/**
 *    author:  tanishq 
 *    created: 29.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int mat[101][101];

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;
		
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)	
				cin >> mat[i][j];
		
	
		
	}
	
    return 0;
} 

