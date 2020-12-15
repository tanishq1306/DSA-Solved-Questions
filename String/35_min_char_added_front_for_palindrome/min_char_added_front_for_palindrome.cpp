/**
 *    author:  tanishq 
 *    created: 15.12.2020
**/

#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPalindrome(string str) {
	int l = 0;
	int h = str.size() - 1;
	while (h > l) {
		if (str[l++] != str[h--]) {
			return false;
		}
	}
	return true;
}

signed main() {
	string str;
	cin >> str;
	
	int cnt = 0;
	while (!isPalindrome(str)) {
		str.erase(str.begin() + str.length() - 1);
		cnt++;
	}
	
	cout << cnt;
	
	return 0;
}

