/**
 *    author:  tanishq 
 *    created: 18.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

// hardcode the characters
string hashKeypad[26] = {"2","22","222", 
                   "3","33","333", 
                   "4","44","444", 
                   "5","55","555", 
                   "6","66","666", 
                   "7","77","777","7777", 
                   "8","88","888", 
                   "9","99","999","9999"};         
           
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string str;
	getline(cin, str);
	
	for (char &ch : str) {
		if (ch == ' ')	cout << "0";
		cout << hashKeypad[(int)(ch - 'A')];
	}
	
	return 0;
}
