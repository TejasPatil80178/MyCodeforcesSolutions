#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int s = 0;
	int k = 0;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(v[i] > v[i+1])
		{
			s = i;
			k++;
		}
	}
	if(v[n-1] > v[0])
	{
		s = n-1;
		k++;
	}
	if(k==0)
	{
		cout<<0;
	}
	else if(k>1)
	{
		cout<<-1;
	}
	else {
		cout<<n-1-s;
	}
	return 0;
}
