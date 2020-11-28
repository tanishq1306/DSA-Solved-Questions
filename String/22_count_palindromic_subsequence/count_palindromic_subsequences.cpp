
/**
 *    author:  tanishq 
 *    created: 28.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[1000][1000];
int cps (string &str, int i, int j) {
	// base case
	if (i > j) {
		return 0;
	}
	
	if (dp[i][j] != -1) {
	    return dp[i][j];
	}
	
	if (str[i] == str[j]) {
		return dp[i][j] = 1 + cps(str, i + 1, j) + cps(str, i, j - 1);
	}
	
	return dp[i][j] = cps(str, i + 1, j) + cps(str, i, j - 1) - cps(str, i + 1, j - 1);	
}
 
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	// fill the dp with -1
	memset(dp, -1, sizeof (dp));
	 
	string str;
	cin >> str;
	
	cout << cps (str, 0, str.length() - 1);
	
	return 0;
}

