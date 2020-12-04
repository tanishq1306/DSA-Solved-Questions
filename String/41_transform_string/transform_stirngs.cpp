/**
 *    author:  tanishq 
 *    created: 04.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int minTransformation (string &a, string &b) {
	int n = a.size();
	int m = b.size();
	
	// cannot be transformed
	if (n != m) {
		return -1;
	}
	
	// check for freq count - must be same
	int freq[26] = {0};
	for (char &ch: a) {
		freq[ch - 'a']++;
	}
	
	for (char &ch: b) {
		freq[ch - 'a']--;
	}
	
	for (int i = 0; i < 26; i++) {
		if (freq[i] != 0) {
			return -1;
		}
	}
	
	int ans = 0, i = n - 1, j = n - 1;
	while (i >= 0 && j >= 0) {
		while (i >= 0 && a[i] != b[j]) {
			i--;
			ans++;
		}
		if (i >= 0) {
			i--;
			j--;
		}
	}
	
	return ans;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string a, b;
	cin >> a >> b;
	
	cout << minTransformation (a, b);
	
	return 0;
}




