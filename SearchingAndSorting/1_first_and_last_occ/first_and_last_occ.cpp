/**
 *    author:  tanishq 
 *    created: 17.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int test_case;
	cin >> test_case;
	
	while (test_case--) {
		int n, k;
		cin >> n >> k;
		
		int first = -1, last = -1, x;
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x == k) {
				if (first == -1) {
					first = i + 1;
					last = i + 1;
				}
				else {
					last = i + 1;
				}
			}
		}
		if (first == -1) {
            cout << first << endl;
        }
        else {
		    cout << first << " " << last << endl;
        }
	}

	return 0;	
}
