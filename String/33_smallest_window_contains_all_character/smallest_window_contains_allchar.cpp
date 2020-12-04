/**
 *    author:  tanishq 
 *    created: 02.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int findMinSubstring (string &str) {
	int n = str.length();
	int distinctCnt = 0;	// distinct character count
	int freq[26] = {0};
	
	for (int i = 0; i < n; i++) {
		if (freq[str[i] - 'a'] == 0) {
			freq[str[i] - 'a']++;
			distinctCnt++;
		}
	}

	string ans = "";
	int l = 0, cnt = 0, minLen = INT_MAX;
	int currCnt[26] = {0};
	
	for (int r = 0; r < n; r++) {
		currCnt[str[r] - 'a']++;
		
		if (currCnt[str[r] - 'a'] == freq[str[r] - 'a']) {
			cnt++;
		}
		
		if (cnt == distinctCnt) {
			while (l < r && currCnt[str[l] - 'a'] > freq[str[l] - 'a']) {
				currCnt[str[l] - 'a']--;
				l++;
			}
			
			int windowSize = r - l + 1;
			if (windowSize < minLen) {
				minLen = windowSize;
				ans = str.substr (l, windowSize);
			}
		}
	}
	
	return ans.length();
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int test_cases;
	cin >> test_cases;
	
	while (test_cases--) {
		string str;
		cin >> str;
		
		cout << findMinSubstring (str) << endl;
	}
	
	return 0;
}



