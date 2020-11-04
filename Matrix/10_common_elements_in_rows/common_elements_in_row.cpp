/**
 *    author:  tanishq 
 *    created: 04.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int mat[1000][1000];
	
vector<int> findCommonElements (int m, int n) { 
	unordered_map<int, int> mp; 
  
    for (int i = 0; i < m; i++) { 
		for (int j = 0; j < n; j++) { 
			if (i == 0) {
				mp[mat[i][j]]++;
				continue;
			}
			
            if (mp[mat[i][j]] == i) { 
                mp[mat[i][j]]++;
            } 
        } 
    }
    
	vector<int> commonEle;
	
    for (auto it : mp) {
		if (it.second == m) {
			commonEle.push_back (it.first);
		}
	}
	
    return commonEle; 
} 

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m, n;
	cin >> m >> n;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
	
	vector<int> commonEle = findCommonElements (m, n);
	
	for (auto &it : commonEle) {
		cout << it << " ";
	}
	
    return 0;
} 


