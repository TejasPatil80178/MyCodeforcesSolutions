#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n,0);
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	int j = 0;
	while(j<m){
		int x = 0;
		for(int i =0;i<n;i++)
		{
			x = max(x,(int)v[i][j]);
		}
		for(int  i= 0;i<n;i++)
		{
			v[i][0] = (int)v[i][j] - x;
			if((int)v[i][0] == 0)
			{
				a[i]++;
			}
		}
		j++;
	}
	int c = 0;
	for(int i =0;i<n;i++)
	{
		if(a[i] !=0)
		{
			c++;
		}
	}
	
	cout<<c;
	return 0;
}
