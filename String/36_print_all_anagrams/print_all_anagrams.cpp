/**
 *    author:  tanishq 
 *    created: 01.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<string>> Anagrams(vector<string>& wordList) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> unmp;
    
    for (int i = 0; i < (int)wordList.size(); i++) {
		string sortedString = wordList[i];
		sort(sortedString.begin(), sortedString.end());
		unmp[sortedString].push_back(wordList[i]);
	}
	
	int indx = 0;
	ans.resize(unmp.size());
	for (auto it: unmp) {
		for (auto itr : it.second) {
			ans[indx].push_back(itr);
		}
		indx++;
	}
	
    return ans;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int n;
	cin >> n;
	
	vector<string> wordList(n);
	for (int i = 0; i < n; i++) {
		cin >> wordList[i];
	}
	
	vector<vector<string>> ans = Anagrams(wordList);
	for (auto i: ans) {
		for (auto j: i) {
			cout << j << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
