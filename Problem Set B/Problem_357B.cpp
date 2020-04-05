#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> v(n+1,0);
	while(m>0)
	{
		int x,y,z;
		cin>>x>>y>>z;
		vector<int> v1 = {1,2,3};
		bool b1,b2,b3;
		b1 = 1;b2 = 1;b3 = 1;
		auto it = find(v1.begin(),v1.end(),v[x]);
		if(it!=v1.end())
		{
			b1 = 0;
			v1.erase(it);
		}
		it = find(v1.begin(),v1.end(),v[y]);
		if(it!=v1.end())
		{
			b2 = 0;
			v1.erase(it);
		}
		it = find(v1.begin(),v1.end(),v[z]);
		if(it!=v1.end())
		{
			b3 = 0;
			v1.erase(it);
		}
		if(b1)
		{
			v[x] = v1.front();
			v1.erase(v1.begin());
		}
		if(b2)
		{
			v[y] = v1.front();
			v1.erase(v1.begin());
		}
		if(b3)
		{
			v[z] = v1.front();
			v1.erase(v1.begin());
		}
		m--;
	}
	
	for(int i=1;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
