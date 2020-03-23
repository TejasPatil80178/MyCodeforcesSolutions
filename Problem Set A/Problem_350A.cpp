#include <bits/stdc++.h>
using namespace std;

int main() {
	int v;
	int n,m;
	cin>>n>>m;
	vector<int> a;
	vector<int> b;
	for(int i = 0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i = 0;i<m;i++)
	{
		int temp;
		cin>>temp;
		b.push_back(temp);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	v = a[n-1];
	if(a[n-1] >= b[0])
	{
		cout<<-1;
		return 0;
	}
	if((2*a[0]) >= b[0])
	{
		cout<<-1;
		return 0;
	}
	else{
		v = max((2*a[0]),v);
	}
	
	
	cout<<v;
	return 0;
}
