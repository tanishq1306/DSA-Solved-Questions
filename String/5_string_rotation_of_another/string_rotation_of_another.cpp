/**
 *    author:  tanishq 
 *    created: 07.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool areRotations(string str1, string str2) { 
	int n1 = str1.size();
	int n2 = str2.size();
	
	if (n1 != n2) {
		return false; 
	}
	
	string str = str1 + str1;
	int n = str.size();
	
	for (int i = 0; i < n; i++) {
		bool found = true;
		for (int j = 0; j < n2; j++) {
			if (str[i + j] != str2[j]) {
				found = false;
				break;
			}
		}
		if (found) {
			return true;
		}
	}
	
	return false;
} 

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str1, str2;
	cin >> str1 >> str2;
	
	
	if (areRotations(str1, str2)) {
		cout << "Strings are rotations of each other" << endl; 
	}
	else {
		cout << "Strings are not rotations of each other" << endl; 
	}
	
    return 0;
} 


