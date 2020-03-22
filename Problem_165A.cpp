#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count = 0;
	int a[n][2];
	for(int i= 0;i<n;i++)
	{
		cin>>a[i][0];
		cin>>a[i][1];
	}
	for(int i = 0;i<n;i++)
	{
		int a1 = 0;int a2 = 0;int a3 = 0;int a4 = 0;
		
		for(int j = 0;j<n;j++)
		{
			if(a[i][0] == a[j][0])
			{
				if(a[i][1] < a[j][1])
				{
					a1++;
				}
				if(a[i][1] > a[j][1])
				{
					a2++;
				}
			}
			if(a[i][1] == a[j][1])
			{
				if(a[i][0] < a[j][0])
				{
					a3++;
				}
				if(a[i][0] > a[j][0])
				{
					a4++;
				}
			}
		}
		if(a1!=0 && a2!=0 && a3!=0 && a4!=0)
		{
			count++;
		}
	}
	
	cout<<count;
	return 0;
}
