/**
 *    author:  tanishq 
 *    created: 07.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	cin >> str;

	int freq[26] = {0};
	for (auto it : str) {
		freq[it - 'a']++;
	}
	
	for (int i = 0; i < 26; i++) {
		if (freq[i] > 1) {
			cout << "Character is :" << (char)(i + 'a') << " & count : "<< freq[i] << endl;
		}
	}
	
    return 0;
} 


