/**
 *    author:  tanishq 
 *    created: 12.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[101][101];
int editDistance(string &a, string &b) {
	int m = a.size();
	int n = b.size();
	
	// base case
	for (int i = 0; i < m; i++) {
		dp[i][0] = i;
	}
	
	for (int i = 0; i < n; i++) {
		dp[0][i] = i;
	}
	
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			// same characters
			if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1]; 
			}
  
            // If the last character is different, consider all 
            // possibilities and find the minimum 
            else {
                dp[i][j] = 1 + min({dp[i][j - 1], 		// Insert 
                                   dp[i - 1][j], 		// Remove 
                                   dp[i - 1][j - 1]}); 	// Replace 
			}
		}
	}
		
	return dp[m][n];
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string a, b;
	cin >> a >> b;
	
	cout << editDistance(a, b);
	
	return 0;
}

