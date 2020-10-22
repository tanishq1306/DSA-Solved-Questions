/**
 *    author:  tanishq 
 *    created: 18.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

//calculate gap
int nextGap (int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
 
//gap algorithm
void merge (vector <int> &a, vector <int> &b, int n, int m) {
	int i, j, gap = n + m;
    
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (a[i] > a[i + gap])
                swap(a[i], a[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; i < n && j < m;
             i++, j++)
            if (a[i] > b[j])
                swap(a[i], b[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (b[j] > b[j + gap])
                    swap(b[j], b[j + gap]);
        }
    }
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	
	merge (a, b, n, m);
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	for (int i = 0; i < m; i++) {
		cout << b[i] << " ";
	}
	
    return 0;
} 
