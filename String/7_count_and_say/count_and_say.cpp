/**
 *    author:  tanishq 
 *    created: 08.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

string solve (string str) {
	if (str == "1") {
		return "11";
	}
	
	str += '.'; // terminating character
	int n = str.size(), cnt = 1;
	string ans = "";
	
	for (int i = 0; i < n - 1; i++) {
		if (str[i] == str[i + 1]) {
			cnt++;
		}
		else {
			ans += to_string(cnt) + str[i];
			cnt = 1;
		}
	}
	
	return ans;
}

string countAndSay(int n) {
	string ans = "1";
	
	for (int i = 2; i <= n; i++) {
		ans = solve (ans);
	}
	
	return ans;
}  

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
		
	int n;
	cin >> n;
	
	cout << countAndSay(n);
	
    return 0;
} 


