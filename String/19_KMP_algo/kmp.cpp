/**
 *    author:  tanishq 
 *    created: 24.11.2020
**/

// Longest Prefix Suffix
#include <bits/stdc++.h>
#define int long long
using namespace std;

int lps (string &str) {
	int n = str.size();
	vector<int> lps(n, 0);
	
	int len = 0, i = 1;
	while (i < n) {
		// equal characters
		if (str[i] == str[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else {
			// Case 1: nothing matched so far
			if (len == 0) {
				lps[i] = 0;
				i++;
			}
			// Case 2: recursive intuite and tricky part 
			else {
				len = lps[len - 1];
			}
		}
	}

	// for non overlapping parts of string
	//return (lps[n - 1] > (n / 2) ? (n / 2) : lps[n - 1]);
	
	// for overlapping parts of string 
	return lps[n - 1];
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string str;
	cin >> str;
	
	cout << lps (str);
	
	return 0;
}
