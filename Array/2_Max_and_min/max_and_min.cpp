/**
 *    author:  tanishq 
 *    created: 15.10.2020
 **/
#include <bits/stdc++.h>
using namespace std;

void minAndMax (int arr[], int n, int &min, int &max) {
	int i;  
	if (n == 1) {
		max = arr[0];
		min = arr[0];
	}
    if (n % 2 == 0) { 
        if (arr[0] > arr[1]) { 
            max = arr[0]; 
            min = arr[1]; 
        }  
        else { 
            min = arr[0]; 
            max = arr[1]; 
        } 
          
        // Set the startung index for loop  
        i = 2;  
    }  
    else { 
        min = arr[0]; 
        max = arr[0]; 
          
        i = 1;  
    } 
      
    while (i < n - 1) {          
        if (arr[i] > arr[i + 1]) { 
            if(arr[i] > max) {
				max = arr[i]; 
			}
                  
            if(arr[i + 1] < min) {
                min = arr[i + 1]; 
			}     
        }  
        else { 
            if (arr[i + 1] > max) {
                max = arr[i + 1]; 
			}
                  
            if (arr[i] < min) {
                min = arr[i];      
			}
        } 
          
        // Increment the index by 2 as  
        // two elements are processed in loop 
        i += 2;  
    }          
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	int n;
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int min = arr[0], max = arr[0];
	
	minAndMax (arr, n, min, max);
	
	cout << "min : " << min << " " << "\nmax : " << max;
	
	return 0;
} 
