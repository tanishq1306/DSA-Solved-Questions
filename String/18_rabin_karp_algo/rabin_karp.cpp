/**
 *    author:  tanishq 
 *    created: 18.11.2020
**/
// code snippet - gfg
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int d = 256;
const int q = 10007;

void RBSearch (const string &txt, const string &pat) {
	int m = pat.size();
	int n = txt.size();
	int i, j, p = 0, t = 0, h = 1;
	
	// calculating d^(m-1) % q
	for (int i = 0; i < m - 1; i++) {
		h = (h * d) % q;
	}
	
	// calculating the value of pattern and first window of txt
	// efficient way of calculating
	// p = (pat[0] * d ^ m-1) + (pat[1] * d ^ m - 2) + .... 
	for (int i = 0; i < m; i++) {
		p = (d * p + pat[i]) % q;  
        t = (d * t + txt[i]) % q;
	}
	
	// Slide the pattern over text one by one (rolling hash)  
    for (i = 0; i <= n - m; i++) {   
        
        // Check the hash values of current window of text  
        // and pattern. If the hash values match then only  
        // check for characters on by one  
        if (p == t) {  
            /* Check for characters one by one */
            for (j = 0; j < m; j++) {  
                if (txt[i + j] != pat[j])  
                    break;  
            }  
  
            // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]  
            if (j == m) {
                cout << "Pattern found at index " << i << endl;  
			}
        }  
  
        // Calculate hash value for next window of text: Remove  
        // leading digit, add trailing digit  
        if (i < n - m) {  
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;  
  
            // We might get negative value of t, converting it  
            // to positive  
            if (t < 0) { 
				t = (t + q);  
			}
        }  
    }  
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string text, pattern;
	cin >> text >> pattern;
	
	RBSearch (text, pattern);
	
	return 0;
}
