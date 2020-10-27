/**
 *    author:  tanishq 
 *    created: 27.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> prices(n);
	for (int i = 0; i < n; i++) {
		cin >> prices[i];
	}
	
	// Firstly calculate the pref[] - maxProfitSoFar from Left that stores the value that is -
	// if we have to "SELL" the stock on the ith day then
	// what is the minimum buying price we have seen so far i.e maximize the profit on the ith day so far
	
	vector<int> maxProfitSoFar_L(n);
	int minCostPrice = prices[0];
	
	// there is no stock on the left of this stock therefore
	// max profit so far that can be eaned on the 0th day is 0
	maxProfitSoFar_L[0] = 0;	
	
	// iterate from the day 1 to n
	// and keep the track of max profit that can be earned so far on the ith day
	// and the minCostPrice so far on the left of the ith day
	for (int i = 1; i < n; i++) {
		maxProfitSoFar_L[i] = max(prices[i] - minCostPrice, maxProfitSoFar_L[i - 1]);
		minCostPrice = min (minCostPrice, prices[i]);
	}
	
	// Secondly calculate the suff[] - maxProfitSoFar from Right that stores the value
	// if we have to "BUY" the stock on the ith day then what so far on the right 
	// maxSellingPrice we have seen
	
	vector<int> maxProfitSoFar_R(n);
	maxProfitSoFar_R[n - 1] = 0;
	
	int maxSellingPrice = prices[n - 1];
	
	for (int i = n - 2; i >= 0; i--) {
		maxProfitSoFar_R[i] = max(maxSellingPrice - prices[i], maxProfitSoFar_R[i + 1]);
		maxSellingPrice = max (maxSellingPrice, prices[i]);
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = max (ans, maxProfitSoFar_L[i] + maxProfitSoFar_R[i]);
	}
	
	cout << ans;
	
    return 0;
} 
