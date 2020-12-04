/**
 *    author:  tanishq 
 *    created: 04.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int runCustomerSimulation (int availComp, string &seq) {
	int ans = 0;	// denotes the count of unsatisfied customers
	int occupied = 0;
	unordered_map<int, int> currUsers;
	
	for (int i = 0; i < (int)seq.length(); i++) {
		// seen previously
		if (currUsers.find(seq[i]) != currUsers.end()) {
			// if user is using a computer
			if (currUsers[seq[i]] == 2)
				occupied--;
			currUsers.erase(seq[i]);
		}
		else {
			if (occupied < availComp) {
				currUsers[seq[i]] = 2;
				occupied++;
			}
			else {
				// unsatisfied user push it into the queue
				ans++;
				currUsers[seq[i]] = 1;
			}
		}
	}
	
	return ans;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int numOfComp;
	string seq;
	cin >> numOfComp >> seq;
	
	cout << runCustomerSimulation (numOfComp, seq);
	
	return 0;
}




