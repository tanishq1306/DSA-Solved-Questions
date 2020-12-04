/**
 *    author:  tanishq 
 *    created: 04.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int r, c;
vector<vector<string>> str;

void fun (int row, vector<string> ans) {
	if (row >= r) {
		cout << endl;
		return;
	}
	
	if (row == r - 1) {
		for (int i = 0; i < (int)str[row].size(); i++) {
			for (auto it: ans) {
				cout << it << " ";
			}
			cout << str[row][i] << endl;
		}	
		return;
	}
	
	for (int i = 0; i < (int)str[row].size(); i++) {
		ans.push_back (str[row][i]);
		fun (row + 1, ans);
		ans.pop_back ();
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	// enter row count
	cin >> r;
	str.resize(r);
	
	for (int i = 0; i < r; i++) {
		// enter col count
		cin >> c;
		str[i].resize(c);
		
		for (int j = 0; j < c; j++) {
			cin >> str[i][j];
		}
	}
	
	vector<string> ans;
	fun (0, ans);
	
	return 0;
}




