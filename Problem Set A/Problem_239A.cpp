#include <bits/stdc++.h>
using namespace std;

int main() {
	bool flag = false;
	long long y,n,k;
	cin>>y>>k>>n;
	long long t = ceil((double)(1+y) / (double)k);
	long long x = (k*t) - y;
	while((x+y) <= n)
	{
		flag = true;
		cout<<x<<" ";
		t++;
		x = (k*t) - y;
	}
	
	if(flag == false)
	{
		cout<<-1;
	}
	return 0;
}
