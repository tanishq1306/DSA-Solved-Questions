/**
 *    author:  tanishq 
 *    created: 21.10.2020
 **/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int inversionCount = 0;

void merge (vector<int> &arr, int low, int mid, int high) {
	int n1 = mid - low + 1;		//denotes the size of the Left half of the array
	int n2 = high - mid;		//denotes the size of the Right half of the array
	int Left_Arr[n1], Right_Arr[n2]; 
  
	//fill left and right array
    for (int i = 0; i < n1; i++) {
        Left_Arr[i] = arr[low + i]; 
	}
	
    for (int i = 0; i < n2; i++) {
        Right_Arr[i] = arr[mid + 1 + i]; 
	}
  
    int indx_left = 0;
    int indx_right = 0;
    int indx_arr = low;
    
    while (indx_left < n1 && indx_right < n2) { 
        if (Left_Arr[indx_left] <= Right_Arr[indx_right]) { 
            arr[indx_arr] = Left_Arr[indx_left]; 
            indx_left++; 
        } 
        else { 
			// transfering element from the right sub half
			// to the left sub half
            arr[indx_arr] = Right_Arr[indx_right]; 
            inversionCount += (n1 - indx_left);
            indx_right++; 
        } 
        indx_arr++;
    } 
  
    while (indx_left < n1) { 
        arr[indx_arr] = Left_Arr[indx_left]; 
        indx_left++; 
        indx_arr++;
    } 
  
    while (indx_right < n2) { 
        arr[indx_arr] = Right_Arr[indx_right]; 
        indx_right++; 
        indx_arr++;
    } 
}

void mergeSort (vector<int> &a, int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		mergeSort (a, low, mid);
		mergeSort (a, mid + 1, high);
		merge (a, low, mid, high);
	}
}

signed main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int test_cases;
	cin >> test_cases;
	
	while (test_cases--) {
		int n;
		cin >> n;
		
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		//set inversion Count as 0 as it is a global variable
		inversionCount = 0;
		mergeSort (a, 0, n - 1);
			
		cout << inversionCount << "\n";
	}
	
    return 0;
} 
