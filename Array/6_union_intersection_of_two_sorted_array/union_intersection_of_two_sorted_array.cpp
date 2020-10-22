/**
 *    author:  tanishq 
 *    created: 16.10.2020
 **/ 
#include <bits/stdc++.h>
using namespace std;

void UnionAndIntersection (vector<int> &a, vector<int> &b, int n, int m) {
	vector<int> UnionSet;
	vector<int> IntersectionSet;
	int p1 = 0, p2 = 0;
	
	while (p1 < n && p2 < m) {
		if (a[p1] == b[p2]) {
			IntersectionSet.push_back (a[p1]);
			UnionSet.push_back (a[p1]);
			p1++;
			p2++;
		}
		else if (a[p1] < b[p2]) {
			UnionSet.push_back (a[p1]);
			p1++;
		}
		else {
			UnionSet.push_back (b[p2]);
			p2++;
		}
	}
	
	while (p1 < n) {
		UnionSet.push_back (a[p1]);
		p1++;
	}
	while (p2 < m) {
		UnionSet.push_back (b[p2]);
		p2++;
	}

	cout << "Union Set : ";
	for (int i = 0; i < (int)UnionSet.size(); i++) {
		cout << UnionSet[i] << " ";
	}
	
	cout << "\nIntersection Set : ";
	for (int i = 0; i < (int)IntersectionSet.size(); i++) {
		cout << IntersectionSet[i] << " ";
	}
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
  	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int m;
	cin >> m;
	
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}	
	
	UnionAndIntersection (a, b, n, m);
	
    return 0;
} 
