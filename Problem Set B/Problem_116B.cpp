#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	int k = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j]=='P')
			{
				if(i>=1)
				{
					if(v[i-1][j]=='W')
					{
						v[i-1][j]='.';
						k++;
					}
				}
				if(j>=1)
				{
					if(v[i][j-1]=='W')
					{
						v[i][j-1]='.';
						k++;
					}
				}
				if(i>=0&&i<=n-2 )
				{
					if(v[i+1][j]=='W')
					{
						v[i+1][j]='.';
						k++;
					}
				}
				if(j>=0 && j<=m-2)
				{
					if(v[i][j+1]=='W')
					{
						v[i][j+1]='.';
						k++;
					}
				}
			}
		}
	}
	cout<<k;
	return 0;
}
