#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int k = 0;
	int min = INT_MAX;
	int i = k+1;
	while(i<n-1)
	{
		if(v[i] > v[i+1])
		{
			if(v[i] < min)
			{
				min = v[i];
			}
			k = i;
		}
		else{
			if(v[i+1] < min)
			{
				min = v[i+1];
			}
			k = i+1;
		}
		i = k+1;
	}
	if(min > v[0])
	{
		min = v[0];
	}
	if(min > v[n-1])
	{
		min = v[n-1];
	}
	
	cout<<min;
	return 0;
}
