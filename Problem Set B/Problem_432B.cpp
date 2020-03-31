///// O(n^2) algorithm
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	int b[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			b[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		int j = 0;
		while(j<n)
		{
			if(j!=i)
			{
				if(a[i][0]!=a[j][1])
				{
					b[j][1]++;
				}
				else{
					b[j][0]++;
				}
				b[i][0]++;
			}
			j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
} */

//// Optimized Code

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int b[n];
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		m[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<(n-1 + m[b[i]])<<" "<<(n-1-m[b[i]])<<endl;
	}
	return 0;
}
