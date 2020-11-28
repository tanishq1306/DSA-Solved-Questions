/**
 *    author:  tanishq 
 *    created: 28.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

string grid[1001], str;
int x[] = {-1, -1, -1, 0, 0, 1, 1, 1}; 
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};    
int n;
  
bool search (int i, int j) {
	// first character mismatch
	if (str[0] != grid[i][j]) {
		return false;
	}
	
	for (int indx = 0; indx < 8; indx++) {
		int len = 1;
		int moveR = x[indx] + i, moveC = y[indx] + j;
		
		for (int k = 1; k < (int)str.size(); k++, len++) {
			// out of bound exception
			if (moveR >= n || moveR < 0 || moveC >= n || moveC < 0) {
				break;
			}
			
			// character mismatch
			if (grid[moveR][moveC] != str[k]) {
				break;
			}
			
			moveR += x[indx];
			moveC += y[indx];
		}
	
		if (len == (int)str.size()) {
			return true;
		}
	}
	
	return false;
}

int countInGrid () {
	// start searching from (i, j)
	// in all directions
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (search(i, j)) {
				count++;
			}
		}
	}
	
	return count;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> grid[i];
	}
	
	cin >> str;    	
	cout << countInGrid() << endl;
	
	return 0;
}

