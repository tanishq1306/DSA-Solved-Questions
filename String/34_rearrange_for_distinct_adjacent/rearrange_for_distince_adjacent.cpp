/**
 *    author:  tanishq 
 *    created: 01.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int test_cases;
	cin >> test_cases;
	
	while (test_cases--) {
		string str;
		cin >> str;
		
		unordered_map<char, int> freq;   
		int maxFreq = 0, n = str.size(); 
		for (int i = 0; i < n; i++) { 
			freq[str[i]]++; 
			if (freq[str[i]] > maxFreq) {
				maxFreq = freq[str[i]]; 
			}
		} 
	  
		if (maxFreq <= (n - maxFreq + 1)) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
	
	return 0;
}



