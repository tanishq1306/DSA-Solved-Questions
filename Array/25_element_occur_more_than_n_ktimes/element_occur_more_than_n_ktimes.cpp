/**
 *    author:  tanishq 
 *    created: 22.10.2020
 **/
 
#include <bits/stdc++.h>
#define int long long
using namespace std;

//method 1 - brute force O (n^2) time and O (1) space.
//method 2 - sorting the given array O (n logn) time and O (1) space.
//method 3 - using frequence array O (n) time and O (n) space.

int countOccurence(int arr[], int n, int k) { 
	unordered_map <int, int> un_mp;
    for (int i = 0; i < n; i++) {
        un_mp[arr[i]]++;
    }
    
    int ans = 0;
    for (auto it : un_mp) {
        if (it.second > (n / k)) {
            ans++;
        }
    }
    
    return ans;
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int ans = countOccurence (arr, n, k);
	
	cout << ans;
	
	return 0;
}

