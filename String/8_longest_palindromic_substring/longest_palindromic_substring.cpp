/**
 *    author:  tanishq 
 *    created: 08.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[10005][10005];

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//int t;
	//cin >> t;
	
	//while (t--) {
		//string str;
		//cin >> str;
		
		//int n = str.size();
		//int l = 0, maxLen = 1;
		
		//for (int gap = 0; gap < n; gap++) {
			//// starting point of every diagonal (i, j)
			//for (int i = 0, j = gap; j < n; i++, j++) {
				//// base case string with single characters
				//if (gap == 0) {
					//dp[i][j] = 1;
				//}
				//// string with two charactes
				//else if (gap == 1) {
					//if (str[i] == str[j]) {
						//dp[i][j] = 1;
					//}
					//else {
						//dp[i][j] = 0;
					//}
				//}
				//// check whether extremes are equal or not.
				//else {
					//// extremes are equal and middle part is also a 
					//// palindrome a....a
					//if (str[i] == str[j] && dp[i + 1][j - 1] == 1) {
						//dp[i][j] = 1;
					//}
					//else {
						//dp[i][j] = 0;
					//}
				//}
				
				//if (dp[i][j] == 1 && gap > maxLen) {
					//l = i;
					//maxLen = j;
				//}
			//}
		//}
		
		//cout << str.substr (l, maxLen) << endl;
	//}
	
    return 0;
} 


