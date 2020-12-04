/**
 *    author:  tanishq 
 *    created: 04.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isomorphicStrings(string &str1, string &str2){
    if (str1.length() != str2.length()) {
        return false;
    }
    
    int freq1[26] = {0}, freq2[26] = {0};
    for (char ch : str1)    
		freq1[ch - 'a']++;
    
    for (char ch : str2)    
		freq2[ch - 'a']++;
    
    for (int i = 0; i < (int)str1.length(); i++) {
        if (freq1[str1[i] - 'a'] != freq2[str2[i] - 'a']) {
            return false;
        }
    }
    
    return true;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string a, b;
	cin >> a >> b;
	
	if (isomorphicStrings(a, b)) {
		cout << "Yes Strings are Isomorphic";
	}
	else {
		cout << "No Strings are not Isomorphic";
	}
		
	return 0;
}




