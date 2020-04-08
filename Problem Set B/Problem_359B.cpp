#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<=(2*n);i++)
	{
		v.push_back(i);
	}
	int  i = 1;
	while(k>0 && i<=(2*n - 3))
	{
		swap(v[i],v[i+2]);
		i = i+2;
		k--;
	}
	for(int i=1;i<=(2*n);i++)
	{
		cout<<v[i]<<" ";
	}
}
