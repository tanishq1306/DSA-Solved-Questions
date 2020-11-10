/**
 *    author:  tanishq 
 *    created: 08.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

// Variation of LCS problem 
// do watch : https://www.youtube.com/watch?v=hbTaCmQGqLg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=30

int dp[1001][1001];
int longestRepeatingSubsequence (string &str, int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			// dp initialization case
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
				continue;
			}
			
			if (str[i - 1] == str[j - 1] && i != j) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max (dp[i][j - 1], dp[i - 1][j]);
			}
		}
	}
	
	return dp[n][n];
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		string str;
		cin >> str;
		
		cout << longestRepeatingSubsequence (str, n) << endl;
	}
	
    return 0;
} 


