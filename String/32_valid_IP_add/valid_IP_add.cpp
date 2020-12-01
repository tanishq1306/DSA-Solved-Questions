/**
 *    author:  tanishq 
 *    created: 01.12.2020
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool checkValidIP (string &ip) 
{
	vector<string> v;
	int n = ip.size();
	string x = "";
	
	for (int i = 0; i < n; i++) 
	{
		if (ip[i] == '.') 
		{
			v.push_back(x);
			x.clear();
		}
		else 
		{
			x += ip[i];
		}
	}
	v.push_back(x);
	
	for (int i = 0; i < (int)v.size(); i++) 
	{
		if (v[i].length() > 3) 
		{
			return false;
		}
		if (v[i].length() > 1 && stoi(v[i]) != 0 && v[i][0] == '0') 
		{
			return false;
		}
		if (stoi(v[i]) < 0 || stoi(v[i]) > 255)
		{
			return false;
		}
	}
	
	return true;
}

signed main() 
{		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	cin >> str;
	
	int n = str.size();
	for (int i = 0; i < n - 3; i++) 
	{
		for (int j = i + 1; j < n - 2; j++) 
		{
			for (int k = j + 1; k < n - 1; k++) 
			{
				for (int l = k + 1; l < n; l++) 
				{
					if ((j - i) + (k - j) + (l - k) + (n - l)  == n) 
					{
						string sub = "";
						sub = str.substr(0, j - i) + '.' +
								str.substr(j, k - j) + '.' +
									str.substr(k, l - k) + '.' +
										str.substr(l);
						
						if (checkValidIP(sub)) 
							cout << sub << endl;
						
					}
				}
			}
		}
	}
	
	return 0;
}

