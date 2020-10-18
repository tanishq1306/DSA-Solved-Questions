/**
 *    author:  tanishq 
 *    created: 17.10.2020
 **/
//Reference -> Youtube tutorial -> Channel Name - take You forward (Placement Series).
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge (vector<vector<int>> &intervals) {
	int n = intervals.size();
	vector<vector<int>> mergedIntervals;
	
	if (n == 0) {
		return mergedIntervals;
	}
	
	sort(intervals.begin(), intervals.end());
	
	vector<int> newInterval = intervals[0];
	
	for (int i = 1; i < n; i++) {
		if (intervals[i][0] <= newInterval[1]) {
			newInterval[1] = max (intervals[i][1], newInterval[1]);
		}
		else {
			mergedIntervals.push_back (newInterval);
			newInterval = intervals[i];
		}
	}
	
	mergedIntervals.push_back (newInterval);
	return mergedIntervals;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<vector<int>> intervals(n);
	for (int i = 0; i < n; i++) {
		int a, b;	cin >> a >> b;
		intervals[i].push_back (a);
		intervals[i].push_back (b);
	}
	
	vector<vector<int>> mergedIntervals = merge (intervals);
	
	for (auto it : mergedIntervals) {
		cout << "["<< it[0] << ", " << it[1] << "]\n";
	}
	
    return 0;
} 

