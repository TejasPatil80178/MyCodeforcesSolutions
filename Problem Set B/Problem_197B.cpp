#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1,0);
	vector<int> b(m+1,0);
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=m;i++)
	{
		cin>>b[i];
	}
	if(n>m)
	{
		if(a[0]<0 && b[0]<0 || a[0]>0&&b[0]>0)
		{
			cout<<"Infinity";
		}
		else
		{
			cout<<"-Infinity";
		}
	}
	else if(m>n)
	{
		cout<<"0/1";
	}
	else{
		if(a[0]==0)
		{
			cout<<"0/1";
			return 0;
		}
		if(b[0]==0)
		{
			cout<<"Infinity";
			return 0;
		}
		int x = __gcd(a[0],b[0]);
		a[0] = a[0] / x;
		b[0] = b[0] / x;
		if(a[0]<0 && b[0]<0 || a[0]>0&&b[0]>0)
		{
			cout<<a[0]<<"/"<<b[0];
		}
		else
		{
			cout<<"-"<<abs(a[0])<<"/"<<abs(b[0]);
		}
	}
	return 0;
}
