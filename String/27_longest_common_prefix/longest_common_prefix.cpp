/**
 *    author:  tanishq 
 *    created: 24.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

string longestCommonPrefix (vector<string>& str) {
	int n = str.size();
	// base case
	if (n == 0) {
		return "";
	}
	
	int i = 0;
	string ans = "";
	while (i < (int)str[0].length()) {
		char ch = str[0][i];
		
		bool found = true;
		for (int j = 1; j < n; j++) {
			if ((int)str[j].length() >= i + 1) {
				if (str[j][i] != ch) {
					found = false;
					break;
				}
			}
			else {
				found = false;
				break;
			}
		}
		if (!found) {
			break;
		}
		
		ans += ch;
		i++;
	}

	return ans;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int n;
	cin >> n;
	
	vector<string> str(n);
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	
	cout << longestCommonPrefix (str);
	
	return 0;
}
