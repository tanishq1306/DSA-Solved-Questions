/**
 *    author:  tanishq 
 *    created: 04.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

string findMinSubstring (string &str, string &pat) {
	int n = str.length(), m = pat.size();
	if (m > n) {
		return "-1";
	}
	
	int freqStr[26] = {0}, freqPat[26] = {0};
	for (int i = 0; i < m; i++) {
		freqPat[pat[i] - 'a']++;
	}
	
	int l = 0, minLen = INT_MAX, cnt = 0;
	string ans = "";
	
	for (int i = 0; i < n; i++) {
		freqStr[str[i] - 'a']++;
		
		if (freqPat[str[i] - 'a'] != 0 &&
				freqStr[str[i] - 'a'] <= freqPat[str[i] - 'a']) {
			cnt++;
		}
		
		if (cnt == m) {
			while ((freqStr[str[l] - 'a'] > freqPat[str[l] - 'a']) || 
						freqPat[str[l] - 'a'] == 0) {
				if (freqStr[str[l] - 'a'] > freqPat[str[l] - 'a']) {
					freqStr[str[l] - 'a']--;
				}
				l++;
			}
			
			if ((i - l + 1) < minLen) {
				minLen = i - l + 1;
				ans.clear();
				ans = str.substr(l, minLen);
			}
		}
	}
	
	return (ans.size() == 0? "-1": ans);
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	

	string txt, pattern;
	cin >> txt >> pattern;

	cout << findMinSubstring (txt, pattern) << endl;
	
	return 0;
}



