/**
 *    author:  tanishq 
 *    created: 11.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<string> vstr;
void permute (string str, int l, int r) {
    if (l == r) {
        vstr.push_back (str);
    }
    else { 
        for (int i = l; i <= r; i++) {
            swap (str[l], str[i]);
            permute (str, l + 1, r);
            swap (str[l], str[i]);
        }
    }
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int t;  
	cin >> t;
	
	while (t--) {
    	string str;
    	cin >> str;
    	
    	permute (str, 0, (int)str.size() - 1);
    	sort (vstr.begin(), vstr.end());
    	
    	for (auto s : vstr) {
			cout << s << " ";
		}
		
    	cout << endl;
    	vstr.clear();
	}
	
	return 0;
}
