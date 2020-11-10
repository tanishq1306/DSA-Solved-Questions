/**
 *    author:  tanishq 
 *    created: 10.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;
// Time Complexity - O(n ^ 2)
// Space Complexity - O(1)

string longestPalindromicSubstring (string &str) {
	int n = str.length();
	int startIndx= 0, maxLen = 1;
	
	for (int i = 1; i < n; i++) { 
        // Even length palindrome 
        int l = i - 1, r = i; 
        while (l >= 0 && r < n && str[l] == str[r]) { 
            if (r - l + 1 > maxLen) { 
                startIndx = l; 
                maxLen = r - l + 1; 
            } 
            l--; 
            r++; 
        } 
  
        // Odd length palindrome
        l = i - 1; 
        r = i + 1; 
        while (l >= 0 && r < n && str[l] == str[r]) { 
            if (r - l + 1 > maxLen) { 
                startIndx = l; 
                maxLen = r - l + 1; 
            } 
            l--; 
            r++; 
        } 
    } 
	
	return str.substr(startIndx, maxLen);
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	cin >> str;
	
	cout << longestPalindromicSubstring (str); 
	
    return 0;
} 


