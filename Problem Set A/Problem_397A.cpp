#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int s,e;
	cin>>s>>e;
	n-=1;
	vector<int> v(e,0);
	int k= 0;
	while(n>0)
	{
		int x,y;
		cin>>x>>y;
		if(x<s) x = s;
		if(y>e) y = e;
		for(int i=x;i>=s && i<y;i++)
		{
			if(v[i]!=1)
			{
				v[i] = 1;
				k++;
			}
		}
		n--;
	}
	cout<<(e-s)-k;
}
