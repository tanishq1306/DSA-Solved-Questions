/**
 *    author:  tanishq 
 *    created: 01.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

string compress (string &str) {
	string compressedStr = "";
	for (int i = 1; i < (int)str.size(); i++) {
		if (str[i] == str[i - 1]) {
			continue;
		}
		compressedStr += str[i - 1]; 
	}
	compressedStr += str.back();
	
	return compressedStr;
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
		
		cout << compress(str) << endl;
	}
	
	return 0;
}




