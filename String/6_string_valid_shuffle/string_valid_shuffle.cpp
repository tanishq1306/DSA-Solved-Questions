/**
 *    author:  tanishq 
 *    created: 08.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool shuffleCheck (string &first, string &second, string &result) {
	int n1 = first.size(), n2 = second.size(), n = result.size();
	if ((n1 + n2) != n) {
		return false;
	}
	
	int i = 0, j = 0, k = 0;
	while (k < n) {
		if (i < n1 && first[i] == result[k]) {
			i++;
		}
		else if (j < n2 && second[j] == result[k]) {
			j++;
		}
		else {
			return false;
		}
		k++;
	}
	
	if (i < n1 || j < n2) {
		return false;
	}
	
	return true;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string first, second;
	cin >> first >> second;
	
	int n;
	cin >> n;
	
	vector<string> results(n);
	
	for (int i = 0; i < n; i++) {
		cin >> results[i];
	}
	
	for (string result : results) {
		if (shuffleCheck(first, second, result)) {
			cout << "Valid shuffle\n";
		}
		else {
			cout << "Invalid shuffle\n";
		}
	}
	
    return 0;
} 


