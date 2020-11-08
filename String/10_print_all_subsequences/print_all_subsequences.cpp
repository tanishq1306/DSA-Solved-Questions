/**
 *    author:  tanishq 
 *    created: 08.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

// Using bitmasking - O(2 ^ n)

void printAllSubsequence (string str) {
	int n = str.size();
	unordered_set<string> s;
	
	for (int mask = 0; mask < (1 << n); mask++) {
		string sub = "";
		for (int i = 0; i < n; i++) {
			if ((mask & (1 << i))) {
				sub += str[i];
			}
		}
		if (sub.size()) {
			s.insert (sub);
		}
	}
	
	// print all the subsequences
	for (auto it : s) {
		cout << it << "\n";
	}
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	cin >> str;
	
	printAllSubsequence (str);
	
    return 0;
} 


