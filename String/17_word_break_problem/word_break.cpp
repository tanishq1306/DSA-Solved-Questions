/**
 *    author:  tanishq 
 *    created: 20.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string, bool> Hash;

bool wordBreak (string str) {
	if (str.empty()) {
		return true;
	}
	
	// try every prefix of str
	for (int i = 1; i <= (int)str.size(); i++) {
		if (Hash.find(str.substr(0, i)) != Hash.end()) {
			if (wordBreak(str.substr(i))) {
			    return true;
			}
		}
	}
	return false; 
}


signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		Hash[word] = true;
	}
	
	string A;
	cin >> A;
	
	if (wordBreak (A)) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	
	return 0;
}
