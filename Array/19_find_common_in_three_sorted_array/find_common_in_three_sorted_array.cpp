/**
 *    author:  tanishq 
 *    created: 18.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[],
								int n1, int n2, int n3) {
	int i = 0, j = 0, k = 0;
	
	// set is used for the purpose of removeing duplicates and only included because -
	// one testcase on GFG is not allowing duplicate elements
	// in ans vector otherwise set is not required.
	set<int> s;
	
	while (i < n1 && j < n2 && k < n3) {
		// all three elements are equal
		if (A[i] == B[j] && B[j] == C[k]) {
			s.insert (A[n1]);
			i++,	j++,	k++;	
		}
		// move the pointer which is pointing to the smallest
		// comparing in all three ararys
		else if (A[i] <= B[j] && A[i] <= C[k]) {
			i++;
		}
		else if (B[j] <= A[i] && B[j] <= C[k]) {
			j++;
		}
		else if (C[k] <= A[i] && C[k] <= B[j]) {
			k++;
		}
	}
	
	vector<int> ans;
	for (auto it : s) {
		ans.push_back (it);
	}
	
	return ans;
}

void read (int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	
	int A[n1], B[n2], C[n3];
	
	read (A, n1);
	read (B, n2);
	read (C, n3);
	
	vector<int> ans = commonElements (A, B, C, n1, n2, n3);
	
	for (int i = 0; i < (int)ans.size(); i++) {
		cout << ans[i] << " ";
	}
	
	return 0;
} 
