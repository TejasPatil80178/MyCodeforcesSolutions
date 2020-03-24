#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	bool flag = false;
	//int a[n][m];
	for(int  i =0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			int t;
			cin>>t;
			if(t==1)
			{
				if(i==0)
				{
					flag = true;
					break;
				}
				if(i==n-1)
				{
					flag = true;
					break;
				}
				if(j==0)
				{
					flag = true;
					break;
				}
				if(j==m-1)
				{
					flag = true;
					break;
				}
			}
		}
	}
	if(flag==true)
	{
		cout<<2;
	}
	else{
		cout<<4;
	}
	return 0;
}
