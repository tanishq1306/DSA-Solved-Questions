/**
 *    author:  tanishq 
 *    created: 25.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
     Idea behind using arrays
	 (-1,-1) (-1,0) (-1,1)
		   \	|    /
			\   |   / 
	         \  |  / 		
  (0,-1) - - -(x,y)- - - (0, 1)   
		     /  |  \ 
			/   |   \
		   /    |    \
       (1,-1) (1,0)  (1,1)
          
*/        
string str;
int r, c;

char grid[101][101];
int x[] = {-1, -1, -1, 0, 0, 1, 1, 1}; 
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};    
  
bool search (int i, int j) {
	// first character mismatch
	if (str[0] != grid[i][j]) {
		return false;
	}
    //cout << i << " " << j << endl;
	for (int indx = 0; indx < 8; indx++) {
		int len = 1;
		int moveR = x[indx] + i, moveC = y[indx] + j;
		
		for (int k = 1; k < (int)str.size(); k++, len++) {
			// out of bound exception
			if (moveR >= r || moveR < 0 || moveC >= c || moveC < 0) {
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

bool searchInGrid () {
	// start searching from (i, j)
	// in all directions
	bool found = false;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (search(i, j)) {
				cout << i << " " << j << ", ";
				found = true;
			}
		}
	}
	if (found)  cout << endl;
	return found;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	int test_cases;
	cin >> test_cases;
	
	while (test_cases--) {
    	cin >> r >> c;
    	
    	for (int i = 0; i < r; i++) {
    		for (int j = 0; j < c; j++) {
    			cin >> grid[i][j];
    		}
    	}
    	
    	
    	cin >> str;
    	
    	// search 
    	if (!searchInGrid()) {
    	    cout << -1 << endl;
    	}
	}
	
	return 0;
}

