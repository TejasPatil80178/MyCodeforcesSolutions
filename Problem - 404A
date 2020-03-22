#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<string> v;
	for(int i = 0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	int i =0;int j =0;
	char t = v[0][0]; //diagonal elements
	char k = v[0][1]; // nonDiagonalElement
	if(t==k)
	{
		cout<<"NO";
		return 0;
	}
	while(i<n && j<n)
	{
		if(v[i][j] != t || v[i][n-1-j] != t)
		{
			cout<<"NO";
			return 0;
		}
		v[i][j] = k;
		v[i][n-1-j] = k;
		i++;
		j++;
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(v[i][j] != k)
			{
				cout<<"NO";
				return 0;
			}
		}
	} 
	cout<<"YES";
	return 0;
}
