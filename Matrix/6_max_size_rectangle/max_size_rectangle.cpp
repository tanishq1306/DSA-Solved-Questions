/**
 *    author:  tanishq 
 *    created: 03.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int maxAreaHistogram (vector<int> &h) {
	int n = h.size();
	
	stack<int> stk1, stk2;
	vector<int> nsr, nsl;
	
    //nearest smaller to left
    for (int i = 0; i < n; i++) {
        if (stk1.empty()) {
            nsl.push_back (-1);
        }
        else {
            while (!stk1.empty() && h[stk1.top()] >= h[i]) {
                stk1.pop();
            }
            if (stk1.empty()) {
                nsl.push_back (-1);
            }
            else {
                nsl.push_back (stk1.top());
            }
        }
        stk1.push (i);
    }
	
	//nearest smaller to right
	for (int i = n - 1; i >= 0; i--) {
		if (stk2.empty()) {
            nsr.push_back (n);
        }
        else {
            while (!stk2.empty() && h[stk2.top()] >= h[i]) {
                stk2.pop();
            }
            if (stk2.empty()) {
                nsr.push_back (n);
            }
            else {
                nsr.push_back (stk2.top());
            }
        }
        stk2.push (i);
	}
	
	reverse (nsr.begin(), nsr.end());
	
	int area = 0;
	for (int i = 0; i < n; i++) {
		area = max (area, h[i] * (nsr[i] - nsl[i] - 1));
	}
	
	return area;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (auto &row : v) {
		for (auto &col : row) {
			cin >> col;
		}
	}
	
	int ans = 0;
	vector<int> h(m, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j]) {
				h[j] += v[i][j]; 
			}
			else {
				h[j] = 0;
			}
		}
		ans = max(ans, maxAreaHistogram(h));
	}

	cout << ans << "\n";
	
    return 0;
} 

