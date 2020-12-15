/**
 *    author:  tanishq 
 *    created: 04.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool wildCardStringMatching (string a, string b)
{
    int n = a.size();
	int m = b.size();
	
	bool dp[m + 1][n + 1];
	memset(dp, false, sizeof (dp));
	
    dp[0][0] = true;
    
	for(int i = 1 ; i<= m; i++) {
		if(a[i - 1] == '*')
			dp[0][i] = dp[0][i - 1];
	}
	
    for(int i = 1; i <= m; ++i) {
        for(int j = 1; j <= n; ++j) {
			if (b[i - 1] == a[j - 1] || a[j - 1] == '?') {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else if (a[j - 1] == '*') {
				// include or exclude
				dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
			}
        }
    }
 
    return dp[m][n];
}
 
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int test_case;
	cin >> test_case;
	
	while (test_case--) {
		string a, b;
		cin >> a >> b;
		
		if (wildCardStringMatching (a, b)) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

	return 0;
}
