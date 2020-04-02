#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int max = INT_MIN;
	int k = 2;
	cin>>n;
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	else if(n==2)
	{
		cout<<2;
		return 0;
	}
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=2;i<n;i++)
	{
		if(v[i]==(v[i-1] + v[i-2]))
		{
			k++;
		}
		else
		{
			if(k>max)
			{
				max = k;
			}
			k = 2;
		}
	}
	if(k>max)
	{
		cout<<k;
	}
	else{
		cout<<max;
	}
	
	return 0;
}
