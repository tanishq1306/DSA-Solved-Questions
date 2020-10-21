/**
 *    author:  tanishq 
 *    created: 21.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
#define max 1000000
using namespace std;


int multiply (int multiplier, int fact[], int currSize ) {
	int carry = 0;
	
	for (int i = 0; i < currSize; i++) {
		int product = fact[i] * multiplier + carry;
		fact[i] = product % 10;
		carry = product / 10;
	}
	
	while (carry) {
		fact[currSize] = (carry % 10);
		carry /= 10;
		currSize++;
	}
	
	return currSize;	//which has changed to the new size
}

signed main() {
	
 	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int test_case;
	cin >> test_case;
	
	while (test_case--) {
		int n;
		cin >> n;
		
		int fact[max], currSize = 1;
		fact[0] = 1;	//factorial of 0 is - 1
		
		for (int i = 2; i <= n; i++) {
			currSize = multiply (i, fact, currSize);
		}
		
		//print the factorial of the number in reverse order
		for (int i = currSize - 1; i >= 0; i--) {
			cout << fact[i];
		}
	}
	
    return 0;
} 
