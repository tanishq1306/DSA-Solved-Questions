/**
 *    author:  tanishq 
 *    created: 04.11.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

void rotate_90_Degree_Clockwise (int a[][100], int n) {
	for (int i = 0; i < n / 2; i++) { 
        for (int j = i; j < n - i - 1; j++) {  
            // Swap elements of each cycle 
            // in clockwise direction 
            int temp = a[i][j]; 
            a[i][j] = a[n - 1 - j][i]; 
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j]; 
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i]; 
            a[j][n - 1 - i] = temp; 
        } 
    } 
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	int mat[100][100];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
	
	rotate_90_Degree_Clockwise (mat, n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}
	
    return 0;
} 


