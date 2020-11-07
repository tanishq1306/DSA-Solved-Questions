/**
 *    author:  tanishq 
 *    created: 07.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPalindrome(string S)
{
	// Your code goes here
	int n = (int)S.size();
	for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
		if (S[i] != S[j]) {
			return 0;
		}
	}
	return 1;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	cin >> str;
	
	if (isPalindrome(str)) {
		cout << "Yes a Palindrome";
	}
	else {
		cout << "No not a Palindrome";
	}
	
    return 0;
} 


