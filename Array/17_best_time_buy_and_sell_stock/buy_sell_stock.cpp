/**
 *    author:  tanishq 
 *    created: 18.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int maxProfit(vector<int> &prices, int n) {
	if (n == 0) {
		return 0;
	}
	
	int ans = 0;
	int costPrice = prices[0];
	
	for (int i = 1; i < n; i++) {
		int profit = prices[i] - costPrice;
		ans = max (ans, profit);
		costPrice = min (costPrice, prices[i]);
	}
	
	return ans;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> stocksPrice(n);
	for (int i = 0; i < n; i++) {
		cin >> stocksPrice[i];
	}
	
	int ans = maxProfit (stocksPrice, n);
	
	cout << ans;
	
    return 0;
} 
