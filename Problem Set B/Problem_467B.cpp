#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<string> v;
	for(int i=0;i<=m;i++)
	{
		long long x;
		cin>>x;
		string s = bitset<20>(x).to_string();
	//	cout<<s<<endl;
		v.push_back(s);
	}
	int i=0;
	int c = 0;
	while(i<m)
	{
		int d = 0;
		for(int j=0;j<20;j++)
		{
			if(v[i][j] != v[m][j])
			{
			    //cout<<v[i][j]<<" "<<v[m][j]<<endl;
			    d++;
			}
		}
		if(d<=k)
		{
			c++;
		}
		i++;
	}
	
	cout<<c;
	return 0;
	
}
