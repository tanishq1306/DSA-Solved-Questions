/**
 *    author:  tanishq 
 *    created: 04.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int kthSmallest(int mat[][51], int n, int k) {
	priority_queue<int> pq;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			pq.push(mat[i][j]);
			if ((int)pq.size() > k) {
				pq.pop();
			}
		}
	}
	
	return (int)pq.top();
}


signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	int mat[51][51];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
	
	int ans = kthSmallest (mat, n, k);
	cout << ans;
	
    return 0;
} 


