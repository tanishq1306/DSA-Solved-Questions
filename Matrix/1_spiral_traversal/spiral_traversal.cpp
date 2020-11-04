/**
 *    author:  tanishq 
 *    created: 28.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int mat[15][15];

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {	
				cin >> mat[i][j];
			}
		}
		
		// each time we start from r and c only 
		// you can observe that we start from the diagonal element
		int r = 0, c = 0;	
		int cnt = 0, max = (n * m), dec = 0;	
		
		while (cnt < max) {
			int i = r, j = c;
			
			// Traverse in all four directions
			// move right
			while (j < (m - dec)) {
				cout << mat[i][j] << " ";
				cnt++;
				j++;
			} 
			j--;
			i++;
		
			// move down 
			while (i < (n - dec)) {
				cout << mat[i][j] << " ";
				cnt++;
				i++;
			}
			i--;
			j--;
		
			
			if (cnt < max) {
				// move left 
				while (j >= (dec)) {
					cout << mat[i][j] << " ";
					cnt++;
					j--;
				}
				j++;
				i--;
				
				// move up
				while (i > (dec)) {
					cout << mat[i][j] << " ";
					cnt++;
					i--;
				}
				
				r++;
				c++;
				dec++;
			}
		}
		
		cout << "\n";
	}
	
    return 0;
} 
