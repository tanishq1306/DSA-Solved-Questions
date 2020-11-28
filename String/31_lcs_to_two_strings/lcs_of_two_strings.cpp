/**
 *    author:  tanishq 
 *    created: 28.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int lcs(int m, int n, string &s1, string &s2){
    if (m == 0 || n == 0) {
        return 0;
    }
    
    if (s1[m - 1] == s2[n - 1]) {
        return 1 + lcs (m - 1, n - 1, s1, s2);
    }
    
    return max(lcs(m - 1, n, s1, s2),
                lcs(m, n - 1, s1, s2));
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int m, n;
	cin >> m >> n;
	
	string s1, s2;
	cin >> s1 >> s2;
	
	cout << lcs (m, n, s1, s2);
	
	return 0;
}


