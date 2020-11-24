/**
 *    author:  tanishq 
 *    created: 24.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int value(char r) {
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}

int romanToDecimal (string &str) {
	int ans = 0, indx;
	for (indx = 0; indx < (int)str.size() - 1; indx++) {
		int curr = value(str[indx]);
		int nxt = value(str[indx + 1]);
		if (curr >= nxt) {
			ans += curr;
		}
		else {
			ans += nxt - curr;
			indx++;	// increase the indx "ex - CM, IV, IX"
		}
	}
	
	// add the value of last character if not reached
	if (indx == (int)str.size() - 1) {
		ans += value(str[indx]);
	}
	
	return ans;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string str;
	cin >> str;
	
	cout << romanToDecimal(str);
	
	return 0;
}
