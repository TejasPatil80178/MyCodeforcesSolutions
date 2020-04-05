#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x0,y0;
	cin>>n>>x0>>y0;
	map<double,int> m;
	bool flag = 0;
	while(n>0)
	{
		int x1,y1;
		cin>>x1>>y1;
		if((x0-x1)!=0)
		{
			double x = (double)(y1-y0) / (double)(x1-x0);
			m[x]++;
		}
		else{
			flag = 1;
		}
		n--;
	}
	if(flag)
	{
		cout<<m.size() + 1;
	}
	else{
		cout<<m.size();
	}
	return 0;
}
